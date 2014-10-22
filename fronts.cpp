#include "fronts.h"
#include "jo.h"

jo clavier32[26] = {
   { // a touche1
    1, // duree
    7, // laforceh
    21, // laforceb
    {133, 130, 133, 130}, // amplitude
    {85, 84, 169, 168}, // dureefront
    {12, 8, 4, 0}, // varamplitude
    {0, 0, 0, 0}, // dureefront
    2 // combiendezonememoire
   },

   { // b touche25
    1, // duree
    7, // laforceh
    21, // laforceb
    {133, 130, 133, 130},
    {21, 21, 42, 42},
    {12, 8, 4, 0}, // varamplitude
    {0, 0, 0, 0},
    2,
   },

   { // c touche23
    1, // duree
    7, // laforceh
    21, // laforceb
    {133, 130, 133, 130},
    {24, 23, 47, 47},
    {12, 8, 4, 0}, // varamplitude
    {0, 0, 0, 0},
    2,
   },

   { // d touche13
    1, // duree
    7, // laforceh
    21, // laforceb
    {133, 130, 133, 130},
    {42, 42, 84, 84},
    {12, 8, 4, 0}, // varamplitude
    {0, 0, 0, 0},
    2,
   },

   { // e
    1, // duree
    7, // laforceh
    21, // laforceb
    {133, 130, 133, 130},
    {75, 75, 150, 150},
    {12, 8, 4, 0}, // varamplitude
    {0, 0, 0, 0},
    2,
   },

   { // f touche14
    1, // duree
    7, // laforceh
    21, // laforceb
    {133, 130, 133, 130},
    {40, 40, 80, 79},
    {12, 8, 4, 0}, // varamplitude
    {0, 0, 0, 0},
    2,
   },

   { // g touche15
    1, // duree
    7, // laforceh
    21, // laforceb
    {133, 130, 133, 130},
    {38, 37, 75, 75},
    {12, 8, 4, 0}, // varamplitude
    {0, 0, 0, 0},
    2,
   },

   { // h touche16
    1, // duree
    7, // laforceh
    21, // laforceb
    {133, 130, 133, 130},
    {35, 36, 71, 71},
    {12, 8, 4, 0}, // varamplitude
    {0, 0, 0, 0},
    2,
   },

   { // i touche8
    1, // duree
    7, // laforceh
    21, // laforceb
    {133, 130, 133, 130},
    {56, 56, 113, 112},
    {12, 8, 4, 0}, // varamplitude
    {0, 0, 0, 0},
    2,
   },

   { // j touche17
    1, // duree
    7, // laforceh
    21, // laforceb
    {133, 130, 133, 130},
    {34, 33, 67, 67},
    {12, 8, 4, 0}, // varamplitude
    {0, 0, 0, 0},
    2,
   },

   { // k touche18
    1, // duree
    7, // laforceh
    21, // laforceb
    {133, 130, 133, 130},
    {32, 31, 63, 63},
    {12, 8, 4, 0}, // varamplitude
    {0, 0, 0, 0},
    2,
   },

   { // l touche19
    1, // duree
    7, // laforceh
    21, // laforceb
    {133, 130, 133, 130},
    {30, 30, 60, 59},
    {12, 8, 4, 0}, // varamplitude
    {0, 0, 0, 0},
    2,
   },

   { // m touche20
    1, // duree
    7, // laforceh
    21, // laforceb
    {133, 130, 133, 130},
    {28, 28, 56, 56},
    {12, 8, 4, 0}, // varamplitude
    {0, 0, 0, 0},
    2,
   },

   { // n touche26
    1, // duree
    7, // laforceh
    21, // laforceb
    {133, 130, 133, 130},
    {20, 20, 40, 40},
    {12, 8, 4, 0}, // varamplitude
    {0, 0, 0, 0},
    2,
   },

   { // o touche9
    1, // duree
    7, // laforceh
    21, // laforceb
    {133, 130, 133, 130},
    {53, 53, 106, 106},
    {12, 8, 4, 0}, // varamplitude
    {0, 0, 0, 0},
    2,
   },

   { // p touche10
    1, // duree
    7, // laforceh
    21, // laforceb
    {133, 130, 133, 130},
    {50, 50, 100, 100},
    {12, 8, 4, 0}, // varamplitude
    {0, 0, 0, 0},
    2,
   },

   { // q touche11
    1, // duree
    7, // laforceh
    21, // laforceb
    {133, 130, 133, 130},
    {47, 47, 95, 94},
    {12, 8, 4, 0}, // varamplitude
    {0, 0, 0, 0},
    2,
   },

   { // r touche4
    1, // duree
    7, // laforceh
    21, // laforceb
    {133, 130, 133, 130},
    {71, 71, 142, 142},
    {12, 8, 4, 0}, // varamplitude
    {0, 0, 0, 0},
    2,
   },

   { // s touche12
    1, // duree
    7, // laforceh
    21, // laforceb
    {133, 130, 133, 130},
    {44, 45, 89, 89},
    {12, 8, 4, 0}, // varamplitude
    {0, 0, 0, 0},
    2,
   },

   { // t touche5
    1, // duree
    7, // laforceh
    21, // laforceb
    {133, 130, 133, 130},
    {67, 67, 134, 134},
    {12, 8, 4, 0}, // varamplitude
    {0, 0, 0, 0},
    2,
   },

   { // u touche7
    1, // duree
    7, // laforceh
    21, // laforceb
    {133, 130, 133, 130},
    {60, 59, 119, 119},
    {12, 8, 4, 0}, // varamplitude
    {0, 0, 0, 0},
    2,
   },

   { // v touche24
    1, // duree
    7, // laforceh
    21, // laforceb
    {133, 130, 133, 130},
    {22, 22, 45, 44},
    {12, 8, 4, 0}, // varamplitude
    {0, 0, 0, 0},
    2,
   },

   { // w touche21
    1, // duree
    7, // laforceh
    21, // laforceb
    {133, 130, 133, 130},
    {27, 26, 53, 53},
    {12, 8, 4, 0}, // varamplitude
    {0, 0, 0, 0},
    2,
   },

   { // x touche22
    1, // duree
    7, // laforceh
    21, // laforceb
    {133, 130, 133, 130},
    {25, 25, 50, 50},
    {12, 8, 4, 0}, // varamplitude
    {0, 0, 0, 0},
    2,
   },

   { // y touche6
    1, // duree
    7, // laforceh
    21, // laforceb
    {133, 130, 133, 130},
    {63, 63, 126, 126},
    {12, 8, 4, 0}, // varamplitude
    {0, 0, 0, 0},
    2,
   },

   { // z
    1, // duree
    7, // laforceh
    21, // laforceb
    {133, 130, 133, 130},
    {80, 79, 159, 159},
    {12, 8, 4, 0}, // varamplitude
    {0, 0, 0, 0},
    2
   }
};

jo *mesjo = clavier32;
