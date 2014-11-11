#include "AdnForme1.h"

// Génère les fichiers c.jo et c.joa
void genereFichierJo1(char c)
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

	 int basehaut = 1;
	 int basebas = 1;

// multiplie
  for(int duree = madurer; duree>0; duree--)
   {

//monte en augmentant le plateau des durées

    for(int laforcebbase = maforceh; laforcebbase > 0; laforcebbase--)
     {

         mesamplifront[1] -= mesvarampli[1];
         mesamplifront[0] += mesvarampli[0];

	 // respect des limites

	if(mesamplifront[0]>239)
	mesamplifront[0] = 239;

	if(mesamplifront[1]<16)
	mesamplifront[1] = 16;	

	 basehaut = (mesamplifront[0] -2);
	 basebas = (mesamplifront[1] +2);
	


        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront[0]);

        fprintf(fichierjo,  "%c%c",    (char)basehaut, (char)mesdurerfront[0]);

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront[0]);


        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront[1]);

        fprintf(fichierjo,  "%c%c",    (char)basebas, (char)mesdurerfront[1]);

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront[1]);



     }
//plateau


    for(int laforcebbase = maforceb; laforcebbase > 0; laforcebbase--)
     {
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront[0]);

        fprintf(fichierjo,  "%c%c",    (char)basehaut, (char)mesdurerfront[0]);

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront[0]);


        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront[1]);

        fprintf(fichierjo,  "%c%c",    (char)basebas, (char)mesdurerfront[1]);

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront[1]);

     }



//descend

    for(int laforcebbase = maforceh; laforcebbase > 0; laforcebbase--)
     {
         mesamplifront[1] += mesvarampli[1];
         mesamplifront[0] -= mesvarampli[0];

	 // respect des limites

	if(mesamplifront[1]>239)
	mesamplifront[1] = 239;

	if(mesamplifront[0]<16)
	mesamplifront[0] = 16;	

	 basehaut = (mesamplifront[0] -2);
	 basebas = (mesamplifront[1] +2);
	



        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront[0]);

        fprintf(fichierjo,  "%c%c",    (char)basehaut, (char)mesdurerfront[0]);

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront[0]);


        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront[1]);

        fprintf(fichierjo,  "%c%c",    (char)basebas, (char)mesdurerfront[1]);

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront[1]);

     }




// fin  multiplie
   }
 
  fclose(fichierjo);

}

// fin de la zone de travail de l'apprenant
