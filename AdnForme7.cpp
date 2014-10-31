#include "AdnForme7.h"

// Génère les fichiers c.jo et c.joa
void genereFichierJo7(char c)
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



// multiplie
  for(int duree = madurer; duree>0; duree--)
   {

//monte

    for(int laforcebbase = 7; laforcebbase > 0; laforcebbase--)
     {
      for(int i=0; i<2; i++)
       {
        if(i%2)
         mesamplifront[i] -= 12;
        else
         mesamplifront[i] += 12;
	
	 // respect des limites
	if(mesamplifront[i]>239)
	mesamplifront[i] = 239;

	if(mesamplifront[i]<16)
	mesamplifront[i] = 16;	

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[i], (char)mesdurerfront[i]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesamplifront[i], (unsigned char)mesdurerfront[i]);

       }
     }
//plateau

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
mesdurerfront[1] += mesvardurer[1];
mesamplifront[1] -= mesvarampli[1];
}

if(basculeDe5>basculeDe2)
{
mesdurerfront[0] -= mesvardurer[0];
mesamplifront[0] += mesvarampli[0];
mesdurerfront[1] -= mesvardurer[1];
mesamplifront[1] += mesvarampli[1];
}
basculeDe5++;
if(basculeDe5>basculeDe3)
basculeDe5 = 0;

	 // respect des limites

      for(int i=0; i<2; i++)
       {
	if(mesamplifront[i]>239)
	mesamplifront[i] = 239;

	if(mesamplifront[i]<16)
	mesamplifront[i] = 16;

	if(mesdurerfront[i]>239)
	mesdurerfront[i] = 239;

	if(mesdurerfront[i]<6)
	mesdurerfront[i] = 6;

}


        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront[0]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesamplifront[0], (unsigned char)mesdurerfront[0]);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront[1]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesamplifront[1], (unsigned char)mesdurerfront[1]);

    for(int laforcebbase = maforceplus; laforcebbase > 0; laforcebbase--)
     {


        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront[1]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesamplifront[0], (unsigned char)mesdurerfront[1]);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront[0]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesamplifront[1], (unsigned char)mesdurerfront[0]);

     }

     }



//descend

    for(int laforcebbase = 7; laforcebbase > 0; laforcebbase--)
     {
      for(int i=0; i<2; i++)
       {
        if(i%2)
         mesamplifront[i] += 12;
        else
         mesamplifront[i] -= 12;
	
	 // respect des limites
	if(mesamplifront[i]>239)
	mesamplifront[i] = 239;

	if(mesamplifront[i]<16)
	mesamplifront[i] = 16;

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[i], (char)mesdurerfront[i]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesamplifront[i], (unsigned char)mesdurerfront[i]);

       }
     }




// fin  multiplie
   }
 
  fclose(fichierjo);
  fclose(fichierjoa);
}

// fin de la zone de travail de l'apprenant
