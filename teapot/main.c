#include <stdio.h>
#include <stdlib.h>

float teapot[][3] = {
    {0.7000, 0.0000, 1.2000},
    {0.6902, 0.0000, 1.2369},
    {0.7016, 0.0000, 1.2492},
    {0.7246, 0.0000, 1.2369},
    {0.7500, 0.0000, 1.2000},
    {0.6457, -0.2747, 1.2000},
    {0.6367, -0.2709, 1.2369},
    {0.6472, -0.2754, 1.2492},
    {0.6685, -0.2844, 1.2369},
    {0.6919, -0.2944, 1.2000},
    {0.4970, -0.4970, 1.2000},
    {0.4901, -0.4901, 1.2369},
    {0.4981, -0.4981, 1.2492},
    {0.5145, -0.5145, 1.2369},
    {0.5325, -0.5325, 1.2000},
    {0.2747, -0.6457, 1.2000},
    {0.2709, -0.6367, 1.2369},
    {0.2754, -0.6472, 1.2492},
    {0.2844, -0.6685, 1.2369},
    {0.2944, -0.6919, 1.2000},
    {0.0000, -0.7000, 1.2000},
    {0.0000, -0.6902, 1.2369},
    {0.0000, -0.7016, 1.2492},
    {0.0000, -0.7246, 1.2369},
    {0.0000, -0.7500, 1.2000},
    {-0.2937, -0.6457, 1.2000},
    {-0.2789, -0.6367, 1.2369},
    {-0.2777, -0.6472, 1.2492},
    {-0.2847, -0.6685, 1.2369},
    {-0.2944, -0.6919, 1.2000},
    {-0.5139, -0.4970, 1.2000},
    {-0.4972, -0.4901, 1.2369},
    {-0.5002, -0.4981, 1.2492},
    {-0.5147, -0.5145, 1.2369},
    {-0.5325, -0.5325, 1.2000},
    {-0.6521, -0.2747, 1.2000},
    {-0.6394, -0.2709, 1.2369},
    {-0.6480, -0.2754, 1.2492},
    {-0.6686, -0.2844, 1.2369},
    {-0.6919, -0.2944, 1.2000},
    {-0.7000, 0.0000, 1.2000},
    {-0.6902, 0.0000, 1.2369},
    {-0.7016, 0.0000, 1.2492},
    {-0.7246, 0.0000, 1.2369},
    {-0.7500, 0.0000, 1.2000},
    {-0.6457, 0.2747, 1.2000},
    {-0.6367, 0.2709, 1.2369},
    {-0.6472, 0.2754, 1.2492},
    {-0.6685, 0.2844, 1.2369},
    {-0.6919, 0.2944, 1.2000},
    {-0.4970, 0.4970, 1.2000},
    {-0.4901, 0.4901, 1.2369},
    {-0.4981, 0.4981, 1.2492},
    {-0.5145, 0.5145, 1.2369},
    {-0.5325, 0.5325, 1.2000},
    {-0.2747, 0.6457, 1.2000},
    {-0.2709, 0.6367, 1.2369},
    {-0.2754, 0.6472, 1.2492},
    {-0.2844, 0.6685, 1.2369},
    {-0.2944, 0.6919, 1.2000},
    {0.0000, 0.7000, 1.2000},
    {0.0000, 0.6902, 1.2369},
    {0.0000, 0.7016, 1.2492},
    {0.0000, 0.7246, 1.2369},
    {0.0000, 0.7500, 1.2000},
    {0.2747, 0.6457, 1.2000},
    {0.2709, 0.6367, 1.2369},
    {0.2754, 0.6472, 1.2492},
    {0.2844, 0.6685, 1.2369},
    {0.2944, 0.6919, 1.2000},
    {0.4970, 0.4970, 1.2000},
    {0.4901, 0.4901, 1.2369},
    {0.4981, 0.4981, 1.2492},
    {0.5145, 0.5145, 1.2369},
    {0.5325, 0.5325, 1.2000},
    {0.6457, 0.2747, 1.2000},
    {0.6367, 0.2709, 1.2369},
    {0.6472, 0.2754, 1.2492},
    {0.6685, 0.2844, 1.2369},
    {0.6919, 0.2944, 1.2000},
    {0.8418, 0.0000, 1.0037},
    {0.9219, 0.0000, 0.8109},
    {0.9785, 0.0000, 0.6252},
    {1.0000, 0.0000, 0.4500},
    {0.7766, -0.3304, 1.0037},
    {0.8504, -0.3618, 0.8109},
    {0.9027, -0.3841, 0.6252},
    {0.9225, -0.3925, 0.4500},
    {0.5977, -0.5977, 1.0037},
    {0.6545, -0.6545, 0.8109},
    {0.6947, -0.6947, 0.6252},
    {0.7100, -0.7100, 0.4500},
    {0.3304, -0.7766, 1.0037},
    {0.3618, -0.8504, 0.8109},
    {0.3841, -0.9027, 0.6252},
    {0.3925, -0.9225, 0.4500},
    {0.0000, -0.8418, 1.0037},
    {0.0000, -0.9219, 0.8109},
    {0.0000, -0.9785, 0.6252},
    {0.0000, -1.0000, 0.4500},
    {-0.3304, -0.7766, 1.0037},
    {-0.3618, -0.8504, 0.8109},
    {-0.3841, -0.9027, 0.6252},
    {-0.3925, -0.9225, 0.4500},
    {-0.5977, -0.5977, 1.0037},
    {-0.6545, -0.6545, 0.8109},
    {-0.6947, -0.6947, 0.6252},
    {-0.7100, -0.7100, 0.4500},
    {-0.7766, -0.3304, 1.0037},
    {-0.8504, -0.3618, 0.8109},
    {-0.9027, -0.3841, 0.6252},
    {-0.9225, -0.3925, 0.4500},
    {-0.8418, 0.0000, 1.0037},
    {-0.9219, 0.0000, 0.8109},
    {-0.9785, 0.0000, 0.6252},
    {-1.0000, 0.0000, 0.4500},
    {-0.7766, 0.3304, 1.0037},
    {-0.8504, 0.3618, 0.8109},
    {-0.9027, 0.3841, 0.6252},
    {-0.9225, 0.3925, 0.4500},
    {-0.5977, 0.5977, 1.0037},
    {-0.6545, 0.6545, 0.8109},
    {-0.6947, 0.6947, 0.6252},
    {-0.7100, 0.7100, 0.4500},
    {-0.3304, 0.7766, 1.0037},
    {-0.3618, 0.8504, 0.8109},
    {-0.3841, 0.9027, 0.6252},
    {-0.3925, 0.9225, 0.4500},
    {0.0000, 0.8418, 1.0037},
    {0.0000, 0.9219, 0.8109},
    {0.0000, 0.9785, 0.6252},
    {0.0000, 1.0000, 0.4500},
    {0.3304, 0.7766, 1.0037},
    {0.3618, 0.8504, 0.8109},
    {0.3841, 0.9027, 0.6252},
    {0.3925, 0.9225, 0.4500},
    {0.5977, 0.5977, 1.0037},
    {0.6545, 0.6545, 0.8109},
    {0.6947, 0.6947, 0.6252},
    {0.7100, 0.7100, 0.4500},
    {0.7766, 0.3304, 1.0037},
    {0.8504, 0.3618, 0.8109},
    {0.9027, 0.3841, 0.6252},
    {0.9225, 0.3925, 0.4500},
    {0.9609, 0.0000, 0.3018},
    {0.8750, 0.0000, 0.1922},
    {0.7891, 0.0000, 0.1178},
    {0.7500, 0.0000, 0.0750},
    {0.8865, -0.3772, 0.3018},
    {0.8072, -0.3434, 0.1922},
    {0.7279, -0.3097, 0.1178},
    {0.6919, -0.2944, 0.0750},
    {0.6823, -0.6823, 0.3018},
    {0.6212, -0.6212, 0.1922},
    {0.5602, -0.5602, 0.1178},
    {0.5325, -0.5325, 0.0750},
    {0.3772, -0.8865, 0.3018},
    {0.3434, -0.8072, 0.1922},
    {0.3097, -0.7279, 0.1178},
    {0.2944, -0.6919, 0.0750},
    {0.0000, -0.9609, 0.3018},
    {0.0000, -0.8750, 0.1922},
    {0.0000, -0.7891, 0.1178},
    {0.0000, -0.7500, 0.0750},
    {-0.3772, -0.8865, 0.3018},
    {-0.3434, -0.8072, 0.1922},
    {-0.3097, -0.7279, 0.1178},
    {-0.2944, -0.6919, 0.0750},
    {-0.6823, -0.6823, 0.3018},
    {-0.6212, -0.6212, 0.1922},
    {-0.5602, -0.5602, 0.1178},
    {-0.5325, -0.5325, 0.0750},
    {-0.8865, -0.3772, 0.3018},
    {-0.8072, -0.3434, 0.1922},
    {-0.7279, -0.3097, 0.1178},
    {-0.6919, -0.2944, 0.0750},
    {-0.9609, 0.0000, 0.3018},
    {-0.8750, 0.0000, 0.1922},
    {-0.7891, 0.0000, 0.1178},
    {-0.7500, 0.0000, 0.0750},
    {-0.8865, 0.3772, 0.3018},
    {-0.8072, 0.3434, 0.1922},
    {-0.7279, 0.3097, 0.1178},
    {-0.6919, 0.2944, 0.0750},
    {-0.6823, 0.6823, 0.3018},
    {-0.6212, 0.6212, 0.1922},
    {-0.5602, 0.5602, 0.1178},
    {-0.5325, 0.5325, 0.0750},
    {-0.3772, 0.8865, 0.3018},
    {-0.3434, 0.8072, 0.1922},
    {-0.3097, 0.7279, 0.1178},
    {-0.2944, 0.6919, 0.0750},
    {0.0000, 0.9609, 0.3018},
    {0.0000, 0.8750, 0.1922},
    {0.0000, 0.7891, 0.1178},
    {0.0000, 0.7500, 0.0750},
    {0.3772, 0.8865, 0.3018},
    {0.3434, 0.8072, 0.1922},
    {0.3097, 0.7279, 0.1178},
    {0.2944, 0.6919, 0.0750},
    {0.6823, 0.6823, 0.3018},
    {0.6212, 0.6212, 0.1922},
    {0.5602, 0.5602, 0.1178},
    {0.5325, 0.5325, 0.0750},
    {0.8865, 0.3772, 0.3018},
    {0.8072, 0.3434, 0.1922},
    {0.7279, 0.3097, 0.1178},
    {0.6919, 0.2944, 0.0750},
    {0.7330, 0.0000, 0.0475},
    {0.6422, 0.0000, 0.0234},
    {0.4178, 0.0000, 0.0064},
    {0.0000, 0.0000, 0.0000},
    {0.6762, -0.2877, 0.0475},
    {0.5924, -0.2521, 0.0234},
    {0.3854, -0.1640, 0.0064},
    {0.5204, -0.5204, 0.0475},
    {0.4560, -0.4560, 0.0234},
    {0.2966, -0.2966, 0.0064},
    {0.2877, -0.6762, 0.0475},
    {0.2521, -0.5924, 0.0234},
    {0.1640, -0.3854, 0.0064},
    {0.0000, -0.7330, 0.0475},
    {0.0000, -0.6422, 0.0234},
    {0.0000, -0.4178, 0.0064},
    {-0.2877, -0.6762, 0.0475},
    {-0.2521, -0.5924, 0.0234},
    {-0.1640, -0.3854, 0.0064},
    {-0.5204, -0.5204, 0.0475},
    {-0.4560, -0.4560, 0.0234},
    {-0.2966, -0.2966, 0.0064},
    {-0.6762, -0.2877, 0.0475},
    {-0.5924, -0.2521, 0.0234},
    {-0.3854, -0.1640, 0.0064},
    {-0.7330, 0.0000, 0.0475},
    {-0.6422, 0.0000, 0.0234},
    {-0.4178, 0.0000, 0.0064},
    {-0.6762, 0.2877, 0.0475},
    {-0.5924, 0.2521, 0.0234},
    {-0.3854, 0.1640, 0.0064},
    {-0.5204, 0.5204, 0.0475},
    {-0.4560, 0.4560, 0.0234},
    {-0.2966, 0.2966, 0.0064},
    {-0.2877, 0.6762, 0.0475},
    {-0.2521, 0.5924, 0.0234},
    {-0.1640, 0.3854, 0.0064},
    {0.0000, 0.7330, 0.0475},
    {0.0000, 0.6422, 0.0234},
    {0.0000, 0.4178, 0.0064},
    {0.2877, 0.6762, 0.0475},
    {0.2521, 0.5924, 0.0234},
    {0.1640, 0.3854, 0.0064},
    {0.5204, 0.5204, 0.0475},
    {0.4560, 0.4560, 0.0234},
    {0.2966, 0.2966, 0.0064},
    {0.6762, 0.2877, 0.0475},
    {0.5924, 0.2521, 0.0234},
    {0.3854, 0.1640, 0.0064},
    {-0.8000, 0.0000, 1.0125},
    {-1.0336, 0.0000, 1.0107},
    {-1.2062, 0.0000, 0.9984},
    {-1.3133, 0.0000, 0.9650},
    {-1.3500, 0.0000, 0.9000},
    {-0.7922, -0.0844, 1.0301},
    {-1.0406, -0.0844, 1.0280},
    {-1.2229, -0.0844, 1.0138},
    {-1.3351, -0.0844, 0.9752},
    {-1.3734, -0.0844, 0.9000},
    {-0.7750, -0.1125, 1.0688},
    {-1.0559, -0.1125, 1.0661},
    {-1.2594, -0.1125, 1.0477},
    {-1.3832, -0.1125, 0.9976},
    {-1.4250, -0.1125, 0.9000},
    {-0.7578, -0.0844, 1.1074},
    {-1.0712, -0.0844, 1.1042},
    {-1.2959, -0.0844, 1.0815},
    {-1.4313, -0.0844, 1.0199},
    {-1.4766, -0.0844, 0.9000},
    {-0.7500, 0.0000, 1.1250},
    {-1.0781, 0.0000, 1.1215},
    {-1.3125, 0.0000, 1.0969},
    {-1.4531, 0.0000, 1.0301},
    {-1.5000, 0.0000, 0.9000},
    {-0.7578, 0.0844, 1.1074},
    {-1.0712, 0.0844, 1.1042},
    {-1.2959, 0.0844, 1.0815},
    {-1.4313, 0.0844, 1.0199},
    {-1.4766, 0.0844, 0.9000},
    {-0.7750, 0.1125, 1.0688},
    {-1.0559, 0.1125, 1.0661},
    {-1.2594, 0.1125, 1.0477},
    {-1.3832, 0.1125, 0.9976},
    {-1.4250, 0.1125, 0.9000},
    {-0.7922, 0.0844, 1.0301},
    {-1.0406, 0.0844, 1.0280},
    {-1.2229, 0.0844, 1.0138},
    {-1.3351, 0.0844, 0.9752},
    {-1.3734, 0.0844, 0.9000},
    {-1.3305, 0.0000, 0.7980},
    {-1.2687, 0.0000, 0.6750},
    {-1.1602, 0.0000, 0.5520},
    {-1.0000, 0.0000, 0.4500},
    {-1.3518, -0.0844, 0.7882},
    {-1.2839, -0.0844, 0.6600},
    {-1.1655, -0.0844, 0.5334},
    {-0.9922, -0.0844, 0.4266},
    {-1.3986, -0.1125, 0.7666},
    {-1.3172, -0.1125, 0.6270},
    {-1.1771, -0.1125, 0.4926},
    {-0.9750, -0.1125, 0.3750},
    {-1.4455, -0.0844, 0.7449},
    {-1.3505, -0.0844, 0.5939},
    {-1.1888, -0.0844, 0.4518},
    {-0.9578, -0.0844, 0.3234},
    {-1.4668, 0.0000, 0.7351},
    {-1.3656, 0.0000, 0.5789},
    {-1.1941, 0.0000, 0.4333},
    {-0.9500, 0.0000, 0.3000},
    {-1.4455, 0.0844, 0.7449},
    {-1.3505, 0.0844, 0.5939},
    {-1.1888, 0.0844, 0.4518},
    {-0.9578, 0.0844, 0.3234},
    {-1.3986, 0.1125, 0.7666},
    {-1.3172, 0.1125, 0.6270},
    {-1.1771, 0.1125, 0.4926},
    {-0.9750, 0.1125, 0.3750},
    {-1.3518, 0.0844, 0.7882},
    {-1.2839, 0.0844, 0.6600},
    {-1.1655, 0.0844, 0.5334},
    {-0.9922, 0.0844, 0.4266},
    {0.8500, 0.0000, 0.7125},
    {1.0898, 0.0000, 0.7676},
    {1.1938, 0.0000, 0.9000},
    {1.2508, 0.0000, 1.0605},
    {1.3500, 0.0000, 1.2000},
    {0.8500, -0.1856, 0.6480},
    {1.1082, -0.1676, 0.7198},
    {1.2172, -0.1280, 0.8722},
    {1.2793, -0.0883, 1.0505},
    {1.3969, -0.0703, 1.2000},
    {0.8500, -0.2475, 0.5063},
    {1.1484, -0.2235, 0.6146},
    {1.2687, -0.1706, 0.8109},
    {1.3422, -0.1178, 1.0283},
    {1.5000, -0.0938, 1.2000},
    {0.8500, -0.1856, 0.3645},
    {1.1887, -0.1676, 0.5095},
    {1.3203, -0.1280, 0.7497},
    {1.4050, -0.0883, 1.0062},
    {1.6031, -0.0703, 1.2000},
    {0.8500, 0.0000, 0.3000},
    {1.2070, 0.0000, 0.4617},
    {1.3438, 0.0000, 0.7219},
    {1.4336, 0.0000, 0.9961},
    {1.6500, 0.0000, 1.2000},
    {0.8500, 0.1856, 0.3645},
    {1.1887, 0.1676, 0.5095},
    {1.3203, 0.1280, 0.7497},
    {1.4050, 0.0883, 1.0062},
    {1.6031, 0.0703, 1.2000},
    {0.8500, 0.2475, 0.5063},
    {1.1484, 0.2235, 0.6146},
    {1.2687, 0.1706, 0.8109},
    {1.3422, 0.1178, 1.0283},
    {1.5000, 0.0938, 1.2000},
    {0.8500, 0.1856, 0.6480},
    {1.1082, 0.1676, 0.7198},
    {1.2172, 0.1280, 0.8722},
    {1.2793, 0.0883, 1.0505},
    {1.3969, 0.0703, 1.2000},
    {1.3859, 0.0000, 1.2211},
    {1.4125, 0.0000, 1.2281},
    {1.4203, 0.0000, 1.2211},
    {1.4000, 0.0000, 1.2000},
    {1.4361, -0.0659, 1.2221},
    {1.4596, -0.0562, 1.2298},
    {1.4603, -0.0466, 1.2225},
    {1.4312, -0.0422, 1.2000},
    {1.5466, -0.0879, 1.2244},
    {1.5633, -0.0750, 1.2334},
    {1.5483, -0.0621, 1.2257},
    {1.5000, -0.0563, 1.2000},
    {1.6570, -0.0659, 1.2267},
    {1.6669, -0.0562, 1.2370},
    {1.6364, -0.0466, 1.2289},
    {1.5688, -0.0422, 1.2000},
    {1.7072, 0.0000, 1.2277},
    {1.7141, 0.0000, 1.2387},
    {1.6764, 0.0000, 1.2303},
    {1.6000, 0.0000, 1.2000},
    {1.6570, 0.0659, 1.2267},
    {1.6669, 0.0562, 1.2370},
    {1.6364, 0.0466, 1.2289},
    {1.5688, 0.0422, 1.2000},
    {1.5466, 0.0879, 1.2244},
    {1.5633, 0.0750, 1.2334},
    {1.5483, 0.0621, 1.2257},
    {1.5000, 0.0563, 1.2000},
    {1.4361, 0.0659, 1.2221},
    {1.4596, 0.0562, 1.2298},
    {1.4603, 0.0466, 1.2225},
    {1.4312, 0.0422, 1.2000},
    {0.0000, 0.0000, 1.5750},
    {0.1703, 0.0000, 1.5504},
    {0.1625, 0.0000, 1.4906},
    {0.0984, 0.0000, 1.4168},
    {0.1000, 0.0000, 1.3500},
    {0.1572, -0.0670, 1.5504},
    {0.1500, -0.0639, 1.4906},
    {0.0908, -0.0387, 1.4168},
    {0.0923, -0.0393, 1.3500},
    {0.1211, -0.1211, 1.5504},
    {0.1155, -0.1155, 1.4906},
    {0.0699, -0.0699, 1.4168},
    {0.0710, -0.0710, 1.3500},
    {0.0670, -0.1572, 1.5504},
    {0.0639, -0.1500, 1.4906},
    {0.0387, -0.0908, 1.4168},
    {0.0393, -0.0923, 1.3500},
    {0.0000, -0.1703, 1.5504},
    {0.0000, -0.1625, 1.4906},
    {0.0000, -0.0984, 1.4168},
    {0.0000, -0.1000, 1.3500},
    {-0.0670, -0.1572, 1.5504},
    {-0.0639, -0.1500, 1.4906},
    {-0.0387, -0.0908, 1.4168},
    {-0.0393, -0.0923, 1.3500},
    {-0.1211, -0.1211, 1.5504},
    {-0.1155, -0.1155, 1.4906},
    {-0.0699, -0.0699, 1.4168},
    {-0.0710, -0.0710, 1.3500},
    {-0.1572, -0.0670, 1.5504},
    {-0.1500, -0.0639, 1.4906},
    {-0.0908, -0.0387, 1.4168},
    {-0.0923, -0.0393, 1.3500},
    {-0.1703, 0.0000, 1.5504},
    {-0.1625, 0.0000, 1.4906},
    {-0.0984, 0.0000, 1.4168},
    {-0.1000, 0.0000, 1.3500},
    {-0.1572, 0.0670, 1.5504},
    {-0.1500, 0.0639, 1.4906},
    {-0.0908, 0.0387, 1.4168},
    {-0.0923, 0.0393, 1.3500},
    {-0.1211, 0.1211, 1.5504},
    {-0.1155, 0.1155, 1.4906},
    {-0.0699, 0.0699, 1.4168},
    {-0.0710, 0.0710, 1.3500},
    {-0.0670, 0.1572, 1.5504},
    {-0.0639, 0.1500, 1.4906},
    {-0.0387, 0.0908, 1.4168},
    {-0.0393, 0.0923, 1.3500},
    {0.0000, 0.1703, 1.5504},
    {0.0000, 0.1625, 1.4906},
    {0.0000, 0.0984, 1.4168},
    {0.0000, 0.1000, 1.3500},
    {0.0670, 0.1572, 1.5504},
    {0.0639, 0.1500, 1.4906},
    {0.0387, 0.0908, 1.4168},
    {0.0393, 0.0923, 1.3500},
    {0.1211, 0.1211, 1.5504},
    {0.1155, 0.1155, 1.4906},
    {0.0699, 0.0699, 1.4168},
    {0.0710, 0.0710, 1.3500},
    {0.1572, 0.0670, 1.5504},
    {0.1500, 0.0639, 1.4906},
    {0.0908, 0.0387, 1.4168},
    {0.0923, 0.0393, 1.3500},
    {0.2281, 0.0000, 1.3055},
    {0.4125, 0.0000, 1.2750},
    {0.5781, 0.0000, 1.2445},
    {0.6500, 0.0000, 1.2000},
    {0.2104, -0.0895, 1.3055},
    {0.3805, -0.1619, 1.2750},
    {0.5333, -0.2269, 1.2445},
    {0.5996, -0.2551, 1.2000},
    {0.1620, -0.1620, 1.3055},
    {0.2929, -0.2929, 1.2750},
    {0.4105, -0.4105, 1.2445},
    {0.4615, -0.4615, 1.2000},
    {0.0895, -0.2104, 1.3055},
    {0.1619, -0.3805, 1.2750},
    {0.2269, -0.5333, 1.2445},
    {0.2551, -0.5996, 1.2000},
    {0.0000, -0.2281, 1.3055},
    {0.0000, -0.4125, 1.2750},
    {0.0000, -0.5781, 1.2445},
    {0.0000, -0.6500, 1.2000},
    {-0.0895, -0.2104, 1.3055},
    {-0.1619, -0.3805, 1.2750},
    {-0.2269, -0.5333, 1.2445},
    {-0.2551, -0.5996, 1.2000},
    {-0.1620, -0.1620, 1.3055},
    {-0.2929, -0.2929, 1.2750},
    {-0.4105, -0.4105, 1.2445},
    {-0.4615, -0.4615, 1.2000},
    {-0.2104, -0.0895, 1.3055},
    {-0.3805, -0.1619, 1.2750},
    {-0.5333, -0.2269, 1.2445},
    {-0.5996, -0.2551, 1.2000},
    {-0.2281, 0.0000, 1.3055},
    {-0.4125, 0.0000, 1.2750},
    {-0.5781, 0.0000, 1.2445},
    {-0.6500, 0.0000, 1.2000},
    {-0.2104, 0.0895, 1.3055},
    {-0.3805, 0.1619, 1.2750},
    {-0.5333, 0.2269, 1.2445},
    {-0.5996, 0.2551, 1.2000},
    {-0.1620, 0.1620, 1.3055},
    {-0.2929, 0.2929, 1.2750},
    {-0.4105, 0.4105, 1.2445},
    {-0.4615, 0.4615, 1.2000},
    {-0.0895, 0.2104, 1.3055},
    {-0.1619, 0.3805, 1.2750},
    {-0.2269, 0.5333, 1.2445},
    {-0.2551, 0.5996, 1.2000},
    {0.0000, 0.2281, 1.3055},
    {0.0000, 0.4125, 1.2750},
    {0.0000, 0.5781, 1.2445},
    {0.0000, 0.6500, 1.2000},
    {0.0895, 0.2104, 1.3055},
    {0.1619, 0.3805, 1.2750},
    {0.2269, 0.5333, 1.2445},
    {0.2551, 0.5996, 1.2000},
    {0.1620, 0.1620, 1.3055},
    {0.2929, 0.2929, 1.2750},
    {0.4105, 0.4105, 1.2445},
    {0.4615, 0.4615, 1.2000},
    {0.2104, 0.0895, 1.3055},
    {0.3805, 0.1619, 1.2750},
    {0.5333, 0.2269, 1.2445},
    {0.5996, 0.2551, 1.2000}
};

int teapotFace[][3] = {
    {0, 5, 6},
    {6, 1, 0},
    {1, 6, 7},
    {7, 2, 1},
    {2, 7, 8},
    {8, 3, 2},
    {3, 8, 9},
    {9, 4, 3},
    {5, 10, 11},
    {11, 6, 5},
    {6, 11, 12},
    {12, 7, 6},
    {7, 12, 13},
    {13, 8, 7},
    {8, 13, 14},
    {14, 9, 8},
    {10, 15, 16},
    {16, 11, 10},
    {11, 16, 17},
    {17, 12, 11},
    {12, 17, 18},
    {18, 13, 12},
    {13, 18, 19},
    {19, 14, 13},
    {15, 20, 21},
    {21, 16, 15},
    {16, 21, 22},
    {22, 17, 16},
    {17, 22, 23},
    {23, 18, 17},
    {18, 23, 24},
    {24, 19, 18},
    {20, 25, 26},
    {26, 21, 20},
    {21, 26, 27},
    {27, 22, 21},
    {22, 27, 28},
    {28, 23, 22},
    {23, 28, 29},
    {29, 24, 23},
    {25, 30, 31},
    {31, 26, 25},
    {26, 31, 32},
    {32, 27, 26},
    {27, 32, 33},
    {33, 28, 27},
    {28, 33, 34},
    {34, 29, 28},
    {30, 35, 36},
    {36, 31, 30},
    {31, 36, 37},
    {37, 32, 31},
    {32, 37, 38},
    {38, 33, 32},
    {33, 38, 39},
    {39, 34, 33},
    {35, 40, 41},
    {41, 36, 35},
    {36, 41, 42},
    {42, 37, 36},
    {37, 42, 43},
    {43, 38, 37},
    {38, 43, 44},
    {44, 39, 38},
    {40, 45, 46},
    {46, 41, 40},
    {41, 46, 47},
    {47, 42, 41},
    {42, 47, 48},
    {48, 43, 42},
    {43, 48, 49},
    {49, 44, 43},
    {45, 50, 51},
    {51, 46, 45},
    {46, 51, 52},
    {52, 47, 46},
    {47, 52, 53},
    {53, 48, 47},
    {48, 53, 54},
    {54, 49, 48},
    {50, 55, 56},
    {56, 51, 50},
    {51, 56, 57},
    {57, 52, 51},
    {52, 57, 58},
    {58, 53, 52},
    {53, 58, 59},
    {59, 54, 53},
    {55, 60, 61},
    {61, 56, 55},
    {56, 61, 62},
    {62, 57, 56},
    {57, 62, 63},
    {63, 58, 57},
    {58, 63, 64},
    {64, 59, 58},
    {60, 65, 66},
    {66, 61, 60},
    {61, 66, 67},
    {67, 62, 61},
    {62, 67, 68},
    {68, 63, 62},
    {63, 68, 69},
    {69, 64, 63},
    {65, 70, 71},
    {71, 66, 65},
    {66, 71, 72},
    {72, 67, 66},
    {67, 72, 73},
    {73, 68, 67},
    {68, 73, 74},
    {74, 69, 68},
    {70, 75, 76},
    {76, 71, 70},
    {71, 76, 77},
    {77, 72, 71},
    {72, 77, 78},
    {78, 73, 72},
    {73, 78, 79},
    {79, 74, 73},
    {75, 0, 1},
    {1, 76, 75},
    {76, 1, 2},
    {2, 77, 76},
    {77, 2, 3},
    {3, 78, 77},
    {78, 3, 4},
    {4, 79, 78},
    {4, 9, 84},
    {84, 80, 4},
    {80, 84, 85},
    {85, 81, 80},
    {81, 85, 86},
    {86, 82, 81},
    {82, 86, 87},
    {87, 83, 82},
    {9, 14, 88},
    {88, 84, 9},
    {84, 88, 89},
    {89, 85, 84},
    {85, 89, 90},
    {90, 86, 85},
    {86, 90, 91},
    {91, 87, 86},
    {14, 19, 92},
    {92, 88, 14},
    {88, 92, 93},
    {93, 89, 88},
    {89, 93, 94},
    {94, 90, 89},
    {90, 94, 95},
    {95, 91, 90},
    {19, 24, 96},
    {96, 92, 19},
    {92, 96, 97},
    {97, 93, 92},
    {93, 97, 98},
    {98, 94, 93},
    {94, 98, 99},
    {99, 95, 94},
    {24, 29, 100},
    {100, 96, 24},
    {96, 100, 101},
    {101, 97, 96},
    {97, 101, 102},
    {102, 98, 97},
    {98, 102, 103},
    {103, 99, 98},
    {29, 34, 104},
    {104, 100, 29},
    {100, 104, 105},
    {105, 101, 100},
    {101, 105, 106},
    {106, 102, 101},
    {102, 106, 107},
    {107, 103, 102},
    {34, 39, 108},
    {108, 104, 34},
    {104, 108, 109},
    {109, 105, 104},
    {105, 109, 110},
    {110, 106, 105},
    {106, 110, 111},
    {111, 107, 106},
    {39, 44, 112},
    {112, 108, 39},
    {108, 112, 113},
    {113, 109, 108},
    {109, 113, 114},
    {114, 110, 109},
    {110, 114, 115},
    {115, 111, 110},
    {44, 49, 116},
    {116, 112, 44},
    {112, 116, 117},
    {117, 113, 112},
    {113, 117, 118},
    {118, 114, 113},
    {114, 118, 119},
    {119, 115, 114},
    {49, 54, 120},
    {120, 116, 49},
    {116, 120, 121},
    {121, 117, 116},
    {117, 121, 122},
    {122, 118, 117},
    {118, 122, 123},
    {123, 119, 118},
    {54, 59, 124},
    {124, 120, 54},
    {120, 124, 125},
    {125, 121, 120},
    {121, 125, 126},
    {126, 122, 121},
    {122, 126, 127},
    {127, 123, 122},
    {59, 64, 128},
    {128, 124, 59},
    {124, 128, 129},
    {129, 125, 124},
    {125, 129, 130},
    {130, 126, 125},
    {126, 130, 131},
    {131, 127, 126},
    {64, 69, 132},
    {132, 128, 64},
    {128, 132, 133},
    {133, 129, 128},
    {129, 133, 134},
    {134, 130, 129},
    {130, 134, 135},
    {135, 131, 130},
    {69, 74, 136},
    {136, 132, 69},
    {132, 136, 137},
    {137, 133, 132},
    {133, 137, 138},
    {138, 134, 133},
    {134, 138, 139},
    {139, 135, 134},
    {74, 79, 140},
    {140, 136, 74},
    {136, 140, 141},
    {141, 137, 136},
    {137, 141, 142},
    {142, 138, 137},
    {138, 142, 143},
    {143, 139, 138},
    {79, 4, 80},
    {80, 140, 79},
    {140, 80, 81},
    {81, 141, 140},
    {141, 81, 82},
    {82, 142, 141},
    {142, 82, 83},
    {83, 143, 142},
    {83, 87, 148},
    {148, 144, 83},
    {144, 148, 149},
    {149, 145, 144},
    {145, 149, 150},
    {150, 146, 145},
    {146, 150, 151},
    {151, 147, 146},
    {87, 91, 152},
    {152, 148, 87},
    {148, 152, 153},
    {153, 149, 148},
    {149, 153, 154},
    {154, 150, 149},
    {150, 154, 155},
    {155, 151, 150},
    {91, 95, 156},
    {156, 152, 91},
    {152, 156, 157},
    {157, 153, 152},
    {153, 157, 158},
    {158, 154, 153},
    {154, 158, 159},
    {159, 155, 154},
    {95, 99, 160},
    {160, 156, 95},
    {156, 160, 161},
    {161, 157, 156},
    {157, 161, 162},
    {162, 158, 157},
    {158, 162, 163},
    {163, 159, 158},
    {99, 103, 164},
    {164, 160, 99},
    {160, 164, 165},
    {165, 161, 160},
    {161, 165, 166},
    {166, 162, 161},
    {162, 166, 167},
    {167, 163, 162},
    {103, 107, 168},
    {168, 164, 103},
    {164, 168, 169},
    {169, 165, 164},
    {165, 169, 170},
    {170, 166, 165},
    {166, 170, 171},
    {171, 167, 166},
    {107, 111, 172},
    {172, 168, 107},
    {168, 172, 173},
    {173, 169, 168},
    {169, 173, 174},
    {174, 170, 169},
    {170, 174, 175},
    {175, 171, 170},
    {111, 115, 176},
    {176, 172, 111},
    {172, 176, 177},
    {177, 173, 172},
    {173, 177, 178},
    {178, 174, 173},
    {174, 178, 179},
    {179, 175, 174},
    {115, 119, 180},
    {180, 176, 115},
    {176, 180, 181},
    {181, 177, 176},
    {177, 181, 182},
    {182, 178, 177},
    {178, 182, 183},
    {183, 179, 178},
    {119, 123, 184},
    {184, 180, 119},
    {180, 184, 185},
    {185, 181, 180},
    {181, 185, 186},
    {186, 182, 181},
    {182, 186, 187},
    {187, 183, 182},
    {123, 127, 188},
    {188, 184, 123},
    {184, 188, 189},
    {189, 185, 184},
    {185, 189, 190},
    {190, 186, 185},
    {186, 190, 191},
    {191, 187, 186},
    {127, 131, 192},
    {192, 188, 127},
    {188, 192, 193},
    {193, 189, 188},
    {189, 193, 194},
    {194, 190, 189},
    {190, 194, 195},
    {195, 191, 190},
    {131, 135, 196},
    {196, 192, 131},
    {192, 196, 197},
    {197, 193, 192},
    {193, 197, 198},
    {198, 194, 193},
    {194, 198, 199},
    {199, 195, 194},
    {135, 139, 200},
    {200, 196, 135},
    {196, 200, 201},
    {201, 197, 196},
    {197, 201, 202},
    {202, 198, 197},
    {198, 202, 203},
    {203, 199, 198},
    {139, 143, 204},
    {204, 200, 139},
    {200, 204, 205},
    {205, 201, 200},
    {201, 205, 206},
    {206, 202, 201},
    {202, 206, 207},
    {207, 203, 202},
    {143, 83, 144},
    {144, 204, 143},
    {204, 144, 145},
    {145, 205, 204},
    {205, 145, 146},
    {146, 206, 205},
    {206, 146, 147},
    {147, 207, 206},
    {147, 151, 212},
    {212, 208, 147},
    {208, 212, 213},
    {213, 209, 208},
    {209, 213, 214},
    {214, 210, 209},
    {210, 214, 211},
    //{211, 211, 210},
    {151, 155, 215},
    {215, 212, 151},
    {212, 215, 216},
    {216, 213, 212},
    {213, 216, 217},
    {217, 214, 213},
    {214, 217, 211},
    // {211, 211, 214},
    {155, 159, 218},
    {218, 215, 155},
    {215, 218, 219},
    {219, 216, 215},
    {216, 219, 220},
    {220, 217, 216},
    {217, 220, 211},
    // {211, 211, 217},
    {159, 163, 221},
    {221, 218, 159},
    {218, 221, 222},
    {222, 219, 218},
    {219, 222, 223},
    {223, 220, 219},
    {220, 223, 211},
    // {211, 211, 220},
    {163, 167, 224},
    {224, 221, 163},
    {221, 224, 225},
    {225, 222, 221},
    {222, 225, 226},
    {226, 223, 222},
    {223, 226, 211},
    // {211, 211, 223},
    {167, 171, 227},
    {227, 224, 167},
    {224, 227, 228},
    {228, 225, 224},
    {225, 228, 229},
    {229, 226, 225},
    {226, 229, 211},
    // {211, 211, 226},
    {171, 175, 230},
    {230, 227, 171},
    {227, 230, 231},
    {231, 228, 227},
    {228, 231, 232},
    {232, 229, 228},
    {229, 232, 211},
    // {211, 211, 229},
    {175, 179, 233},
    {233, 230, 175},
    {230, 233, 234},
    {234, 231, 230},
    {231, 234, 235},
    {235, 232, 231},
    {232, 235, 211},
    // {211, 211, 232},
    {179, 183, 236},
    {236, 233, 179},
    {233, 236, 237},
    {237, 234, 233},
    {234, 237, 238},
    {238, 235, 234},
    {235, 238, 211},
    // {211, 211, 235},
    {183, 187, 239},
    {239, 236, 183},
    {236, 239, 240},
    {240, 237, 236},
    {237, 240, 241},
    {241, 238, 237},
    {238, 241, 211},
    // {211, 211, 238},
    {187, 191, 242},
    {242, 239, 187},
    {239, 242, 243},
    {243, 240, 239},
    {240, 243, 244},
    {244, 241, 240},
    {241, 244, 211},
//    {211, 211, 241},
    {191, 195, 245},
    {245, 242, 191},
    {242, 245, 246},
    {246, 243, 242},
    {243, 246, 247},
    {247, 244, 243},
    {244, 247, 211},
//    {211, 211, 244},
    {195, 199, 248},
    {248, 245, 195},
    {245, 248, 249},
    {249, 246, 245},
    {246, 249, 250},
    {250, 247, 246},
    {247, 250, 211},
//    {211, 211, 247},
    {199, 203, 251},
    {251, 248, 199},
    {248, 251, 252},
    {252, 249, 248},
    {249, 252, 253},
    {253, 250, 249},
    {250, 253, 211},
//    {211, 211, 250},
    {203, 207, 254},
    {254, 251, 203},
    {251, 254, 255},
    {255, 252, 251},
    {252, 255, 256},
    {256, 253, 252},
    {253, 256, 211},
//    {211, 211, 253},
    {207, 147, 208},
    {208, 254, 207},
    {254, 208, 209},
    {209, 255, 254},
    {255, 209, 210},
    {210, 256, 255},
    {256, 210, 211},
    //{211, 211, 256},    // error
    {257, 262, 263},
    {263, 258, 257},
    {258, 263, 264},
    {264, 259, 258},
    {259, 264, 265},
    {265, 260, 259},
    {260, 265, 266},
    {266, 261, 260},
    {262, 267, 268},
    {268, 263, 262},
    {263, 268, 269},
    {269, 264, 263},
    {264, 269, 270},
    {270, 265, 264},
    {265, 270, 271},
    {271, 266, 265},
    {267, 272, 273},
    {273, 268, 267},
    {268, 273, 274},
    {274, 269, 268},
    {269, 274, 275},
    {275, 270, 269},
    {270, 275, 276},
    {276, 271, 270},
    {272, 277, 278},
    {278, 273, 272},
    {273, 278, 279},
    {279, 274, 273},
    {274, 279, 280},
    {280, 275, 274},
    {275, 280, 281},
    {281, 276, 275},
    {277, 282, 283},
    {283, 278, 277},
    {278, 283, 284},
    {284, 279, 278},
    {279, 284, 285},
    {285, 280, 279},
    {280, 285, 286},
    {286, 281, 280},
    {282, 287, 288},
    {288, 283, 282},
    {283, 288, 289},
    {289, 284, 283},
    {284, 289, 290},
    {290, 285, 284},
    {285, 290, 291},
    {291, 286, 285},
    {287, 292, 293},
    {293, 288, 287},
    {288, 293, 294},
    {294, 289, 288},
    {289, 294, 295},
    {295, 290, 289},
    {290, 295, 296},
    {296, 291, 290},
    {292, 257, 258},
    {258, 293, 292},
    {293, 258, 259},
    {259, 294, 293},
    {294, 259, 260},
    {260, 295, 294},
    {295, 260, 261},
    {261, 296, 295},
    {261, 266, 301},
    {301, 297, 261},
    {297, 301, 302},
    {302, 298, 297},
    {298, 302, 303},
    {303, 299, 298},
    {299, 303, 304},
    {304, 300, 299},
    {266, 271, 305},
    {305, 301, 266},
    {301, 305, 306},
    {306, 302, 301},
    {302, 306, 307},
    {307, 303, 302},
    {303, 307, 308},
    {308, 304, 303},
    {271, 276, 309},
    {309, 305, 271},
    {305, 309, 310},
    {310, 306, 305},
    {306, 310, 311},
    {311, 307, 306},
    {307, 311, 312},
    {312, 308, 307},
    {276, 281, 313},
    {313, 309, 276},
    {309, 313, 314},
    {314, 310, 309},
    {310, 314, 315},
    {315, 311, 310},
    {311, 315, 316},
    {316, 312, 311},
    {281, 286, 317},
    {317, 313, 281},
    {313, 317, 318},
    {318, 314, 313},
    {314, 318, 319},
    {319, 315, 314},
    {315, 319, 320},
    {320, 316, 315},
    {286, 291, 321},
    {321, 317, 286},
    {317, 321, 322},
    {322, 318, 317},
    {318, 322, 323},
    {323, 319, 318},
    {319, 323, 324},
    {324, 320, 319},
    {291, 296, 325},
    {325, 321, 291},
    {321, 325, 326},
    {326, 322, 321},
    {322, 326, 327},
    {327, 323, 322},
    {323, 327, 328},
    {328, 324, 323},
    {296, 261, 297},
    {297, 325, 296},
    {325, 297, 298},
    {298, 326, 325},
    {326, 298, 299},
    {299, 327, 326},
    {327, 299, 300},
    {300, 328, 327},
    {329, 334, 335},
    {335, 330, 329},
    {330, 335, 336},
    {336, 331, 330},
    {331, 336, 337},
    {337, 332, 331},
    {332, 337, 338},
    {338, 333, 332},
    {334, 339, 340},
    {340, 335, 334},
    {335, 340, 341},
    {341, 336, 335},
    {336, 341, 342},
    {342, 337, 336},
    {337, 342, 343},
    {343, 338, 337},
    {339, 344, 345},
    {345, 340, 339},
    {340, 345, 346},
    {346, 341, 340},
    {341, 346, 347},
    {347, 342, 341},
    {342, 347, 348},
    {348, 343, 342},
    {344, 349, 350},
    {350, 345, 344},
    {345, 350, 351},
    {351, 346, 345},
    {346, 351, 352},
    {352, 347, 346},
    {347, 352, 353},
    {353, 348, 347},
    {349, 354, 355},
    {355, 350, 349},
    {350, 355, 356},
    {356, 351, 350},
    {351, 356, 357},
    {357, 352, 351},
    {352, 357, 358},
    {358, 353, 352},
    {354, 359, 360},
    {360, 355, 354},
    {355, 360, 361},
    {361, 356, 355},
    {356, 361, 362},
    {362, 357, 356},
    {357, 362, 363},
    {363, 358, 357},
    {359, 364, 365},
    {365, 360, 359},
    {360, 365, 366},
    {366, 361, 360},
    {361, 366, 367},
    {367, 362, 361},
    {362, 367, 368},
    {368, 363, 362},
    {364, 329, 330},
    {330, 365, 364},
    {365, 330, 331},
    {331, 366, 365},
    {366, 331, 332},
    {332, 367, 366},
    {367, 332, 333},
    {333, 368, 367},
    {333, 338, 373},
    {373, 369, 333},
    {369, 373, 374},
    {374, 370, 369},
    {370, 374, 375},
    {375, 371, 370},
    {371, 375, 376},
    {376, 372, 371},
    {338, 343, 377},
    {377, 373, 338},
    {373, 377, 378},
    {378, 374, 373},
    {374, 378, 379},
    {379, 375, 374},
    {375, 379, 380},
    {380, 376, 375},
    {343, 348, 381},
    {381, 377, 343},
    {377, 381, 382},
    {382, 378, 377},
    {378, 382, 383},
    {383, 379, 378},
    {379, 383, 384},
    {384, 380, 379},
    {348, 353, 385},
    {385, 381, 348},
    {381, 385, 386},
    {386, 382, 381},
    {382, 386, 387},
    {387, 383, 382},
    {383, 387, 388},
    {388, 384, 383},
    {353, 358, 389},
    {389, 385, 353},
    {385, 389, 390},
    {390, 386, 385},
    {386, 390, 391},
    {391, 387, 386},
    {387, 391, 392},
    {392, 388, 387},
    {358, 363, 393},
    {393, 389, 358},
    {389, 393, 394},
    {394, 390, 389},
    {390, 394, 395},
    {395, 391, 390},
    {391, 395, 396},
    {396, 392, 391},
    {363, 368, 397},
    {397, 393, 363},
    {393, 397, 398},
    {398, 394, 393},
    {394, 398, 399},
    {399, 395, 394},
    {395, 399, 400},
    {400, 396, 395},
    {368, 333, 369},
    {369, 397, 368},
    {397, 369, 370},
    {370, 398, 397},
    {398, 370, 371},
    {371, 399, 398},
    {399, 371, 372},
    {372, 400, 399},
    // {401, 401, 406},
    {406, 402, 401},
    {402, 406, 407},
    {407, 403, 402},
    {403, 407, 408},
    {408, 404, 403},
    {404, 408, 409},
    {409, 405, 404},
    // {401, 401, 410},
    {410, 406, 401},
    {406, 410, 411},
    {411, 407, 406},
    {407, 411, 412},
    {412, 408, 407},
    {408, 412, 413},
    {413, 409, 408},
    // {401, 401, 414},
    {414, 410, 401},
    {410, 414, 415},
    {415, 411, 410},
    {411, 415, 416},
    {416, 412, 411},
    {412, 416, 417},
    {417, 413, 412},
    // {401, 401, 418},
    {418, 414, 401},
    {414, 418, 419},
    {419, 415, 414},
    {415, 419, 420},
    {420, 416, 415},
    {416, 420, 421},
    {421, 417, 416},
    // {401, 401, 422},
    {422, 418, 401},
    {418, 422, 423},
    {423, 419, 418},
    {419, 423, 424},
    {424, 420, 419},
    {420, 424, 425},
    {425, 421, 420},
    // {401, 401, 426},
    {426, 422, 401},
    {422, 426, 427},
    {427, 423, 422},
    {423, 427, 428},
    {428, 424, 423},
    {424, 428, 429},
    {429, 425, 424},
    // {401, 401, 430},
    {430, 426, 401},
    {426, 430, 431},
    {431, 427, 426},
    {427, 431, 432},
    {432, 428, 427},
    {428, 432, 433},
    {433, 429, 428},
    // {401, 401, 434},
    {434, 430, 401},
    {430, 434, 435},
    {435, 431, 430},
    {431, 435, 436},
    {436, 432, 431},
    {432, 436, 437},
    {437, 433, 432},
    // {401, 401, 438},
    {438, 434, 401},
    {434, 438, 439},
    {439, 435, 434},
    {435, 439, 440},
    {440, 436, 435},
    {436, 440, 441},
    {441, 437, 436},
    // {401, 401, 442},
    {442, 438, 401},
    {438, 442, 443},
    {443, 439, 438},
    {439, 443, 444},
    {444, 440, 439},
    {440, 444, 445},
    {445, 441, 440},
    // {401, 401, 446},
    {446, 442, 401},
    {442, 446, 447},
    {447, 443, 442},
    {443, 447, 448},
    {448, 444, 443},
    {444, 448, 449},
    {449, 445, 444},
    // {401, 401, 450},
    {450, 446, 401},
    {446, 450, 451},
    {451, 447, 446},
    {447, 451, 452},
    {452, 448, 447},
    {448, 452, 453},
    {453, 449, 448},
    // {401, 401, 454},
    {454, 450, 401},
    {450, 454, 455},
    {455, 451, 450},
    {451, 455, 456},
    {456, 452, 451},
    {452, 456, 457},
    {457, 453, 452},
    // {401, 401, 458},
    {458, 454, 401},
    {454, 458, 459},
    {459, 455, 454},
    {455, 459, 460},
    {460, 456, 455},
    {456, 460, 461},
    {461, 457, 456},
    // {401, 401, 462},
    {462, 458, 401},
    {458, 462, 463},
    {463, 459, 458},
    {459, 463, 464},
    {464, 460, 459},
    {460, 464, 465},
    {465, 461, 460},
//    {401, 401, 402},
    {402, 462, 401},
    {462, 402, 403},
    {403, 463, 462},
    {463, 403, 404},
    {404, 464, 463},
    {464, 404, 405},
    {405, 465, 464},
    {405, 409, 470},
    {470, 466, 405},
    {466, 470, 471},
    {471, 467, 466},
    {467, 471, 472},
    {472, 468, 467},
    {468, 472, 473},
    {473, 469, 468},
    {409, 413, 474},
    {474, 470, 409},
    {470, 474, 475},
    {475, 471, 470},
    {471, 475, 476},
    {476, 472, 471},
    {472, 476, 477},
    {477, 473, 472},
    {413, 417, 478},
    {478, 474, 413},
    {474, 478, 479},
    {479, 475, 474},
    {475, 479, 480},
    {480, 476, 475},
    {476, 480, 481},
    {481, 477, 476},
    {417, 421, 482},
    {482, 478, 417},
    {478, 482, 483},
    {483, 479, 478},
    {479, 483, 484},
    {484, 480, 479},
    {480, 484, 485},
    {485, 481, 480},
    {421, 425, 486},
    {486, 482, 421},
    {482, 486, 487},
    {487, 483, 482},
    {483, 487, 488},
    {488, 484, 483},
    {484, 488, 489},
    {489, 485, 484},
    {425, 429, 490},
    {490, 486, 425},
    {486, 490, 491},
    {491, 487, 486},
    {487, 491, 492},
    {492, 488, 487},
    {488, 492, 493},
    {493, 489, 488},
    {429, 433, 494},
    {494, 490, 429},
    {490, 494, 495},
    {495, 491, 490},
    {491, 495, 496},
    {496, 492, 491},
    {492, 496, 497},
    {497, 493, 492},
    {433, 437, 498},
    {498, 494, 433},
    {494, 498, 499},
    {499, 495, 494},
    {495, 499, 500},
    {500, 496, 495},
    {496, 500, 501},
    {501, 497, 496},
    {437, 441, 502},
    {502, 498, 437},
    {498, 502, 503},
    {503, 499, 498},
    {499, 503, 504},
    {504, 500, 499},
    {500, 504, 505},
    {505, 501, 500},
    {441, 445, 506},
    {506, 502, 441},
    {502, 506, 507},
    {507, 503, 502},
    {503, 507, 508},
    {508, 504, 503},
    {504, 508, 509},
    {509, 505, 504},
    {445, 449, 510},
    {510, 506, 445},
    {506, 510, 511},
    {511, 507, 506},
    {507, 511, 512},
    {512, 508, 507},
    {508, 512, 513},
    {513, 509, 508},
    {449, 453, 514},
    {514, 510, 449},
    {510, 514, 515},
    {515, 511, 510},
    {511, 515, 516},
    {516, 512, 511},
    {512, 516, 517},
    {517, 513, 512},
    {453, 457, 518},
    {518, 514, 453},
    {514, 518, 519},
    {519, 515, 514},
    {515, 519, 520},
    {520, 516, 515},
    {516, 520, 521},
    {521, 517, 516},
    {457, 461, 522},
    {522, 518, 457},
    {518, 522, 523},
    {523, 519, 518},
    {519, 523, 524},
    {524, 520, 519},
    {520, 524, 525},
    {525, 521, 520},
    {461, 465, 526},
    {526, 522, 461},
    {522, 526, 527},
    {527, 523, 522},
    {523, 527, 528},
    {528, 524, 523},
    {524, 528, 529},
    {529, 525, 524},
    {465, 405, 466},
    {466, 526, 465},
    {526, 466, 467},
    {467, 527, 526},
    {527, 467, 468},
    {468, 528, 527},
    {528, 468, 469},
    {469, 529, 528}
};


int save(const char *filename, int nv, float vertices[][3], int nf, int face[][3]) {
    FILE *file = fopen(filename, "wb");
    if (!file) {
        return 0;
    }
    fwrite(&nv, sizeof(int), 1, file);
    fwrite(&nf, sizeof(int), 1, file);
    fwrite(vertices, sizeof(float), nv * 3, file);
    fwrite(face, sizeof(int), nf * 3, file);
    fclose(file);
    return 1;
}

int main() {
    // teapotFace[1024] razem z nieprawid�owymi �cianami 992 po wykomentowaniu
    // niepoprawnych (�ciany reprezentuj�ce linie np. {211, 211, x})
    save("teapot.vf", 530, teapot, 992, teapotFace);
	return 0;
}