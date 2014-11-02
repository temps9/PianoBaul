#include "AdnForme10.h"

// Génère les fichiers c.jo et c.joa
void genereFichierJo10(char c)
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

int avececo[2];
int avececo1[2];



// multiplie
  for(int duree = madurer; duree>0; duree--)
   {

//monte

    for(int laforcebbase = maforceh; laforcebbase > 0; laforcebbase--)
     {
      for(int i=0; i<2; i++)
       {
        if(i%2)       {
         mesamplifront[i] -= mesvarampli[i];
         mesdurerfront[i] += mesvardurer[i];
	       }
        else       {
         mesamplifront[i] += mesvarampli[i];
         mesdurerfront[i] -= mesvardurer[i];
	       }

avececo[0]=mesamplifront[0] - (mesamplifront[0]*montremolo)*0.1;
avececo[1]=mesamplifront[1] + (mesamplifront[1]*montremolo)*0.1;
avececo1[0]=mesamplifront[0] - (mesamplifront[0]*macombiendezonememoire)*0.05;
avececo1[1]=mesamplifront[1] + (mesamplifront[1]*macombiendezonememoire)*0.05;

	 // respect des limites
	if(mesamplifront[i]>239)
	mesamplifront[i] = 239;

	if(mesamplifront[i]<16)
	mesamplifront[i] = 16;	

	if(mesdurerfront[i]>239)
	mesdurerfront[i] = 239;

	if(mesdurerfront[i]<16)
	mesdurerfront[i] = 16;	

	if(avececo[i]>239)
	avececo[i] = 239;

	if(avececo[i]<16)
	avececo[i] = 16;	

	if(avececo1[i]>239)
	avececo1[i] = 239;

	if(avececo1[i]<16)
	avececo1[i] = 16;	

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[i], (char)mesdurerfront[i]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesamplifront[i], (unsigned char)mesdurerfront[i]);

    for(int laforcebbaseb = maforceplus; laforcebbaseb > 0; laforcebbaseb--)
     {

        fprintf(fichierjo,  "%c%c",    (char)avececo[i], (char)mesdurerfront[i]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)avececo[i], (unsigned char)mesdurerfront[i]);
        fprintf(fichierjo,  "%c%c",    (char)avececo1[i], (char)mesdurerfront[i]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)avececo1[i], (unsigned char)mesdurerfront[i]);
	}
       }
     }
//plateau


    for(int laforcebbase = maforceb; laforcebbase > 0; laforcebbase--)
     {
      for(int i=0; i<2; i++)
       {

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[i], (char)mesdurerfront[i]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesamplifront[i], (unsigned char)mesdurerfront[i]);

    for(int laforcebbaseb = maforceplus; laforcebbaseb > 0; laforcebbaseb--)
     {

        fprintf(fichierjo,  "%c%c",    (char)avececo[i], (char)mesdurerfront[i]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)avececo[i], (unsigned char)mesdurerfront[i]);
        fprintf(fichierjo,  "%c%c",    (char)avececo1[i], (char)mesdurerfront[i]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)avececo1[i], (unsigned char)mesdurerfront[i]);
	}

       }
     }



//descend


    for(int laforcebbase = maforceh; laforcebbase > 0; laforcebbase--)
     {
      for(int i=0; i<2; i++)
       {
        if(i%2)       {
         mesamplifront[i] += mesvarampli[i];
         mesdurerfront[i] -= mesvardurer[i];
	       }
        else       {
         mesamplifront[i] -= mesvarampli[i];
         mesdurerfront[i] += mesvardurer[i];
	       }

avececo[0]=mesamplifront[0] - (mesamplifront[0]*montremolo)*0.1;
avececo[1]=mesamplifront[1] + (mesamplifront[1]*montremolo)*0.1;
avececo1[0]=mesamplifront[0] - (mesamplifront[0]*macombiendezonememoire)*0.05;
avececo1[1]=mesamplifront[1] + (mesamplifront[1]*macombiendezonememoire)*0.05;

	 // respect des limites
	if(mesamplifront[i]>239)
	mesamplifront[i] = 239;

	if(mesamplifront[i]<16)
	mesamplifront[i] = 16;	

	if(mesdurerfront[i]>239)
	mesdurerfront[i] = 239;

	if(mesdurerfront[i]<16)
	mesdurerfront[i] = 16;	

	if(avececo[i]>239)
	avececo[i] = 239;

	if(avececo[i]<16)
	avececo[i] = 16;	

	if(avececo1[i]>239)
	avececo1[i] = 239;

	if(avececo1[i]<16)
	avececo1[i] = 16;	

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[i], (char)mesdurerfront[i]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesamplifront[i], (unsigned char)mesdurerfront[i]);

    for(int laforcebbaseb = maforceplus; laforcebbaseb > 0; laforcebbaseb--)
     {
        fprintf(fichierjo,  "%c%c",    (char)avececo[i], (char)mesdurerfront[i]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)avececo[i], (unsigned char)mesdurerfront[i]);
        fprintf(fichierjo,  "%c%c",    (char)avececo1[i], (char)mesdurerfront[i]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)avececo1[i], (unsigned char)mesdurerfront[i]);
	}
       }
     }




// fin  multiplie
   }
 
  fclose(fichierjo);
  fclose(fichierjoa);
}

// fin de la zone de travail de l'apprenant
