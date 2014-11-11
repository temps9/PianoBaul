#include "AdnForme5.h"

// Génère les fichiers c.jo et c.joa
void genereFichierJo5(char c)
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

       }
     }
//plateau

int abascule =1;
    for(int laforcebbase = maforceb; laforcebbase > 0; laforcebbase--)
     {

     switch (abascule) {

case 1 :


      for(int i=0; i<2; i++)
       {
        if(i%2)
         mesamplifront[i] -= mesvarampli[i];
        else
         mesamplifront[i] += mesvarampli[i];

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[i], (char)mesdurerfront[i]);

	}

    for(int laforcebbase = montremolo; laforcebbase > 0; laforcebbase--)
     {

      for(int i=0; i<2; i++)
       {
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[i], (char)mesdurerfront[i]);

	}

	}
abascule++;
 break;

default: 
         for(int i=0; i<2; i++)
          {
        if(i%2)
         mesamplifront[i] += mesvarampli[i];
        else
         mesamplifront[i] -= mesvarampli[i];

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[i], (char)mesdurerfront[i]);
	}

    for(int laforcebbase = maforceplus; laforcebbase > 0; laforcebbase--)
     {

      for(int i=0; i<2; i++)
       {
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[i], (char)mesdurerfront[i]);

	}

	}

abascule = 1;
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

       }
     }




// fin  multiplie
   }
 
  fclose(fichierjo);
}

// fin de la zone de travail de l'apprenant
