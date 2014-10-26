#include "fronts.h"
#include "jo.h"

jo clavier32[26] = {
   { // a touche1
    {133, 130, 133, 130, 133, 130, 133, 130, 133, 130, 133, 130, 133, 130}, // amplitude
    {85, 84, 169, 168, 85, 84, 169, 168, 85, 84, 169, 168, 169, 168}, // dureefront
    {12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 1, 1}, // changeamplitude
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // changedureefront
    1, // duree
    7, // laforceh
    21, // laforceb
    7, // tremolo
    21, // forceplus
    2 // combiendezonememoire
   },

   { // b touche25
    {133, 130, 133, 130, 133, 130, 133, 130, 133, 130, 133, 130, 133, 130}, // amplitude
    {21, 21, 42, 42, 21, 21, 42, 42, 21, 21, 42, 42, 42, 42},
    {12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 1, 1}, // changeamplitude
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // changedureefront
    1, // duree
    7, // laforceh
    21, // laforceb
    7, // tremolo
    21, // forceplus
    2 // combiendezonememoire
   },

   { // c touche23
    {133, 130, 133, 130, 133, 130, 133, 130, 133, 130, 133, 130, 133, 130}, // amplitude
    {24, 23, 47, 47, 24, 23, 47, 47, 24, 23, 47, 47, 47, 47},
    {12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 1, 1}, // changeamplitude
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // changedureefront
    1, // duree
    7, // laforceh
    21, // laforceb
    7, // tremolo
    21, // forceplus
    2 // combiendezonememoire
   },

   { // d touche13
    {133, 130, 133, 130, 133, 130, 133, 130, 133, 130, 133, 130, 133, 130}, // amplitude
    {42, 42, 84, 84, 42, 42, 84, 84, 42, 42, 84, 84, 84, 84},
    {12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 1, 1}, // changeamplitude
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // changedureefront
    1, // duree
    7, // laforceh
    21, // laforceb
    7, // tremolo
    21, // forceplus
    2 // combiendezonememoire
   },

   { // e
    {133, 130, 133, 130, 133, 130, 133, 130, 133, 130, 133, 130, 133, 130}, // amplitude
    {75, 75, 150, 150, 75, 75, 150, 150, 75, 75, 150, 150, 150, 150},
    {12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 1, 1}, // changeamplitude
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // changedureefront
    1, // duree
    7, // laforceh
    21, // laforceb
    7, // tremolo
    21, // forceplus
    2 // combiendezonememoire
   },

   { // f touche14
    {133, 130, 133, 130, 133, 130, 133, 130, 133, 130, 133, 130, 133, 130}, // amplitude
    {40, 40, 80, 79, 40, 40, 80, 79, 40, 40, 80, 79, 80, 79},
    {12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 1, 1}, // changeamplitude
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // changedureefront
    1, // duree
    7, // laforceh
    21, // laforceb
    7, // tremolo
    21, // forceplus
    2 // combiendezonememoire
   },

   { // g touche15
    {133, 130, 133, 130, 133, 130, 133, 130, 133, 130, 133, 130, 133, 130}, // amplitude
    {38, 37, 75, 75, 38, 37, 75, 75, 38, 37, 75, 75, 75, 75},
    {12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 1, 1}, // changeamplitude
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // changedureefront
    1, // duree
    7, // laforceh
    21, // laforceb
    7, // tremolo
    21, // forceplus
    2 // combiendezonememoire
   },

   { // h touche16
    {133, 130, 133, 130, 133, 130, 133, 130, 133, 130, 133, 130, 133, 130}, // amplitude
    {35, 36, 71, 71, 35, 36, 71, 71, 35, 36, 71, 71, 71, 71},
    {12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 1, 1}, // changeamplitude
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // changedureefront
    1, // duree
    7, // laforceh
    21, // laforceb
    7, // tremolo
    21, // forceplus
    2 // combiendezonememoire
   },

   { // i touche8
    {133, 130, 133, 130, 133, 130, 133, 130, 133, 130, 133, 130, 133, 130}, // amplitude
    {56, 56, 113, 112, 56, 56, 113, 112, 56, 56, 113, 112, 113, 112},
    {12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 1, 1}, // changeamplitude
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // changedureefront
    1, // duree
    7, // laforceh
    21, // laforceb
    7, // tremolo
    21, // forceplus
    2 // combiendezonememoire
   },

   { // j touche17
    {133, 130, 133, 130, 133, 130, 133, 130, 133, 130, 133, 130, 133, 130}, // amplitude
    {34, 33, 67, 67, 34, 33, 67, 67, 34, 33, 67, 67, 67, 67},
    {12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 1, 1}, // changeamplitude
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // changedureefront
    1, // duree
    7, // laforceh
    21, // laforceb
    7, // tremolo
    21, // forceplus
    2 // combiendezonememoire
   },

   { // k touche18
     {133, 130, 133, 130, 133, 130, 133, 130, 133, 130, 133, 130, 133, 130}, // amplitude
     {32, 31, 63, 63, 32, 31, 63, 63, 32, 31, 63, 63, 63, 63},
    {12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 1, 1}, // changeamplitude
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // changedureefront
    1, // duree
    7, // laforceh
    21, // laforceb
    7, // tremolo
    21, // forceplus
    2 // combiendezonememoire
   },

   { // l touche19
    {133, 130, 133, 130, 133, 130, 133, 130, 133, 130, 133, 130, 133, 130}, // amplitude
    {30, 30, 60, 59, 30, 30, 60, 59, 30, 30, 60, 59, 60, 59},
    {12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 1, 1}, // changeamplitude
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // changedureefront
    1, // duree
    7, // laforceh
    21, // laforceb
    7, // tremolo
    21, // forceplus
    2 // combiendezonememoire
   },

   { // m touche20
    {133, 130, 133, 130, 133, 130, 133, 130, 133, 130, 133, 130, 133, 130}, // amplitude
    {28, 28, 56, 56, 28, 28, 56, 56, 28, 28, 56, 56, 56, 56},
    {12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 1, 1}, // changeamplitude
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // changedureefront
    1, // duree
    7, // laforceh
    21, // laforceb
    7, // tremolo
    21, // forceplus
    2 // combiendezonememoire
   },

   { // n touche26
    {133, 130, 133, 130, 133, 130, 133, 130, 133, 130, 133, 130, 133, 130}, // amplitude
    {20, 20, 40, 40, 20, 20, 40, 40, 20, 20, 40, 40, 40, 40},
    {12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 1, 1}, // changeamplitude
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // changedureefront
    1, // duree
    7, // laforceh
    21, // laforceb
    7, // tremolo
    21, // forceplus
    2 // combiendezonememoire
   },

   { // o touche9
    {133, 130, 133, 130, 133, 130, 133, 130, 133, 130, 133, 130, 133, 130}, // amplitude
    {53, 53, 106, 106, 53, 53, 106, 106, 53, 53, 106, 106, 106, 106},
    {12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 1, 1}, // changeamplitude
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // changedureefront
    1, // duree
    7, // laforceh
    21, // laforceb
    7, // tremolo
    21, // forceplus
    2 // combiendezonememoire
   },

   { // p touche10
    {133, 130, 133, 130, 133, 130, 133, 130, 133, 130, 133, 130, 133, 130}, // amplitude
    {50, 50, 100, 100, 50, 50, 100, 100, 50, 50, 100, 100, 100, 100},
    {12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 1, 1}, // changeamplitude
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // changedureefront
    1, // duree
    7, // laforceh
    21, // laforceb
    7, // tremolo
    21, // forceplus
    2 // combiendezonememoire
   },

   { // q touche11
    {133, 130, 133, 130, 133, 130, 133, 130, 133, 130, 133, 130, 133, 130}, // amplitude
    {47, 47, 95, 94, 47, 47, 95, 94, 47, 47, 95, 94, 95, 94},
    {12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 1, 1}, // changeamplitude
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // changedureefront
    1, // duree
    7, // laforceh
    21, // laforceb
    7, // tremolo
    21, // forceplus
    2 // combiendezonememoire
   },

   { // r touche4
    {133, 130, 133, 130, 133, 130, 133, 130, 133, 130, 133, 130, 133, 130}, // amplitude
    {71, 71, 142, 142, 71, 71, 142, 142, 71, 71, 142, 142, 142, 142},
    {12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 1, 1}, // changeamplitude
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // changedureefront
    1, // duree
    7, // laforceh
    21, // laforceb
    7, // tremolo
    21, // forceplus
    2 // combiendezonememoire
   },

   { // s touche12
    {133, 130, 133, 130, 133, 130, 133, 130, 133, 130, 133, 130, 133, 130}, // amplitude
    {44, 45, 89, 89, 44, 45, 89, 89, 44, 45, 89, 89, 89, 89},
    {12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 1, 1}, // changeamplitude
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // changedureefront
    1, // duree
    7, // laforceh
    21, // laforceb
    7, // tremolo
    21, // forceplus
    2 // combiendezonememoire
   },

   { // t touche5
    {133, 130, 133, 130, 133, 130, 133, 130, 133, 130, 133, 130, 133, 130}, // amplitude
    {67, 67, 134, 134, 67, 67, 134, 134, 67, 67, 134, 134, 134, 134},
    {12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 1, 1}, // changeamplitude
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // changedureefront
    1, // duree
    7, // laforceh
    21, // laforceb
    7, // tremolo
    21, // forceplus
    2 // combiendezonememoire
   },

   { // u touche7
    {133, 130, 133, 130, 133, 130, 133, 130, 133, 130, 133, 130, 133, 130}, // amplitude
    {60, 59, 119, 119, 60, 59, 119, 119, 60, 59, 119, 119, 119, 119},
    {12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 1, 1}, // changeamplitude
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // changedureefront
    1, // duree
    7, // laforceh
    21, // laforceb
    7, // tremolo
    21, // forceplus
    2 // combiendezonememoire
   },

   { // v touche24
    {133, 130, 133, 130, 133, 130, 133, 130, 133, 130, 133, 130, 133, 130}, // amplitude
    {22, 22, 45, 44, 22, 22, 45, 44, 22, 22, 45, 44, 45, 44},
    {12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 1, 1}, // changeamplitude
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // changedureefront
    1, // duree
    7, // laforceh
    21, // laforceb
    7, // tremolo
    21, // forceplus
    2 // combiendezonememoire
   },

   { // w touche21
    {133, 130, 133, 130, 133, 130, 133, 130, 133, 130, 133, 130, 133, 130}, // amplitude
    {27, 26, 53, 53, 27, 26, 53, 53, 27, 26, 53, 53, 53, 53},
    {12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 1, 1}, // changeamplitude
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // changedureefront
    1, // duree
    7, // laforceh
    21, // laforceb
    7, // tremolo
    21, // forceplus
    2 // combiendezonememoire
   },

   { // x touche22
    {133, 130, 133, 130, 133, 130, 133, 130, 133, 130, 133, 130, 133, 130}, // amplitude
    {25, 25, 50, 50, 25, 25, 50, 50, 25, 25, 50, 50, 50, 50},
    {12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 1, 1}, // changeamplitude
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // changedureefront
    1, // duree
    7, // laforceh
    21, // laforceb
    7, // tremolo
    21, // forceplus
    2 // combiendezonememoire
   },

   { // y touche6
    {133, 130, 133, 130, 133, 130, 133, 130, 133, 130, 133, 130, 133, 130}, // amplitude
    {63, 63, 126, 126, 63, 63, 126, 126, 63, 63, 126, 126, 126, 126},
    {12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 1, 1}, // changeamplitude
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // changedureefront
    1, // duree
    7, // laforceh
    21, // laforceb
    7, // tremolo
    21, // forceplus
    2 // combiendezonememoire
   },

   { // z
    {133, 130, 133, 130, 133, 130, 133, 130, 133, 130, 133, 130, 133, 130}, // amplitude
    {80, 79, 159, 159, 80, 79, 159, 159, 80, 79, 159, 159, 159, 159},
    {12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 1, 1}, // changeamplitude
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, // changedureefront
    1, // duree
    7, // laforceh
    21, // laforceb
    7, // tremolo
    21, // forceplus
    2 // combiendezonememoire
   }
};

jo *mesjo = clavier32;
