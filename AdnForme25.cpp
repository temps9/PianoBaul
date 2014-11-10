#include "AdnForme25.h"

// Génère les fichiers c.jo et c.joa
void genereFichierJo25(char c)
{

    int mesamplifront[2]; //son du n, la référence
    int mesdurerfront[2]; //son du n, la référence
    int mesvarampli[2]; //son du n, la référence
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
  // Nom du fichier joa
  char nomfichierjoa[32];
  snprintf(nomfichierjoa, 32, "%c.joa", c);

  // Fichier jo
  FILE* fichierjo;
  if (!(fichierjo = fopen(nomfichierjo, "wb")))
   {
    exit(-1);
   }
  // Fichier joa
  FILE* fichierjoa;
  if (!(fichierjoa = fopen(nomfichierjoa, "wb")))
   {
    exit(-1);
   }

// ici commence la zone de travail pour l'apprenant

mesdurerfront[0] = ((joc.lagame * mesdurerfront[0]) * 0.01);
mesdurerfront[1] = ((joc.lagame * mesdurerfront[1]) * 0.01);


int tablex[250]= {120, 60, 40, 30, 24, 20, 17, 15, 13, 12, 11, 10, 9, 9, 8, 8, 7, 7, 6, 6, 6, 5, 5, 5, 5, 5, 4, 4, 4, 4, 4, 4, 4, 4, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
int calculpossible = tablex[maforceh-1];
int ajusteur1;
int ajusteur2;
int ajusteur3;
int ajusteur4;
double pourmacom = (macombiendezonememoire * 0.01);

// multiplie
  for(int duree = madurer; duree>0; duree--)
   {

//monte

    for(int laforcebbase = maforceh; laforcebbase > 0; laforcebbase--)
     {

         mesamplifront[1] -= calculpossible;
         mesamplifront[0] += calculpossible;
         mesvardurer[1] -= int(calculpossible * pourmacom) ;
         mesvardurer[0] +=  int(calculpossible * pourmacom) ;
	
	 // respect des limites
      for(int i=0; i<2; i++)
       {
	if(mesamplifront[i]>239)
	mesamplifront[i] = 239;

	if(mesamplifront[i]<16)
	mesamplifront[i] = 16;	

	if(mesvardurer[i]>239)
	mesvardurer[i] = 239;

	if(mesvardurer[i]<16)
	mesvardurer[i] = 16;	
	}
	ajusteur1 = mesamplifront[0] - 2;
	ajusteur2 = mesamplifront[1] + 2;
	ajusteur3 = mesvardurer[0] - 2;
	ajusteur4 = mesvardurer[1] + 2;

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront[0]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesamplifront[0], (unsigned char)mesdurerfront[0]);
        fprintf(fichierjo,  "%c%c",    (char)ajusteur1, (char)mesdurerfront[0]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)ajusteur1, (unsigned char)mesdurerfront[0]);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront[0]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesamplifront[0], (unsigned char)mesdurerfront[0]);

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront[1]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesamplifront[1], (unsigned char)mesdurerfront[1]);
        fprintf(fichierjo,  "%c%c",    (char)ajusteur2, (char)mesdurerfront[1]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)ajusteur2, (unsigned char)mesdurerfront[1]);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront[1]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesamplifront[1], (unsigned char)mesdurerfront[1]);

        fprintf(fichierjo,  "%c%c",    (char)mesvardurer[0], (char)mesdurerfront[0]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesvardurer[0], (unsigned char)mesdurerfront[0]);
        fprintf(fichierjo,  "%c%c",    (char)ajusteur3, (char)mesdurerfront[0]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)ajusteur3, (unsigned char)mesdurerfront[0]);
        fprintf(fichierjo,  "%c%c",    (char)mesvardurer[0], (char)mesdurerfront[0]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesvardurer[0], (unsigned char)mesdurerfront[0]);

        fprintf(fichierjo,  "%c%c",    (char)mesvardurer[1], (char)mesdurerfront[1]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesvardurer[1], (unsigned char)mesdurerfront[1]);
        fprintf(fichierjo,  "%c%c",    (char)ajusteur4, (char)mesdurerfront[1]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)ajusteur4, (unsigned char)mesdurerfront[1]);
        fprintf(fichierjo,  "%c%c",    (char)mesvardurer[1], (char)mesdurerfront[1]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesvardurer[1], (unsigned char)mesdurerfront[1]);


    for(int laforcebbasev = maforceplus; laforcebbasev > 0; laforcebbasev--)
     {
        fprintf(fichierjo,  "%c%c",    (char)mesvardurer[0], (char)mesdurerfront[0]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesvardurer[0], (unsigned char)mesdurerfront[0]);
        fprintf(fichierjo,  "%c%c",    (char)ajusteur3, (char)mesdurerfront[0]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)ajusteur3, (unsigned char)mesdurerfront[0]);
        fprintf(fichierjo,  "%c%c",    (char)mesvardurer[0], (char)mesdurerfront[0]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesvardurer[0], (unsigned char)mesdurerfront[0]);

        fprintf(fichierjo,  "%c%c",    (char)mesvardurer[1], (char)mesdurerfront[1]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesvardurer[1], (unsigned char)mesdurerfront[1]);
        fprintf(fichierjo,  "%c%c",    (char)ajusteur4, (char)mesdurerfront[1]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)ajusteur4, (unsigned char)mesdurerfront[1]);
        fprintf(fichierjo,  "%c%c",    (char)mesvardurer[1], (char)mesdurerfront[1]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesvardurer[1], (unsigned char)mesdurerfront[1]);
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
mesvardurer[0] -= mesvarampli[0];
mesamplifront[0] -= mesvarampli[0];
ajusteur1 -= mesvarampli[0];
ajusteur3 -= mesvarampli[0];
mesvardurer[1] += mesvarampli[1];
mesamplifront[1] += mesvarampli[1];
ajusteur2 += mesvarampli[1];
ajusteur4 += mesvarampli[1];
}

if(basculeDe5>basculeDe2)
{
mesvardurer[0] += mesvarampli[0];
mesamplifront[0] += mesvarampli[0];
ajusteur1 += mesvarampli[0];
ajusteur3 += mesvarampli[0];
mesvardurer[1] -= mesvarampli[1];
mesamplifront[1] -= mesvarampli[1];
ajusteur2 -= mesvarampli[1];
ajusteur4 -= mesvarampli[1];
}
basculeDe5++;
if(basculeDe5>basculeDe3)
basculeDe5 = 0;

      for(int i=0; i<2; i++)
       {
	if(mesamplifront[i]>239)
	mesamplifront[i] = 239;

	if(mesamplifront[i]<16)
	mesamplifront[i] = 16;	

	if(mesdurerfront[i]>239)
	mesdurerfront[i] = 239;

	if(mesdurerfront[i]<16)
	mesdurerfront[i] = 16;	
	}




        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront[0]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesamplifront[0], (unsigned char)mesdurerfront[0]);
        fprintf(fichierjo,  "%c%c",    (char)ajusteur1, (char)mesdurerfront[0]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)ajusteur1, (unsigned char)mesdurerfront[0]);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront[0]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesamplifront[0], (unsigned char)mesdurerfront[0]);

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront[1]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesamplifront[1], (unsigned char)mesdurerfront[1]);
        fprintf(fichierjo,  "%c%c",    (char)ajusteur2, (char)mesdurerfront[1]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)ajusteur2, (unsigned char)mesdurerfront[1]);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront[1]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesamplifront[1], (unsigned char)mesdurerfront[1]);

        fprintf(fichierjo,  "%c%c",    (char)mesvardurer[0], (char)mesdurerfront[0]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesvardurer[0], (unsigned char)mesdurerfront[0]);
        fprintf(fichierjo,  "%c%c",    (char)ajusteur3, (char)mesdurerfront[0]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)ajusteur3, (unsigned char)mesdurerfront[0]);
        fprintf(fichierjo,  "%c%c",    (char)mesvardurer[0], (char)mesdurerfront[0]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesvardurer[0], (unsigned char)mesdurerfront[0]);

        fprintf(fichierjo,  "%c%c",    (char)mesvardurer[1], (char)mesdurerfront[1]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesvardurer[1], (unsigned char)mesdurerfront[1]);
        fprintf(fichierjo,  "%c%c",    (char)ajusteur4, (char)mesdurerfront[1]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)ajusteur4, (unsigned char)mesdurerfront[1]);
        fprintf(fichierjo,  "%c%c",    (char)mesvardurer[1], (char)mesdurerfront[1]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesvardurer[1], (unsigned char)mesdurerfront[1]);
/*********************/



    for(int laforcebbasev = maforceplus; laforcebbasev > 0; laforcebbasev--)
     {
        fprintf(fichierjo,  "%c%c",    (char)mesvardurer[0], (char)mesdurerfront[0]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesvardurer[0], (unsigned char)mesdurerfront[0]);
        fprintf(fichierjo,  "%c%c",    (char)ajusteur3, (char)mesdurerfront[0]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)ajusteur3, (unsigned char)mesdurerfront[0]);
        fprintf(fichierjo,  "%c%c",    (char)mesvardurer[0], (char)mesdurerfront[0]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesvardurer[0], (unsigned char)mesdurerfront[0]);

        fprintf(fichierjo,  "%c%c",    (char)mesvardurer[1], (char)mesdurerfront[1]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesvardurer[1], (unsigned char)mesdurerfront[1]);
        fprintf(fichierjo,  "%c%c",    (char)ajusteur4, (char)mesdurerfront[1]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)ajusteur4, (unsigned char)mesdurerfront[1]);
        fprintf(fichierjo,  "%c%c",    (char)mesvardurer[1], (char)mesdurerfront[1]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesvardurer[1], (unsigned char)mesdurerfront[1]);
     }
/************************/


     }



//descend


    for(int laforcebbase = maforceh-1; laforcebbase > 0; laforcebbase--)
     {

         mesamplifront[1] += calculpossible;
         mesamplifront[0] -= calculpossible;
         mesvardurer[1] += int(calculpossible * pourmacom) ;
         mesvardurer[0] -=  int(calculpossible * pourmacom) ;
	
	 // respect des limites
      for(int i=0; i<2; i++)
       {
	if(mesamplifront[i]>239)
	mesamplifront[i] = 239;

	if(mesamplifront[i]<16)
	mesamplifront[i] = 16;	

	if(mesvardurer[i]>239)
	mesvardurer[i] = 239;

	if(mesvardurer[i]<16)
	mesvardurer[i] = 16;	
	}
	ajusteur1 = mesamplifront[0] - 2;
	ajusteur2 = mesamplifront[1] + 2;
	ajusteur3 = mesvardurer[0] - 2;
	ajusteur4 = mesvardurer[1] + 2;

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront[0]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesamplifront[0], (unsigned char)mesdurerfront[0]);
        fprintf(fichierjo,  "%c%c",    (char)ajusteur1, (char)mesdurerfront[0]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)ajusteur1, (unsigned char)mesdurerfront[0]);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront[0]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesamplifront[0], (unsigned char)mesdurerfront[0]);

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront[1]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesamplifront[1], (unsigned char)mesdurerfront[1]);
        fprintf(fichierjo,  "%c%c",    (char)ajusteur2, (char)mesdurerfront[1]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)ajusteur2, (unsigned char)mesdurerfront[1]);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront[1]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesamplifront[1], (unsigned char)mesdurerfront[1]);

        fprintf(fichierjo,  "%c%c",    (char)mesvardurer[0], (char)mesdurerfront[0]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesvardurer[0], (unsigned char)mesdurerfront[0]);
        fprintf(fichierjo,  "%c%c",    (char)ajusteur3, (char)mesdurerfront[0]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)ajusteur3, (unsigned char)mesdurerfront[0]);
        fprintf(fichierjo,  "%c%c",    (char)mesvardurer[0], (char)mesdurerfront[0]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesvardurer[0], (unsigned char)mesdurerfront[0]);

        fprintf(fichierjo,  "%c%c",    (char)mesvardurer[1], (char)mesdurerfront[1]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesvardurer[1], (unsigned char)mesdurerfront[1]);
        fprintf(fichierjo,  "%c%c",    (char)ajusteur4, (char)mesdurerfront[1]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)ajusteur4, (unsigned char)mesdurerfront[1]);
        fprintf(fichierjo,  "%c%c",    (char)mesvardurer[1], (char)mesdurerfront[1]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesvardurer[1], (unsigned char)mesdurerfront[1]);


    for(int laforcebbasev = maforceplus; laforcebbasev > 0; laforcebbasev--)
     {
        fprintf(fichierjo,  "%c%c",    (char)mesvardurer[0], (char)mesdurerfront[0]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesvardurer[0], (unsigned char)mesdurerfront[0]);
        fprintf(fichierjo,  "%c%c",    (char)ajusteur3, (char)mesdurerfront[0]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)ajusteur3, (unsigned char)mesdurerfront[0]);
        fprintf(fichierjo,  "%c%c",    (char)mesvardurer[0], (char)mesdurerfront[0]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesvardurer[0], (unsigned char)mesdurerfront[0]);

        fprintf(fichierjo,  "%c%c",    (char)mesvardurer[1], (char)mesdurerfront[1]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesvardurer[1], (unsigned char)mesdurerfront[1]);
        fprintf(fichierjo,  "%c%c",    (char)ajusteur4, (char)mesdurerfront[1]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)ajusteur4, (unsigned char)mesdurerfront[1]);
        fprintf(fichierjo,  "%c%c",    (char)mesvardurer[1], (char)mesdurerfront[1]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesvardurer[1], (unsigned char)mesdurerfront[1]);
     }


     }


// fin  multiplie
   }
 
  fclose(fichierjo);
  fclose(fichierjoa);
}

// fin de la zone de travail de l'apprenant
