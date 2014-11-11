#include "AdnForme30.h"

// Génère les fichiers c.jo
void genereFichierJo30(char c)
{
    int mesamplifront[10]; //son du n, la référence
    int mesdurerfront[10]; //son du n, la référence
    int mesvarampli[10]; //son du n, la référence
    int mesvardurer[2]; //son du n, la référence
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
mesdurerfront[0] = ((joc.devingtsixaun*2) + mesdurerfront[0]);
mesdurerfront[1] = ((joc.devingtsixaun*2) + mesdurerfront[1]);

int tablex[250]= {120, 60, 40, 30, 24, 20, 17, 15, 13, 12, 11, 10, 9, 9, 8, 8, 7, 7, 6, 6, 6, 5, 5, 5, 5, 5, 4, 4, 4, 4, 4, 4, 4, 4, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
int calculpossible = tablex[maforceh-1];
double pourmacom = (mesvardurer[0] * 0.01);
double pourmacom1 = (mesvardurer[1] * 0.01);
double pourmacom2 = (madurer * 0.01);
double pourmacom3 = (macombiendezonememoire * 0.01);
      for(int i=2; i<10; i++)
       {
        if(i%2)
                {
	mesamplifront[i] = mesamplifront[1];
	mesdurerfront[i] = mesdurerfront[1];
         mesvarampli[i] = mesvarampli[1];	}
        else
                {
	mesamplifront[i] = mesamplifront[0];
	mesdurerfront[i] = mesdurerfront[0];
         mesvarampli[i] = mesvarampli[0];	}
	}
//monte

    for(int laforcebbase = 7; laforcebbase > 0; laforcebbase--)
     {
         mesamplifront[0] += calculpossible;
         mesamplifront[1] -= calculpossible;
         mesamplifront[2] +=  int(calculpossible * pourmacom) ;
         mesamplifront[3] -= int(calculpossible * pourmacom) ;
         mesamplifront[4] +=  int(calculpossible * pourmacom1) ;
         mesamplifront[5] -= int(calculpossible * pourmacom1) ;
         mesamplifront[6] +=  (calculpossible * pourmacom2) ;
         mesamplifront[7] -= int(calculpossible * pourmacom2) ;
         mesamplifront[8] +=  int(calculpossible * pourmacom3) ;
         mesamplifront[9] -= int(calculpossible * pourmacom3) ;
	
	 // respect des limites
      for(int i=0; i<10; i++)
       {
	if(mesamplifront[i]>239)
	mesamplifront[i] = 239;

	if(mesamplifront[i]<16)
	mesamplifront[i] = 16;	

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[i], (char)mesdurerfront[i]);

   for(int laforcebbasev = maforceplus; laforcebbasev > 0; laforcebbasev--)
     {
      for(int aia=2; aia<10; aia++)
       {
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[aia], (char)mesdurerfront[aia-1]);
	}
     }

	}

     }
//plateau tremolo mariage

int basculeDe1 = montremolo * 2;
int basculeDe2 = basculeDe1 - 1;
int basculeDe3 = basculeDe1 * 2 - 1;
int basculeDe5 = 0;

    for(int laforcebbase = maforceb; laforcebbase > 0; laforcebbase--)
     {

if(basculeDe5<basculeDe1)
{
      for(int i=0; i<10; i++)
       {


        if(i%2)
         mesamplifront[i] += mesvarampli[i];
        else
         mesamplifront[i] -= mesvarampli[i];

	mesdurerfront[i] += mesvarampli[i];


	if(mesamplifront[i]>239)
	mesamplifront[i] = 239;

	if(mesamplifront[i]<16)
	mesamplifront[i] = 16;	

	if(mesdurerfront[i]>239)
	mesdurerfront[i] = 239;

	}
}

if(basculeDe5>basculeDe2)
{
      for(int i=0; i<10; i++)
       {


        if(i%2)
         mesamplifront[i] -= mesvarampli[i];
        else
         mesamplifront[i] += mesvarampli[i];

	mesdurerfront[i] -= mesvarampli[i];


	if(mesamplifront[i]>239)
	mesamplifront[i] = 239;

	if(mesamplifront[i]<16)
	mesamplifront[i] = 16;	

	if(mesdurerfront[i]<16)
	mesdurerfront[i] = 16;	

	}

}
basculeDe5++;
if(basculeDe5>basculeDe3)
basculeDe5 = 0;

      for(int i=0; i<10; i++)
       {
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[i], (char)mesdurerfront[i]);

    for(int laforcebbasev = maforceplus; laforcebbasev > 0; laforcebbasev--)
     {
      for(int aia=2; aia<10; aia++)
       {
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[aia], (char)mesdurerfront[aia-1]);
	}
     }

	}


     }
//descend

    for(int laforcebbase = maforceh-1; laforcebbase > 0; laforcebbase--)
     {
         mesamplifront[0] -= calculpossible;
         mesamplifront[1] += calculpossible;
         mesamplifront[2] -=  int(calculpossible * pourmacom) ;
         mesamplifront[3] += int(calculpossible * pourmacom) ;
         mesamplifront[4] -=  int(calculpossible * pourmacom1) ;
         mesamplifront[5] += int(calculpossible * pourmacom1) ;
         mesamplifront[6] -=  int(calculpossible * pourmacom2) ;
         mesamplifront[7] += int(calculpossible * pourmacom2) ;
         mesamplifront[8] -=  int(calculpossible * pourmacom3) ;
         mesamplifront[9] += int(calculpossible * pourmacom3) ;

	
	 // respect des limites
      for(int i=0; i<10; i++)
       {
	if(mesamplifront[i]>239)
	mesamplifront[i] = 239;

	if(mesamplifront[i]<16)
	mesamplifront[i] = 16;	

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[i], (char)mesdurerfront[i]);

   for(int laforcebbasev = maforceplus; laforcebbasev > 0; laforcebbasev--)
     {
      for(int aia=2; aia<10; aia++)
       {
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[aia], (char)mesdurerfront[aia-1]);
	}
     }

	}

     }
 
  fclose(fichierjo);
}

// fin de la zone de travail de l'apprenant
