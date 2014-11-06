#include "fronts.h"
#include "jo.h"


jo clavier32[26] = {
   { // a touche1
448, // lagame
22,  // invgame
1,  // deunavingtsix
26,  // devingtsixaun
38  // rapportvingtsix
   },
   { // b touche25
112, // lagame
89,  // invgame
25,  // deunavingtsix
2,  // devingtsixaun
500  // rapportvingtsix
   },
   { // c touche23
126, // lagame
79,  // invgame
23,  // deunavingtsix
4,  // devingtsixaun
250  // rapportvingtsix
   },
   { // d touche13
224, // lagame
45,  // invgame
13,  // deunavingtsix
14,  // devingtsixaun
71  // rapportvingtsix
   },
   { // e touche3
400, // lagame
25,  // invgame
3,  // deunavingtsix
24,  // devingtsixaun
42  // rapportvingtsix
   },
   { // f touche14
212, // lagame
47,  // invgame
14,  // deunavingtsix
13,  // devingtsixaun
77  // rapportvingtsix
   },
   { // g touche15
200, // lagame
50,  // invgame
15,  // deunavingtsix
12,  // devingtsixaun
83  // rapportvingtsix
   },
   { // h touche16
189, // lagame
53,  // invgame
16,  // deunavingtsix
11,  // devingtsixaun
91  // rapportvingtsix
   },
   { // i touche8
300, // lagame
33,  // invgame
8,  // deunavingtsix
19,  // devingtsixaun
53  // rapportvingtsix
   },
   { // j touche17
178, // lagame
56,  // invgame
17,  // deunavingtsix
10,  // devingtsixaun
100  // rapportvingtsix
   },
   { // k touche18
168, // lagame
60,  // invgame
18,  // deunavingtsix
9,  // devingtsixaun
111  // rapportvingtsix
   },
   { // l touche19
159, // lagame
63,  // invgame
19,  // deunavingtsix
8,  // devingtsixaun
125  // rapportvingtsix
   },
   { // m touche20
150, // lagame
67,  // invgame
20,  // deunavingtsix
7,  // devingtsixaun
143  // rapportvingtsix
   },
   { // n touche26
106, // lagame
94,  // invgame
26,  // deunavingtsix
1,  // devingtsixaun
1000  // rapportvingtsix
   },
   { // o touche9
283, // lagame
35,  // invgame
9,  // deunavingtsix
18,  // devingtsixaun
56  // rapportvingtsix
   },
   { // p touche10
267, // lagame
37,  // invgame
10,  // deunavingtsix
17,  // devingtsixaun
59  // rapportvingtsix
   },
   { // q touche11
252, // lagame
40,  // invgame
11,  // deunavingtsix
16,  // devingtsixaun
63  // rapportvingtsix
   },

   { // r touche4
378, // lagame
26,  // invgame
4,  // deunavingtsix
23,  // devingtsixaun
43  // rapportvingtsix
   },
   { // s touche12
238, // lagame
42,  // invgame
12,  // deunavingtsix
15,  // devingtsixaun
67  // rapportvingtsix
   },
   { // t touche5
356, // lagame
28,  // invgame
5,  // deunavingtsix
22,  // devingtsixaun
45  // rapportvingtsix
   },
   { // u touche7
318, // lagame
31,  // invgame
7,  // deunavingtsix
20,  // devingtsixaun
50  // rapportvingtsix
   },
   { // v touche24
119, // lagame
84,  // invgame
24,  // deunavingtsix
3,  // devingtsixaun
333  // rapportvingtsix
   },
   { // w touche21
141, // lagame
71,  // invgame
21,  // deunavingtsix
6,  // devingtsixaun
167  // rapportvingtsix
   },
   { // x touche22
133, // lagame
75,  // invgame
22,  // deunavingtsix
5,  // devingtsixaun
200  // rapportvingtsix
   },

   { // y touche6
336, // lagame
30,  // invgame
6,  // deunavingtsix
21,  // devingtsixaun
48  // rapportvingtsix
   },
   { // z touche2
424, // lagame
24,  // invgame
2,  // deunavingtsix
25,  // devingtsixaun
40  // rapportvingtsix
   }
    };

jo *mesjo = clavier32;


