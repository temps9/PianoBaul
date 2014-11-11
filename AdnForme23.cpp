#include "AdnForme23.h"

// Génère les fichiers c.jo et c.joa
void genereFichierJo23(char c)
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

  // Fichier jo
  FILE* fichierjo;
  if (!(fichierjo = fopen(nomfichierjo, "wb")))
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

// multiplie
  for(int duree = madurer; duree>0; duree--)
   {

//monte

    for(int laforcebbase = maforceh; laforcebbase > 0; laforcebbase--)
     {

         mesamplifront[1] -= calculpossible;
         mesamplifront[0] += calculpossible;
	
	 // respect des limites
      for(int i=0; i<2; i++)
       {
	if(mesamplifront[i]>239)
	mesamplifront[i] = 239;

	if(mesamplifront[i]<16)
	mesamplifront[i] = 16;	
	}
	ajusteur1 = mesamplifront[0] - 2;
	ajusteur2 = mesamplifront[1] + 2;

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront[0]);
        fprintf(fichierjo,  "%c%c",    (char)ajusteur1, (char)mesdurerfront[0]);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront[0]);

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront[1]);
        fprintf(fichierjo,  "%c%c",    (char)ajusteur2, (char)mesdurerfront[1]);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront[1]);

    for(int laforcebbasev = maforceplus; laforcebbasev > 0; laforcebbasev--)
     {
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront[0]);
        fprintf(fichierjo,  "%c%c",    (char)ajusteur1, (char)mesdurerfront[0]);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront[0]);

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront[1]);
        fprintf(fichierjo,  "%c%c",    (char)ajusteur2, (char)mesdurerfront[1]);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront[1]);
     }


     }
//plateau tremolo vinaigrette

double vieapropor = 0.01 * macombiendezonememoire;
int vieapropor1 = 128;
int vieapropor2 = 128;
int vieapropor3 = 128;
int vieapropor4 = 128;
int basculeDe1 = montremolo * 2;
int basculeDe2 = basculeDe1 - 1;
int basculeDe3 = basculeDe1 * 2 - 1;
int basculeDe5 = 0;

    for(int laforcebbase = maforceb; laforcebbase > 0; laforcebbase--)
     {

if(basculeDe5<basculeDe1)
{
mesdurerfront[0] += mesvardurer[0];
mesamplifront[0] -= mesvarampli[0];
ajusteur1 -= mesvarampli[0];
mesdurerfront[1] += mesvardurer[1];
mesamplifront[1] += mesvarampli[1];
ajusteur2 += mesvarampli[1];
}

if(basculeDe5>basculeDe2)
{
mesdurerfront[0] -= mesvardurer[0];
mesamplifront[0] += mesvarampli[0];
ajusteur1 += mesvarampli[0];
mesdurerfront[1] -= mesvardurer[1];
mesamplifront[1] -= mesvarampli[1];
ajusteur2 -= mesvarampli[1];
}
basculeDe5++;
if(basculeDe5>basculeDe3)
basculeDe5 = 0;

if (mesamplifront[0]>128)
vieapropor1 = ((mesamplifront[0]-128)*vieapropor)+128;

if (ajusteur1>128)
vieapropor2 = ((ajusteur1-128)*vieapropor)+128;

if (mesamplifront[1]>128)
vieapropor3 = ((mesamplifront[1]-128)*vieapropor)+128;

if (ajusteur2>128)
vieapropor4 = ((ajusteur2-128)*vieapropor)+128;

if (mesamplifront[0]<128)
vieapropor1 = 128 - ((128 - mesamplifront[0])*vieapropor);

if (ajusteur1<128)
vieapropor2 = 128 - ((128 -ajusteur1)*vieapropor);

if (mesamplifront[1]<128)
vieapropor3 = 128 - ((128 - mesamplifront[1])*vieapropor);

if (ajusteur2<128)
vieapropor4 = 128 - ((128 -ajusteur2)*vieapropor);

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront[0]);
        fprintf(fichierjo,  "%c%c",    (char)ajusteur1, (char)mesdurerfront[0]);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront[0]);

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront[1]);
        fprintf(fichierjo,  "%c%c",    (char)ajusteur2, (char)mesdurerfront[1]);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront[1]);
/*********************/

        fprintf(fichierjo,  "%c%c",    (char)vieapropor1, (char)mesdurerfront[0]);
        fprintf(fichierjo,  "%c%c",    (char)vieapropor2, (char)mesdurerfront[0]);
        fprintf(fichierjo,  "%c%c",    (char)vieapropor1, (char)mesdurerfront[0]);

        fprintf(fichierjo,  "%c%c",    (char)vieapropor3, (char)mesdurerfront[1]);
        fprintf(fichierjo,  "%c%c",    (char)vieapropor4, (char)mesdurerfront[1]);
        fprintf(fichierjo,  "%c%c",    (char)vieapropor3, (char)mesdurerfront[1]);
/************************/

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront[1]);
        fprintf(fichierjo,  "%c%c",    (char)ajusteur1, (char)mesdurerfront[1]);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront[1]);

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront[0]);
        fprintf(fichierjo,  "%c%c",    (char)ajusteur2, (char)mesdurerfront[0]);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront[0]);
/*********************/

        fprintf(fichierjo,  "%c%c",    (char)vieapropor1, (char)mesdurerfront[1]);
        fprintf(fichierjo,  "%c%c",    (char)vieapropor2, (char)mesdurerfront[1]);
        fprintf(fichierjo,  "%c%c",    (char)vieapropor1, (char)mesdurerfront[1]);

        fprintf(fichierjo,  "%c%c",    (char)vieapropor3, (char)mesdurerfront[0]);
        fprintf(fichierjo,  "%c%c",    (char)vieapropor4, (char)mesdurerfront[0]);
        fprintf(fichierjo,  "%c%c",    (char)vieapropor3, (char)mesdurerfront[0]);
/************************/

    for(int laforcebbasev = maforceplus; laforcebbasev > 0; laforcebbasev--)
     {
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront[0]);
        fprintf(fichierjo,  "%c%c",    (char)ajusteur1, (char)mesdurerfront[0]);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront[0]);

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront[1]);
        fprintf(fichierjo,  "%c%c",    (char)ajusteur2, (char)mesdurerfront[1]);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront[1]);
/*********************/

        fprintf(fichierjo,  "%c%c",    (char)vieapropor1, (char)mesdurerfront[0]);
        fprintf(fichierjo,  "%c%c",    (char)vieapropor2, (char)mesdurerfront[0]);
        fprintf(fichierjo,  "%c%c",    (char)vieapropor1, (char)mesdurerfront[0]);

        fprintf(fichierjo,  "%c%c",    (char)vieapropor3, (char)mesdurerfront[1]);
        fprintf(fichierjo,  "%c%c",    (char)vieapropor4, (char)mesdurerfront[1]);
        fprintf(fichierjo,  "%c%c",    (char)vieapropor3, (char)mesdurerfront[1]);
/************************/

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront[1]);
        fprintf(fichierjo,  "%c%c",    (char)ajusteur1, (char)mesdurerfront[1]);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront[1]);

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront[0]);
        fprintf(fichierjo,  "%c%c",    (char)ajusteur2, (char)mesdurerfront[0]);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront[0]);
/*********************/

        fprintf(fichierjo,  "%c%c",    (char)vieapropor1, (char)mesdurerfront[1]);
        fprintf(fichierjo,  "%c%c",    (char)vieapropor2, (char)mesdurerfront[1]);
        fprintf(fichierjo,  "%c%c",    (char)vieapropor1, (char)mesdurerfront[1]);

        fprintf(fichierjo,  "%c%c",    (char)vieapropor3, (char)mesdurerfront[0]);
        fprintf(fichierjo,  "%c%c",    (char)vieapropor4, (char)mesdurerfront[0]);
        fprintf(fichierjo,  "%c%c",    (char)vieapropor3, (char)mesdurerfront[0]);
/************************/
     }

     }



//descend

    for(int laforcebbase = maforceh - 1; laforcebbase > 0; laforcebbase--)
     {

         mesamplifront[1] += calculpossible;
         mesamplifront[0] -= calculpossible;
	
	 // respect des limites
      for(int i=0; i<2; i++)
       {
	if(mesamplifront[i]>239)
	mesamplifront[i] = 239;

	if(mesamplifront[i]<16)
	mesamplifront[i] = 16;	
	}
	ajusteur1 = mesamplifront[0] - 2;
	ajusteur2 = mesamplifront[1] + 2;

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront[0]);
        fprintf(fichierjo,  "%c%c",    (char)ajusteur1, (char)mesdurerfront[0]);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront[0]);

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront[1]);
        fprintf(fichierjo,  "%c%c",    (char)ajusteur2, (char)mesdurerfront[1]);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront[1]);

    for(int laforcebbasev = maforceplus; laforcebbasev > 0; laforcebbasev--)
     {
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront[0]);
        fprintf(fichierjo,  "%c%c",    (char)ajusteur1, (char)mesdurerfront[0]);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront[0]);

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront[1]);
        fprintf(fichierjo,  "%c%c",    (char)ajusteur2, (char)mesdurerfront[1]);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront[1]);
     }
     }




// fin  multiplie
   }
 
  fclose(fichierjo);
}

// fin de la zone de travail de l'apprenant
