// Jakub Jankiewicz
// Micha³ Wojciechowski
// Tomasz Wójcik
// grupa: 442A
// Projekt z Grafiki Komputerowej "Flash 3D"
// z wykorzystaniem biblioteki Ming (ver. 2)

#include <iostream>
#include <vector>
using namespace std;

#include <windows.h>
#include "mingpp.h"     // plik bilbioteki ming dla jêzyka C++ (ming plus plus)

#include "sd3d.h"
using namespace simpleDriver3D;   // simple driver 3D

//------------------------------------------------------------------------------
// sta³e programu
//------------------------------------------------------------------------------
const int  FRAMES           = 180;                          // liczba klatel
const int  FPS              = 30;                           // liczba klatek / s
const int  WIDTH            = 640;                          // szerokoœæ
const int  HEIGHT           = 480;                          // i wysokoœæ filmu
const char OUTPUT_FILE[]    = "Flash3D.swf";                // wynikowy plik
const char FONT_FILE[]      = "CenturyGothic-B.fdb";        // plik z czcionk¹
const char FLASH_PLAYER[]   = "SAFlashPlayer.exe";          // flash player


//------------------------------------------------------------------------------
// funkcja sprawdza czy plik instnieje (korzysta z WINAPI)
//------------------------------------------------------------------------------
inline bool fileExists(const char* filename) {
    OFSTRUCT info;
    HFILE file = OpenFile(filename, &info, OF_EXIST);
    return file != HFILE_ERROR;
}
//------------------------------------------------------------------------------
// funkcja wyœwietla komunikat o b³êdzie
//------------------------------------------------------------------------------
inline void error(const char* message) {
    MessageBox(NULL, message, "Error", MB_OK | MB_ICONERROR);
}
//------------------------------------------------------------------------------
// funkcja zapisuje film flasha do pliku i uruchamia FlashPlayer-a
//------------------------------------------------------------------------------
inline void saveAndExecute(SWFMovie *movie, const char *filename) {
    movie->save(filename);
    if (fileExists(FLASH_PLAYER)) {
        ShellExecute(NULL, "open", FLASH_PLAYER, filename, "", SW_SHOW);
    } else {
        error((string("can't find file ") + FLASH_PLAYER).c_str());
    }
}
//------------------------------------------------------------------------------
// funkcja zapisuje na filmie etykiety z opisem projektu
//------------------------------------------------------------------------------
void drawDescription(SWFMovie* &movie, const char* fontFile) {
    SWFFont *font = new SWFFont(const_cast<char*>(fontFile));
    SWFText *text;
    string labels[] = {
        "Plik wygenerowany za pomoca programu \"Flash 3D\"",
        "(w programie wykorzystano biblioteke Ming: http://ming.sourceforge.net)",
        "Wykonanie:",
        "    Jakub Jankiewicz",
        "    Michal Wojciechowski",
        "    Tomasz Wojcik",
        "Grupa: 442A"
    };
    SWFDisplayItem *t;
    for (int i=0; i<7; ++i) {
        text = new SWFText();   // wyciek pamiêci
        text->setColor(0x00, 0xFF, 0x00);
        text->setFont(font);
        text->addString(labels[i].c_str());
        t = movie->add(text);
        t->move(10, i*15 + 20);
    }
}
//------------------------------------------------------------------------------
// funkcja zwrotna wywo³ywana dla ka¿dego obiektu przed renderingiem
//------------------------------------------------------------------------------
void modeling(Object* &o) {
    static float angle = 0.0f;
    static float zoom = 20.0f;
    static bool zoomOut = false;

    if (zoom > 28) {
        zoomOut = true;
    } else if (zoom < 10.0f) {
        zoomOut = false;
    }

    zoom += (zoomOut ? - 0.2f : 0.2f);

    o->resetPosition();
    o->move(0.0f, 0.0f, zoom);
    o->rotate(angle, 0.0f, 1.0f, 0.0f);
    o->rotate(angle, 1.0f, 1.0f, 1.0f);
    o->rotate(angle, 0.0f, 0.0f, 1.0f);
    o->rotate(angle, 1.0f, 0.0f, 0.0f);
    o->move(2, 0, 0);
    o->rotate(90, 0.0f, 1.0f, 0.0f);
    o->move(0, 2, 0);

    angle += 2.0f;
}
//------------------------------------------------------------------------------
// funkcja zwrotna wywo³ywana dla ka¿dego trójk¹ta
//------------------------------------------------------------------------------
void triangleFun(float* &a, float* &b, float* &c, void* &data) {
    SWFShape *shape = static_cast<SWFShape*>(data);
    shape->movePenTo(a[0], a[1]);
    shape->drawLineTo(b[0], b[1]);
    shape->drawLineTo(c[0], c[1]);
    //shape->drawLineTo(a[0], a[1]); 
}
//------------------------------------------------------------------------------
int main() {
    Ming_init();                                    // inicjacja bilbliotegi Ming
    SWFMovie *movie = new SWFMovie();               // tworznie nowego filmu
    movie->setDimension(WIDTH, HEIGHT);             // flasha i ustwienie
    movie->setBackground(0x33, 0x33, 0x33);         // parametrów
    movie->setFrames(FRAMES);
    movie->setRate(FPS);

    // tworzenie etykiet jeœli istnieje plik z czcionk¹
    if (fileExists(FONT_FILE)) {
        drawDescription(movie, FONT_FILE);
    } else {
        error((string("Font file: ") + FONT_FILE + " not found").c_str());
    }

    vector<SWFShape*> shape(FRAMES);
    for (register int i=0; i<FRAMES; ++i) {
         shape[i] = new SWFShape();                  // tworzenie tablicy kszta³tów
    }

    Object *teapot = NULL;
    Scene *scene = NULL;

    try {
        // plik z wierzcho³kami i trójk¹tami (vf - vertex face)
        teapot = new Object("teapot.vf");                   // tworznienie obiektu

        scene = new Scene(WIDTH, HEIGHT);                   // tworzenie sceny
        scene->frustum(-1, 1, -1, 1, 1.0, 1.7);             // i ustawienie
        scene->setModelingFun(modeling);                    // parametrów
        scene->setTriangleFun(triangleFun);
        scene->add(teapot);                                 // dodanie obiektu

        for (register int s=0; s<FRAMES; ++s) {             // iterowanie po klatkach
            shape[s]->setLine(1, 0x00, 0xFF, 0xFF);         // ustawienie stylu lini
            scene->render(shape[s]);                        // rendering sceny
            SWFDisplayItem *symbol = movie->add(shape[s]);  // dodanie do filmu
            movie->nextFrame();                             // nastêpna klatka
            movie->remove(symbol); // biblioteka ming dodaje symbol do ka¿dej klatki
        }
        saveAndExecute(movie, OUTPUT_FILE);                 // uruchomienie filmu
                                                            // w Flashplayer-ze
    } catch (simpleDriver3D::Exception &e) {
        error(e.what());
    }
    if (scene) {                        // usuniêcie zmiennych dynamicznych
        delete scene;                   // jeœli zosta³y zainicjowane
    }
    if (teapot) {
        delete teapot;
    }
    delete movie;
    for (register int i=0; i<FRAMES; ++i) {
        delete shape[i];
    }
    return 0;
}
