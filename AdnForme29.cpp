#include "AdnForme29.h"

// Génère les fichiers c.jo et c.joa
void genereFichierJo29(char c)
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

mesdurerfront[0] = ((joc.devingtsixaun*2) + mesdurerfront[0]);
mesdurerfront[1] = ((joc.devingtsixaun*2) + mesdurerfront[1]);

int tablex[250]= {120, 60, 40, 30, 24, 20, 17, 15, 13, 12, 11, 10, 9, 9, 8, 8, 7, 7, 6, 6, 6, 5, 5, 5, 5, 5, 4, 4, 4, 4, 4, 4, 4, 4, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
int calculpossible = tablex[maforceh-1];
double pourmacom = (macombiendezonememoire * 0.005);
double pourmacom1 = (macombiendezonememoire * 0.01);
//monte
    for(int laforcebbase = maforceh; laforcebbase > 0; laforcebbase--)
     {

         mesamplifront[1] -= calculpossible;
         mesamplifront[0] += calculpossible;
         mesvardurer[1] -= int(calculpossible * pourmacom) ;
         mesvardurer[0] +=  int(calculpossible * pourmacom) ;
         mesvarampli[1] -= int(calculpossible * pourmacom1) ;
         mesvarampli[0] +=  int(calculpossible * pourmacom1) ;
	
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
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront[0]);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront[1]);
        fprintf(fichierjo,  "%c%c",    (char)mesvarampli[0], (char)mesdurerfront[1]);
        fprintf(fichierjo,  "%c%c",    (char)mesvarampli[1], (char)mesdurerfront[0]);
        fprintf(fichierjo,  "%c%c",    (char)mesvardurer[0], (char)mesdurerfront[1]);
        fprintf(fichierjo,  "%c%c",    (char)mesvardurer[1], (char)mesdurerfront[0]);
    for(int laforcebbasev = maforceplus; laforcebbasev > 0; laforcebbasev--)
     {
        fprintf(fichierjo,  "%c%c",    (char)mesvarampli[0], (char)mesdurerfront[1]);
        fprintf(fichierjo,  "%c%c",    (char)mesvarampli[1], (char)mesdurerfront[0]);
        fprintf(fichierjo,  "%c%c",    (char)mesvardurer[0], (char)mesdurerfront[1]);
        fprintf(fichierjo,  "%c%c",    (char)mesvardurer[1], (char)mesdurerfront[0]);
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
mesvardurer[0] -= madurer;
mesamplifront[0] -= madurer;
mesvardurer[1] += madurer;
mesamplifront[1] += madurer;
mesdurerfront[0] += madurer;
mesdurerfront[1] += madurer;
mesvarampli[0] += madurer;
mesvarampli[1] += madurer;

}

if(basculeDe5>basculeDe2)
{
mesvardurer[0] += madurer;
mesamplifront[0] += madurer;
mesvardurer[1] -= madurer;
mesamplifront[1] -= madurer;
mesdurerfront[0] -= madurer;
mesdurerfront[1] -= madurer;
mesvarampli[0] -= madurer;
mesvarampli[1] -= madurer;

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

	if(mesvarampli[i]>239)
	mesvarampli[i] = 239;

	if(mesvarampli[i]<16)
	mesvarampli[i] = 16;	
	}
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront[0]);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront[1]);
        fprintf(fichierjo,  "%c%c",    (char)mesvarampli[0], (char)mesdurerfront[1]);
        fprintf(fichierjo,  "%c%c",    (char)mesvarampli[1], (char)mesdurerfront[0]);
        fprintf(fichierjo,  "%c%c",    (char)mesvardurer[0], (char)mesdurerfront[1]);
        fprintf(fichierjo,  "%c%c",    (char)mesvardurer[1], (char)mesdurerfront[0]);
    for(int laforcebbasev = maforceplus; laforcebbasev > 0; laforcebbasev--)
     {
        fprintf(fichierjo,  "%c%c",    (char)mesvarampli[0], (char)mesdurerfront[1]);
        fprintf(fichierjo,  "%c%c",    (char)mesvarampli[1], (char)mesdurerfront[0]);
        fprintf(fichierjo,  "%c%c",    (char)mesvardurer[0], (char)mesdurerfront[1]);
        fprintf(fichierjo,  "%c%c",    (char)mesvardurer[1], (char)mesdurerfront[0]);
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
         mesvarampli[1] += int(calculpossible * pourmacom1) ;
         mesvarampli[0] -=  int(calculpossible * pourmacom1) ;
	
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
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront[0]);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront[1]);
        fprintf(fichierjo,  "%c%c",    (char)mesvarampli[0], (char)mesdurerfront[1]);
        fprintf(fichierjo,  "%c%c",    (char)mesvarampli[1], (char)mesdurerfront[0]);
        fprintf(fichierjo,  "%c%c",    (char)mesvardurer[0], (char)mesdurerfront[1]);
        fprintf(fichierjo,  "%c%c",    (char)mesvardurer[1], (char)mesdurerfront[0]);
    for(int laforcebbasev = maforceplus; laforcebbasev > 0; laforcebbasev--)
     {
        fprintf(fichierjo,  "%c%c",    (char)mesvarampli[0], (char)mesdurerfront[1]);
        fprintf(fichierjo,  "%c%c",    (char)mesvarampli[1], (char)mesdurerfront[0]);
        fprintf(fichierjo,  "%c%c",    (char)mesvardurer[0], (char)mesdurerfront[1]);
        fprintf(fichierjo,  "%c%c",    (char)mesvardurer[1], (char)mesdurerfront[0]);
     }
     } 
  fclose(fichierjo);
}

// fin de la zone de travail de l'apprenant
