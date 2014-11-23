#include "AdnForme40.h"

// Génère les fichiers c.jo
void genereFichierJo40(char c)
{
    int mesamplifront[10]; //son du n, la référence
    int mesdurerfront[10]; //son du n, la référence
    int mesvarampli[10]; //son du n, la référence
    int mesvardurer[10]; //son du n, la référence
    int madurer; //son du n, la référence
    int maforceh;
    int maforceb;
    int montremolo;
    int maforceplus;
    int macombiendezonememoire;
   FILE* fichierdesfronts = NULL; 
    fichierdesfronts = fopen("fronts.txt", "r"); 
    if (fichierdesfronts != NULL)
    {
        fscanf(fichierdesfronts, "%d %d %d %d %d %d %d %d %d %d %d %d %d %d", &mesamplifront[0], &mesamplifront[1], &mesdurerfront[0], &mesdurerfront[1], &mesvarampli[0], &mesvarampli[1], &mesvardurer[0], &mesvardurer[1], &madurer, &maforceh, &maforceb, &montremolo, &maforceplus, &macombiendezonememoire);
        fclose(fichierdesfronts);
    }
/**********************************************/
 jo joc = mesjo[c-'a'];
  // Nom du fichier jo
  char nomfichierjo[32];
  snprintf(nomfichierjo, 32, "%c.jo", c);
  // Fichier jo
  FILE* fichierjo;
  if (!(fichierjo = fopen(nomfichierjo, "wb")))
   {
    exit(-1);
   }



// ici commence la zone de travail pour l'apprenant

maforceh += ((joc.rapportvingtsix ) * 0.01);

int tablex[250]= {120, 60, 40, 30, 24, 20, 17, 15, 13, 12, 11, 10, 9, 9, 8, 8, 7, 7, 6, 6, 6, 5, 5, 5, 5, 5, 4, 4, 4, 4, 4, 4, 4, 4, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
int calculpossible = tablex[maforceh-1];
double pourmacom = (mesvarampli[0] * 0.01);
double pourmacom1 = (mesvarampli[1] * 0.01);
double pourmacom2 = (mesvardurer[0] * 0.01);
double pourmacom3 = (mesvardurer[1] * 0.01);
double pourmacom4 = (madurer * 0.01);
double pourmacom5 = (maforceplus * 0.1);
double pourmacom6 = (macombiendezonememoire * 0.01);

mesdurerfront[0] = int(mesdurerfront[0] * (joc.devingtsixaun ) * 0.01 * pourmacom5);
mesdurerfront[1] = int(mesdurerfront[1] * (joc.devingtsixaun ) * 0.01 * pourmacom5);

int variance1 = int(calculpossible * pourmacom);
if (variance1<1)
variance1 = 1;

int variance2 = int(calculpossible * pourmacom1);
if (variance2<1)
variance2 = 1;

int variance3 = int(calculpossible * pourmacom2);
if (variance3<1)
variance3 = 1;

int variance4 = int(calculpossible * pourmacom3);
if (variance4<1)
variance4 = 1;





      for(int i=2; i<10; i++)
       {
        if(i%2)
                {
	mesamplifront[i] = mesamplifront[1];
         mesvarampli[i] = mesvarampli[1];
         mesvardurer[i] = mesvardurer[1];	}
        else
                {
	mesamplifront[i] = mesamplifront[0];
         mesvarampli[i] = mesvarampli[0];
         mesvardurer[i] = mesvardurer[0];	}
	}
	mesdurerfront[2] = mesdurerfront[0]*(1 + pourmacom6);
	mesdurerfront[3] = mesdurerfront[1]*(1 + pourmacom6);
	mesdurerfront[4] = mesdurerfront[2]*(1 + pourmacom6);
	mesdurerfront[5] = mesdurerfront[3]*(1 + pourmacom6);
	mesdurerfront[6] = mesdurerfront[4]*(1 + pourmacom6);
	mesdurerfront[7] = mesdurerfront[5]*(1 + pourmacom6);
	mesdurerfront[8] = mesdurerfront[6]*(1 + pourmacom6);
	mesdurerfront[9] = mesdurerfront[7]*(1 + pourmacom6);


//monte

    for(int laforcebbase = maforceh; laforcebbase > 0; laforcebbase--)
     {


     switch (madurer) {
case 1 :
         mesamplifront[0] -= calculpossible;
         mesamplifront[1] += calculpossible;
         mesamplifront[2] +=  variance1 ;
         mesamplifront[3] -= variance1 ;
         mesamplifront[4] +=  variance2 ;
         mesamplifront[5] -= variance2 ;
         mesamplifront[6] +=  variance3 ;
         mesamplifront[7] -= variance3 ;
         mesamplifront[8] +=  variance4 ;
         mesamplifront[9] -= variance4 ;
 break;
case 2 :
         mesamplifront[0] += calculpossible;
         mesamplifront[1] -= calculpossible;
         mesamplifront[2] -=  variance1 ;
         mesamplifront[3] += variance1 ;
         mesamplifront[4] +=  variance2 ;
         mesamplifront[5] -= variance2 ;
         mesamplifront[6] +=  variance3 ;
         mesamplifront[7] -= variance3 ;
         mesamplifront[8] +=  variance4 ;
         mesamplifront[9] -= variance4 ;
 break;
case 3 :
         mesamplifront[0] += calculpossible;
         mesamplifront[1] -= calculpossible;
         mesamplifront[2] +=  variance1 ;
         mesamplifront[3] -= variance1 ;
         mesamplifront[4] -=  variance2 ;
         mesamplifront[5] += variance2 ;
         mesamplifront[6] +=  variance3 ;
         mesamplifront[7] -= variance3 ;
         mesamplifront[8] +=  variance4 ;
         mesamplifront[9] -= variance4 ;
 break;
case 4 :
         mesamplifront[0] += calculpossible;
         mesamplifront[1] -= calculpossible;
         mesamplifront[2] +=  variance1 ;
         mesamplifront[3] -= variance1 ;
         mesamplifront[4] +=  variance2 ;
         mesamplifront[5] -= variance2 ;
         mesamplifront[6] -=  variance3 ;
         mesamplifront[7] += variance3 ;
         mesamplifront[8] +=  variance4 ;
         mesamplifront[9] -= variance4 ;
 break;
case 5 :
         mesamplifront[0] += calculpossible;
         mesamplifront[1] -= calculpossible;
         mesamplifront[2] +=  variance1 ;
         mesamplifront[3] -= variance1 ;
         mesamplifront[4] +=  variance2 ;
         mesamplifront[5] -= variance2 ;
         mesamplifront[6] +=  variance3 ;
         mesamplifront[7] -= variance3 ;
         mesamplifront[8] -=  variance4 ;
         mesamplifront[9] += variance4 ;
 break;
case 6 :
         mesamplifront[0] -= calculpossible;
         mesamplifront[1] += calculpossible;
         mesamplifront[2] -=  variance1 ;
         mesamplifront[3] += variance1 ;
         mesamplifront[4] +=  variance2 ;
         mesamplifront[5] -= variance2 ;
         mesamplifront[6] +=  variance3 ;
         mesamplifront[7] -= variance3 ;
         mesamplifront[8] +=  variance4 ;
         mesamplifront[9] -= variance4 ;
 break;
case 7 :
         mesamplifront[0] += calculpossible;
         mesamplifront[1] -= calculpossible;
         mesamplifront[2] -=  variance1 ;
         mesamplifront[3] += variance1 ;
         mesamplifront[4] -=  variance2 ;
         mesamplifront[5] += variance2 ;
         mesamplifront[6] +=  variance3 ;
         mesamplifront[7] -= variance3 ;
         mesamplifront[8] +=  variance4 ;
         mesamplifront[9] -= variance4 ;
 break;
case 8 :
         mesamplifront[0] += calculpossible;
         mesamplifront[1] -= calculpossible;
         mesamplifront[2] +=  variance1 ;
         mesamplifront[3] -= variance1 ;
         mesamplifront[4] -=  variance2 ;
         mesamplifront[5] += variance2 ;
         mesamplifront[6] -=  variance3 ;
         mesamplifront[7] += variance3 ;
         mesamplifront[8] +=  variance4 ;
         mesamplifront[9] -= variance4 ;
 break;
case 9 :
         mesamplifront[0] += calculpossible;
         mesamplifront[1] -= calculpossible;
         mesamplifront[2] +=  variance1 ;
         mesamplifront[3] -= variance1 ;
         mesamplifront[4] +=  variance2 ;
         mesamplifront[5] -= variance2 ;
         mesamplifront[6] -=  variance3 ;
         mesamplifront[7] += variance3 ;
         mesamplifront[8] -=  variance4 ;
         mesamplifront[9] += variance4 ;
 break;
case 10 :
         mesamplifront[0] -= calculpossible;
         mesamplifront[1] += calculpossible;
         mesamplifront[2] -=  variance1 ;
         mesamplifront[3] += variance1 ;
         mesamplifront[4] -=  variance2 ;
         mesamplifront[5] += variance2 ;
         mesamplifront[6] +=  variance3 ;
         mesamplifront[7] -= variance3 ;
         mesamplifront[8] +=  variance4 ;
         mesamplifront[9] -= variance4 ;
 break;
case 11 :
         mesamplifront[0] += calculpossible;
         mesamplifront[1] -= calculpossible;
         mesamplifront[2] -=  variance1 ;
         mesamplifront[3] += variance1 ;
         mesamplifront[4] -=  variance2 ;
         mesamplifront[5] += variance2 ;
         mesamplifront[6] -=  variance3 ;
         mesamplifront[7] += variance3 ;
         mesamplifront[8] +=  variance4 ;
         mesamplifront[9] -= variance4 ;
 break;
case 12 :
         mesamplifront[0] += calculpossible;
         mesamplifront[1] -= calculpossible;
         mesamplifront[2] +=  variance1 ;
         mesamplifront[3] -= variance1 ;
         mesamplifront[4] -=  variance2 ;
         mesamplifront[5] += variance2 ;
         mesamplifront[6] -=  variance3 ;
         mesamplifront[7] += variance3 ;
         mesamplifront[8] -=  variance4 ;
         mesamplifront[9] += variance4 ;
 break;
case 13 :
         mesamplifront[0] -= calculpossible;
         mesamplifront[1] += calculpossible;
         mesamplifront[2] -=  variance1 ;
         mesamplifront[3] += variance1 ;
         mesamplifront[4] -=  variance2 ;
         mesamplifront[5] += variance2 ;
         mesamplifront[6] -=  variance3 ;
         mesamplifront[7] += variance3 ;
         mesamplifront[8] +=  variance4 ;
         mesamplifront[9] -= variance4 ;
 break;
case 14 :
         mesamplifront[0] += calculpossible;
         mesamplifront[1] -= calculpossible;
         mesamplifront[2] -=  variance1 ;
         mesamplifront[3] += variance1 ;
         mesamplifront[4] -=  variance2 ;
         mesamplifront[5] += variance2 ;
         mesamplifront[6] -=  variance3 ;
         mesamplifront[7] += variance3 ;
         mesamplifront[8] -=  variance4 ;
         mesamplifront[9] += variance4 ;
 break;
case 15 :
         mesamplifront[0] -= calculpossible;
         mesamplifront[1] += calculpossible;
         mesamplifront[2] -=  variance1 ;
         mesamplifront[3] += variance1 ;
         mesamplifront[4] -=  variance2 ;
         mesamplifront[5] += variance2 ;
         mesamplifront[6] -=  variance3 ;
         mesamplifront[7] += variance3 ;
         mesamplifront[8] -=  variance4 ;
         mesamplifront[9] += variance4 ;
 break;
case 16 :
         mesamplifront[0] += calculpossible;
         mesamplifront[1] += calculpossible;
         mesamplifront[2] +=  variance1 ;
         mesamplifront[3] -= variance1 ;
         mesamplifront[4] +=  variance2 ;
         mesamplifront[5] -= variance2 ;
         mesamplifront[6] +=  variance3 ;
         mesamplifront[7] -= variance3 ;
         mesamplifront[8] +=  variance4 ;
         mesamplifront[9] -= variance4 ;
 break;
case 17 :
         mesamplifront[0] += calculpossible;
         mesamplifront[1] -= calculpossible;
         mesamplifront[2] +=  variance1 ;
         mesamplifront[3] += variance1 ;
         mesamplifront[4] +=  variance2 ;
         mesamplifront[5] -= variance2 ;
         mesamplifront[6] +=  variance3 ;
         mesamplifront[7] -= variance3 ;
         mesamplifront[8] +=  variance4 ;
         mesamplifront[9] -= variance4 ;
 break;
case 18 :
         mesamplifront[0] += calculpossible;
         mesamplifront[1] -= calculpossible;
         mesamplifront[2] +=  variance1 ;
         mesamplifront[3] -= variance1 ;
         mesamplifront[4] +=  variance2 ;
         mesamplifront[5] += variance2 ;
         mesamplifront[6] +=  variance3 ;
         mesamplifront[7] -= variance3 ;
         mesamplifront[8] +=  variance4 ;
         mesamplifront[9] -= variance4 ;
 break;
case 19 :
         mesamplifront[0] += calculpossible;
         mesamplifront[1] -= calculpossible;
         mesamplifront[2] +=  variance1 ;
         mesamplifront[3] -= variance1 ;
         mesamplifront[4] +=  variance2 ;
         mesamplifront[5] -= variance2 ;
         mesamplifront[6] +=  variance3 ;
         mesamplifront[7] += variance3 ;
         mesamplifront[8] +=  variance4 ;
         mesamplifront[9] -= variance4 ;
 break;
case 20 :
         mesamplifront[0] += calculpossible;
         mesamplifront[1] -= calculpossible;
         mesamplifront[2] +=  variance1 ;
         mesamplifront[3] -= variance1 ;
         mesamplifront[4] +=  variance2 ;
         mesamplifront[5] -= variance2 ;
         mesamplifront[6] +=  variance3 ;
         mesamplifront[7] -= variance3 ;
         mesamplifront[8] +=  variance4 ;
         mesamplifront[9] += variance4 ;
 break;
case 21 :
         mesamplifront[0] += calculpossible;
         mesamplifront[1] += calculpossible;
         mesamplifront[2] +=  variance1 ;
         mesamplifront[3] += variance1 ;
         mesamplifront[4] +=  variance2 ;
         mesamplifront[5] -= variance2 ;
         mesamplifront[6] +=  variance3 ;
         mesamplifront[7] -= variance3 ;
         mesamplifront[8] +=  variance4 ;
         mesamplifront[9] -= variance4 ;
 break;
case 22 :
         mesamplifront[0] += calculpossible;
         mesamplifront[1] -= calculpossible;
         mesamplifront[2] +=  variance1 ;
         mesamplifront[3] += variance1 ;
         mesamplifront[4] +=  variance2 ;
         mesamplifront[5] += variance2 ;
         mesamplifront[6] +=  variance3 ;
         mesamplifront[7] -= variance3 ;
         mesamplifront[8] +=  variance4 ;
         mesamplifront[9] -= variance4 ;
 break;
case 23 :
         mesamplifront[0] += calculpossible;
         mesamplifront[1] -= calculpossible;
         mesamplifront[2] +=  variance1 ;
         mesamplifront[3] -= variance1 ;
         mesamplifront[4] +=  variance2 ;
         mesamplifront[5] += variance2 ;
         mesamplifront[6] +=  variance3 ;
         mesamplifront[7] += variance3 ;
         mesamplifront[8] +=  variance4 ;
         mesamplifront[9] -= variance4 ;
 break;
case 24 :
         mesamplifront[0] += calculpossible;
         mesamplifront[1] -= calculpossible;
         mesamplifront[2] +=  variance1 ;
         mesamplifront[3] -= variance1 ;
         mesamplifront[4] +=  variance2 ;
         mesamplifront[5] -= variance2 ;
         mesamplifront[6] +=  variance3 ;
         mesamplifront[7] += variance3 ;
         mesamplifront[8] +=  variance4 ;
         mesamplifront[9] += variance4 ;
 break;
case 25 :
         mesamplifront[0] += calculpossible;
         mesamplifront[1] += calculpossible;
         mesamplifront[2] +=  variance1 ;
         mesamplifront[3] += variance1 ;
         mesamplifront[4] +=  variance2 ;
         mesamplifront[5] += variance2 ;
         mesamplifront[6] +=  variance3 ;
         mesamplifront[7] -= variance3 ;
         mesamplifront[8] +=  variance4 ;
         mesamplifront[9] -= variance4 ;
 break;
case 26 :
         mesamplifront[0] += calculpossible;
         mesamplifront[1] -= calculpossible;
         mesamplifront[2] +=  variance1 ;
         mesamplifront[3] += variance1 ;
         mesamplifront[4] +=  variance2 ;
         mesamplifront[5] += variance2 ;
         mesamplifront[6] +=  variance3 ;
         mesamplifront[7] += variance3 ;
         mesamplifront[8] +=  variance4 ;
         mesamplifront[9] -= variance4 ;
 break;
case 27 :
         mesamplifront[0] += calculpossible;
         mesamplifront[1] -= calculpossible;
         mesamplifront[2] +=  variance1 ;
         mesamplifront[3] -= variance1 ;
         mesamplifront[4] +=  variance2 ;
         mesamplifront[5] += variance2 ;
         mesamplifront[6] +=  variance3 ;
         mesamplifront[7] += variance3 ;
         mesamplifront[8] +=  variance4 ;
         mesamplifront[9] += variance4 ;
 break;
default: 

         mesamplifront[0] += calculpossible;
         mesamplifront[1] -= calculpossible;
         mesamplifront[2] +=  variance1 ;
         mesamplifront[3] -= variance1 ;
         mesamplifront[4] +=  variance2 ;
         mesamplifront[5] -= variance2 ;
         mesamplifront[6] +=  variance3 ;
         mesamplifront[7] -= variance3 ;
         mesamplifront[8] +=  variance4 ;
         mesamplifront[9] -= variance4 ;

}
	
	 // respect des limites
      for(int i=0; i<10; i++)
       {
	if(mesamplifront[i]>249)
	mesamplifront[i] = 249;

	if(mesamplifront[i]<6)
	mesamplifront[i] = 6;	

	if(mesdurerfront[i]>249)
	mesdurerfront[i] = 249;

	if(mesdurerfront[i]<6)
	mesdurerfront[i] = 6;	


	}

      for(int i=0; i<2; i++)
       {
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[i], (char)mesdurerfront[i]);

	}
      for(int i=2; i<10; i++)
       {

        if(i%2)
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[i], (char)mesdurerfront[i-1]);

        else
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[i], (char)mesdurerfront[i+1]);

	}
// j'augmente la force avec montremolo
    for(int laforcebbasex = montremolo; laforcebbasex > 0; laforcebbasex--)
     {
      for(int i=0; i<2; i++)
       {
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[i], (char)mesdurerfront[i]);

	}
      for(int i=2; i<10; i++)
       {
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[i], (char)mesdurerfront[i-1]);

	}
     }

     }

//descend

int calculpossiblex = tablex[maforceb-1];
double pourmacomx = (mesvarampli[0] * 0.01);
double pourmacom1x = (mesvarampli[1] * 0.01);
double pourmacom2x = (mesvardurer[0] * 0.01);
double pourmacom3x = (mesvardurer[1] * 0.01);
double pourmacom4x = (madurer * 0.01);
double pourmacom5x = (maforceplus * 0.01);



    for(int laforcebbase = maforceb; laforcebbase > 0; laforcebbase--)
     {

     switch (madurer) {
case 1 :
         mesamplifront[0] += calculpossiblex;
         mesamplifront[1] -= calculpossiblex;
         mesamplifront[2] -=  int(calculpossiblex * pourmacomx) ;
         mesamplifront[3] += int(calculpossiblex * pourmacomx) ;
         mesamplifront[4] -=  int(calculpossiblex * pourmacom1x) ;
         mesamplifront[5] += int(calculpossiblex * pourmacom1x) ;
         mesamplifront[6] -=  int(calculpossiblex * pourmacom2x) ;
         mesamplifront[7] += int(calculpossiblex * pourmacom2x) ;
         mesamplifront[8] -=  int(calculpossiblex * pourmacom3x) ;
         mesamplifront[9] += int(calculpossiblex * pourmacom3x) ;
 break;
case 2 :
         mesamplifront[0] -= calculpossiblex;
         mesamplifront[1] += calculpossiblex;
         mesamplifront[2] +=  int(calculpossiblex * pourmacomx) ;
         mesamplifront[3] -= int(calculpossiblex * pourmacomx) ;
         mesamplifront[4] -=  int(calculpossiblex * pourmacom1x) ;
         mesamplifront[5] += int(calculpossiblex * pourmacom1x) ;
         mesamplifront[6] -=  int(calculpossiblex * pourmacom2x) ;
         mesamplifront[7] += int(calculpossiblex * pourmacom2x) ;
         mesamplifront[8] -=  int(calculpossiblex * pourmacom3x) ;
         mesamplifront[9] += int(calculpossiblex * pourmacom3x) ;
 break;
case 3 :
         mesamplifront[0] -= calculpossiblex;
         mesamplifront[1] += calculpossiblex;
         mesamplifront[2] -=  int(calculpossiblex * pourmacomx) ;
         mesamplifront[3] += int(calculpossiblex * pourmacomx) ;
         mesamplifront[4] +=  int(calculpossiblex * pourmacom1x) ;
         mesamplifront[5] -= int(calculpossiblex * pourmacom1x) ;
         mesamplifront[6] -=  int(calculpossiblex * pourmacom2x) ;
         mesamplifront[7] += int(calculpossiblex * pourmacom2x) ;
         mesamplifront[8] -=  int(calculpossiblex * pourmacom3x) ;
         mesamplifront[9] += int(calculpossiblex * pourmacom3x) ;
 break;
case 4 :
         mesamplifront[0] -= calculpossiblex;
         mesamplifront[1] += calculpossiblex;
         mesamplifront[2] -=  int(calculpossiblex * pourmacomx) ;
         mesamplifront[3] += int(calculpossiblex * pourmacomx) ;
         mesamplifront[4] -=  int(calculpossiblex * pourmacom1x) ;
         mesamplifront[5] += int(calculpossiblex * pourmacom1x) ;
         mesamplifront[6] +=  int(calculpossiblex * pourmacom2x) ;
         mesamplifront[7] -= int(calculpossiblex * pourmacom2x) ;
         mesamplifront[8] -=  int(calculpossiblex * pourmacom3x) ;
         mesamplifront[9] += int(calculpossiblex * pourmacom3x) ;
 break;
case 5 :
         mesamplifront[0] -= calculpossiblex;
         mesamplifront[1] += calculpossiblex;
         mesamplifront[2] -=  int(calculpossiblex * pourmacomx) ;
         mesamplifront[3] += int(calculpossiblex * pourmacomx) ;
         mesamplifront[4] -=  int(calculpossiblex * pourmacom1x) ;
         mesamplifront[5] += int(calculpossiblex * pourmacom1x) ;
         mesamplifront[6] -=  int(calculpossiblex * pourmacom2x) ;
         mesamplifront[7] += int(calculpossiblex * pourmacom2x) ;
         mesamplifront[8] +=  int(calculpossiblex * pourmacom3x) ;
         mesamplifront[9] -= int(calculpossiblex * pourmacom3x) ;
 break;
case 6 :
         mesamplifront[0] += calculpossiblex;
         mesamplifront[1] -= calculpossiblex;
         mesamplifront[2] +=  int(calculpossiblex * pourmacomx) ;
         mesamplifront[3] -= int(calculpossiblex * pourmacomx) ;
         mesamplifront[4] -=  int(calculpossiblex * pourmacom1x) ;
         mesamplifront[5] += int(calculpossiblex * pourmacom1x) ;
         mesamplifront[6] -=  int(calculpossiblex * pourmacom2x) ;
         mesamplifront[7] += int(calculpossiblex * pourmacom2x) ;
         mesamplifront[8] -=  int(calculpossiblex * pourmacom3x) ;
         mesamplifront[9] += int(calculpossiblex * pourmacom3x) ;
 break;
case 7 :
         mesamplifront[0] -= calculpossiblex;
         mesamplifront[1] += calculpossiblex;
         mesamplifront[2] +=  int(calculpossiblex * pourmacomx) ;
         mesamplifront[3] -= int(calculpossiblex * pourmacomx) ;
         mesamplifront[4] +=  int(calculpossiblex * pourmacom1x) ;
         mesamplifront[5] -= int(calculpossiblex * pourmacom1x) ;
         mesamplifront[6] -=  int(calculpossiblex * pourmacom2x) ;
         mesamplifront[7] += int(calculpossiblex * pourmacom2x) ;
         mesamplifront[8] -=  int(calculpossiblex * pourmacom3x) ;
         mesamplifront[9] += int(calculpossiblex * pourmacom3x) ;
 break;
case 8 :
         mesamplifront[0] -= calculpossiblex;
         mesamplifront[1] += calculpossiblex;
         mesamplifront[2] -=  int(calculpossiblex * pourmacomx) ;
         mesamplifront[3] += int(calculpossiblex * pourmacomx) ;
         mesamplifront[4] +=  int(calculpossiblex * pourmacom1x) ;
         mesamplifront[5] -= int(calculpossiblex * pourmacom1x) ;
         mesamplifront[6] +=  int(calculpossiblex * pourmacom2x) ;
         mesamplifront[7] -= int(calculpossiblex * pourmacom2x) ;
         mesamplifront[8] -=  int(calculpossiblex * pourmacom3x) ;
         mesamplifront[9] += int(calculpossiblex * pourmacom3x) ;
 break;
case 9 :
         mesamplifront[0] -= calculpossiblex;
         mesamplifront[1] += calculpossiblex;
         mesamplifront[2] -=  int(calculpossiblex * pourmacomx) ;
         mesamplifront[3] += int(calculpossiblex * pourmacomx) ;
         mesamplifront[4] -=  int(calculpossiblex * pourmacom1x) ;
         mesamplifront[5] += int(calculpossiblex * pourmacom1x) ;
         mesamplifront[6] +=  int(calculpossiblex * pourmacom2x) ;
         mesamplifront[7] -= int(calculpossiblex * pourmacom2x) ;
         mesamplifront[8] +=  int(calculpossiblex * pourmacom3x) ;
         mesamplifront[9] -= int(calculpossiblex * pourmacom3x) ;
 break;
case 10 :
         mesamplifront[0] += calculpossiblex;
         mesamplifront[1] -= calculpossiblex;
         mesamplifront[2] +=  int(calculpossiblex * pourmacomx) ;
         mesamplifront[3] -= int(calculpossiblex * pourmacomx) ;
         mesamplifront[4] +=  int(calculpossiblex * pourmacom1x) ;
         mesamplifront[5] -= int(calculpossiblex * pourmacom1x) ;
         mesamplifront[6] -=  int(calculpossiblex * pourmacom2x) ;
         mesamplifront[7] += int(calculpossiblex * pourmacom2x) ;
         mesamplifront[8] -=  int(calculpossiblex * pourmacom3x) ;
         mesamplifront[9] += int(calculpossiblex * pourmacom3x) ;
 break;
case 11 :
         mesamplifront[0] -= calculpossiblex;
         mesamplifront[1] += calculpossiblex;
         mesamplifront[2] +=  int(calculpossiblex * pourmacomx) ;
         mesamplifront[3] -= int(calculpossiblex * pourmacomx) ;
         mesamplifront[4] +=  int(calculpossiblex * pourmacom1x) ;
         mesamplifront[5] -= int(calculpossiblex * pourmacom1x) ;
         mesamplifront[6] +=  int(calculpossiblex * pourmacom2x) ;
         mesamplifront[7] -= int(calculpossiblex * pourmacom2x) ;
         mesamplifront[8] -=  int(calculpossiblex * pourmacom3x) ;
         mesamplifront[9] += int(calculpossiblex * pourmacom3x) ;
 break;
case 12 :
         mesamplifront[0] -= calculpossiblex;
         mesamplifront[1] += calculpossiblex;
         mesamplifront[2] -=  int(calculpossiblex * pourmacomx) ;
         mesamplifront[3] += int(calculpossiblex * pourmacomx) ;
         mesamplifront[4] +=  int(calculpossiblex * pourmacom1x) ;
         mesamplifront[5] -= int(calculpossiblex * pourmacom1x) ;
         mesamplifront[6] +=  int(calculpossiblex * pourmacom2x) ;
         mesamplifront[7] -= int(calculpossiblex * pourmacom2x) ;
         mesamplifront[8] +=  int(calculpossiblex * pourmacom3x) ;
         mesamplifront[9] -= int(calculpossiblex * pourmacom3x) ;
 break;
case 13 :
         mesamplifront[0] += calculpossiblex;
         mesamplifront[1] -= calculpossiblex;
         mesamplifront[2] +=  int(calculpossiblex * pourmacomx) ;
         mesamplifront[3] -= int(calculpossiblex * pourmacomx) ;
         mesamplifront[4] +=  int(calculpossiblex * pourmacom1x) ;
         mesamplifront[5] -= int(calculpossiblex * pourmacom1x) ;
         mesamplifront[6] +=  int(calculpossiblex * pourmacom2x) ;
         mesamplifront[7] -= int(calculpossiblex * pourmacom2x) ;
         mesamplifront[8] -=  int(calculpossiblex * pourmacom3x) ;
         mesamplifront[9] += int(calculpossiblex * pourmacom3x) ;
 break;
case 14 :
         mesamplifront[0] -= calculpossiblex;
         mesamplifront[1] += calculpossiblex;
         mesamplifront[2] +=  int(calculpossiblex * pourmacomx) ;
         mesamplifront[3] -= int(calculpossiblex * pourmacomx) ;
         mesamplifront[4] +=  int(calculpossiblex * pourmacom1x) ;
         mesamplifront[5] -= int(calculpossiblex * pourmacom1x) ;
         mesamplifront[6] +=  int(calculpossiblex * pourmacom2x) ;
         mesamplifront[7] -= int(calculpossiblex * pourmacom2x) ;
         mesamplifront[8] +=  int(calculpossiblex * pourmacom3x) ;
         mesamplifront[9] -= int(calculpossiblex * pourmacom3x) ;
 break;
case 15 :
         mesamplifront[0] += calculpossiblex;
         mesamplifront[1] -= calculpossiblex;
         mesamplifront[2] +=  int(calculpossiblex * pourmacomx) ;
         mesamplifront[3] -= int(calculpossiblex * pourmacomx) ;
         mesamplifront[4] +=  int(calculpossiblex * pourmacom1x) ;
         mesamplifront[5] -= int(calculpossiblex * pourmacom1x) ;
         mesamplifront[6] +=  int(calculpossiblex * pourmacom2x) ;
         mesamplifront[7] -= int(calculpossiblex * pourmacom2x) ;
         mesamplifront[8] +=  int(calculpossiblex * pourmacom3x) ;
         mesamplifront[9] -= int(calculpossiblex * pourmacom3x) ;
 break;
case 16 :
         mesamplifront[0] -= calculpossiblex;
         mesamplifront[1] -= calculpossiblex;
         mesamplifront[2] -=  int(calculpossiblex * pourmacomx) ;
         mesamplifront[3] += int(calculpossiblex * pourmacomx) ;
         mesamplifront[4] -=  int(calculpossiblex * pourmacom1x) ;
         mesamplifront[5] += int(calculpossiblex * pourmacom1x) ;
         mesamplifront[6] -=  int(calculpossiblex * pourmacom2x) ;
         mesamplifront[7] += int(calculpossiblex * pourmacom2x) ;
         mesamplifront[8] -=  int(calculpossiblex * pourmacom3x) ;
         mesamplifront[9] += int(calculpossiblex * pourmacom3x) ;
 break;
case 17 :
         mesamplifront[0] -= calculpossiblex;
         mesamplifront[1] += calculpossiblex;
         mesamplifront[2] -=  int(calculpossiblex * pourmacomx) ;
         mesamplifront[3] -= int(calculpossiblex * pourmacomx) ;
         mesamplifront[4] -=  int(calculpossiblex * pourmacom1x) ;
         mesamplifront[5] += int(calculpossiblex * pourmacom1x) ;
         mesamplifront[6] -=  int(calculpossiblex * pourmacom2x) ;
         mesamplifront[7] += int(calculpossiblex * pourmacom2x) ;
         mesamplifront[8] -=  int(calculpossiblex * pourmacom3x) ;
         mesamplifront[9] += int(calculpossiblex * pourmacom3x) ;
 break;
case 18 :
         mesamplifront[0] -= calculpossiblex;
         mesamplifront[1] += calculpossiblex;
         mesamplifront[2] -=  int(calculpossiblex * pourmacomx) ;
         mesamplifront[3] += int(calculpossiblex * pourmacomx) ;
         mesamplifront[4] -=  int(calculpossiblex * pourmacom1x) ;
         mesamplifront[5] -= int(calculpossiblex * pourmacom1x) ;
         mesamplifront[6] -=  int(calculpossiblex * pourmacom2x) ;
         mesamplifront[7] += int(calculpossiblex * pourmacom2x) ;
         mesamplifront[8] -=  int(calculpossiblex * pourmacom3x) ;
         mesamplifront[9] += int(calculpossiblex * pourmacom3x) ;
 break;
case 19 :
         mesamplifront[0] -= calculpossiblex;
         mesamplifront[1] += calculpossiblex;
         mesamplifront[2] -=  int(calculpossiblex * pourmacomx) ;
         mesamplifront[3] += int(calculpossiblex * pourmacomx) ;
         mesamplifront[4] -=  int(calculpossiblex * pourmacom1x) ;
         mesamplifront[5] += int(calculpossiblex * pourmacom1x) ;
         mesamplifront[6] -=  int(calculpossiblex * pourmacom2x) ;
         mesamplifront[7] -= int(calculpossiblex * pourmacom2x) ;
         mesamplifront[8] -=  int(calculpossiblex * pourmacom3x) ;
         mesamplifront[9] += int(calculpossiblex * pourmacom3x) ;
 break;
case 20 :
         mesamplifront[0] -= calculpossiblex;
         mesamplifront[1] += calculpossiblex;
         mesamplifront[2] -=  int(calculpossiblex * pourmacomx) ;
         mesamplifront[3] += int(calculpossiblex * pourmacomx) ;
         mesamplifront[4] -=  int(calculpossiblex * pourmacom1x) ;
         mesamplifront[5] += int(calculpossiblex * pourmacom1x) ;
         mesamplifront[6] -=  int(calculpossiblex * pourmacom2x) ;
         mesamplifront[7] += int(calculpossiblex * pourmacom2x) ;
         mesamplifront[8] -=  int(calculpossiblex * pourmacom3x) ;
         mesamplifront[9] -= int(calculpossiblex * pourmacom3x) ;
 break;
case 21 :
         mesamplifront[0] -= calculpossiblex;
         mesamplifront[1] -= calculpossiblex;
         mesamplifront[2] -=  int(calculpossiblex * pourmacomx) ;
         mesamplifront[3] -= int(calculpossiblex * pourmacomx) ;
         mesamplifront[4] -=  int(calculpossiblex * pourmacom1x) ;
         mesamplifront[5] += int(calculpossiblex * pourmacom1x) ;
         mesamplifront[6] -=  int(calculpossiblex * pourmacom2x) ;
         mesamplifront[7] += int(calculpossiblex * pourmacom2x) ;
         mesamplifront[8] -=  int(calculpossiblex * pourmacom3x) ;
         mesamplifront[9] += int(calculpossiblex * pourmacom3x) ;
 break;
case 22 :
         mesamplifront[0] -= calculpossiblex;
         mesamplifront[1] += calculpossiblex;
         mesamplifront[2] -=  int(calculpossiblex * pourmacomx) ;
         mesamplifront[3] -= int(calculpossiblex * pourmacomx) ;
         mesamplifront[4] -=  int(calculpossiblex * pourmacom1x) ;
         mesamplifront[5] -= int(calculpossiblex * pourmacom1x) ;
         mesamplifront[6] -=  int(calculpossiblex * pourmacom2x) ;
         mesamplifront[7] += int(calculpossiblex * pourmacom2x) ;
         mesamplifront[8] -=  int(calculpossiblex * pourmacom3x) ;
         mesamplifront[9] += int(calculpossiblex * pourmacom3x) ;
 break;
case 23 :
         mesamplifront[0] -= calculpossiblex;
         mesamplifront[1] += calculpossiblex;
         mesamplifront[2] -=  int(calculpossiblex * pourmacomx) ;
         mesamplifront[3] += int(calculpossiblex * pourmacomx) ;
         mesamplifront[4] -=  int(calculpossiblex * pourmacom1x) ;
         mesamplifront[5] -= int(calculpossiblex * pourmacom1x) ;
         mesamplifront[6] -=  int(calculpossiblex * pourmacom2x) ;
         mesamplifront[7] -= int(calculpossiblex * pourmacom2x) ;
         mesamplifront[8] -=  int(calculpossiblex * pourmacom3x) ;
         mesamplifront[9] += int(calculpossiblex * pourmacom3x) ;
 break;
case 24 :
         mesamplifront[0] -= calculpossiblex;
         mesamplifront[1] += calculpossiblex;
         mesamplifront[2] -=  int(calculpossiblex * pourmacomx) ;
         mesamplifront[3] += int(calculpossiblex * pourmacomx) ;
         mesamplifront[4] -=  int(calculpossiblex * pourmacom1x) ;
         mesamplifront[5] += int(calculpossiblex * pourmacom1x) ;
         mesamplifront[6] -=  int(calculpossiblex * pourmacom2x) ;
         mesamplifront[7] -= int(calculpossiblex * pourmacom2x) ;
         mesamplifront[8] -=  int(calculpossiblex * pourmacom3x) ;
         mesamplifront[9] -= int(calculpossiblex * pourmacom3x) ;
 break;
case 25 :
         mesamplifront[0] -= calculpossiblex;
         mesamplifront[1] -= calculpossiblex;
         mesamplifront[2] -=  int(calculpossiblex * pourmacomx) ;
         mesamplifront[3] -= int(calculpossiblex * pourmacomx) ;
         mesamplifront[4] -=  int(calculpossiblex * pourmacom1x) ;
         mesamplifront[5] -= int(calculpossiblex * pourmacom1x) ;
         mesamplifront[6] -=  int(calculpossiblex * pourmacom2x) ;
         mesamplifront[7] += int(calculpossiblex * pourmacom2x) ;
         mesamplifront[8] -=  int(calculpossiblex * pourmacom3x) ;
         mesamplifront[9] += int(calculpossiblex * pourmacom3x) ;
 break;
case 26 :
         mesamplifront[0] -= calculpossiblex;
         mesamplifront[1] += calculpossiblex;
         mesamplifront[2] -=  int(calculpossiblex * pourmacomx) ;
         mesamplifront[3] -= int(calculpossiblex * pourmacomx) ;
         mesamplifront[4] -=  int(calculpossiblex * pourmacom1x) ;
         mesamplifront[5] -= int(calculpossiblex * pourmacom1x) ;
         mesamplifront[6] -=  int(calculpossiblex * pourmacom2x) ;
         mesamplifront[7] -= int(calculpossiblex * pourmacom2x) ;
         mesamplifront[8] -=  int(calculpossiblex * pourmacom3x) ;
         mesamplifront[9] += int(calculpossiblex * pourmacom3x) ;
 break;
case 27 :
         mesamplifront[0] -= calculpossiblex;
         mesamplifront[1] += calculpossiblex;
         mesamplifront[2] -=  int(calculpossiblex * pourmacomx) ;
         mesamplifront[3] += int(calculpossiblex * pourmacomx) ;
         mesamplifront[4] -=  int(calculpossiblex * pourmacom1x) ;
         mesamplifront[5] -= int(calculpossiblex * pourmacom1x) ;
         mesamplifront[6] -=  int(calculpossiblex * pourmacom2x) ;
         mesamplifront[7] -= int(calculpossiblex * pourmacom2x) ;
         mesamplifront[8] -=  int(calculpossiblex * pourmacom3x) ;
         mesamplifront[9] -= int(calculpossiblex * pourmacom3x) ;
 break;
default: 

         mesamplifront[0] += calculpossiblex;
         mesamplifront[1] -= calculpossiblex;
         mesamplifront[2] +=  int(calculpossiblex * pourmacomx) ;
         mesamplifront[3] -= int(calculpossiblex * pourmacomx) ;
         mesamplifront[4] +=  int(calculpossiblex * pourmacom1x) ;
         mesamplifront[5] -= int(calculpossiblex * pourmacom1x) ;
         mesamplifront[6] +=  int(calculpossiblex * pourmacom2x) ;
         mesamplifront[7] -= int(calculpossiblex * pourmacom2x) ;
         mesamplifront[8] +=  int(calculpossiblex * pourmacom3x) ;
         mesamplifront[9] -= int(calculpossiblex * pourmacom3x) ;

}
	
	 // respect des limites
      for(int i=0; i<10; i++)
       {
	if(mesamplifront[i]>249)
	mesamplifront[i] = 249;

	if(mesamplifront[i]<6)
	mesamplifront[i] = 6;	


	}

      for(int i=0; i<2; i++)
       {
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[i], (char)mesdurerfront[i]);

	}
      for(int i=2; i<10; i++)
       {
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[i], (char)mesdurerfront[i-1]);

	}

     }
 
  fclose(fichierjo);
}

// fin de la zone de travail de l'apprenant
