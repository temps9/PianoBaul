#include "AdnForme4.h"

// Génère les fichiers c.jo et c.joa
void genereFichierJo4(char c)
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

// marteau acoustique

	int montage1 = mesamplifront[0] - 2;
	int montage2 = mesamplifront[0] - 4;
	int montage3 = mesamplifront[1] + 2;
	int montage4 = mesamplifront[1] + 4;

	int montage5 = mesdurerfront[0] - maforceb;
	int montage6 = mesdurerfront[0] - montremolo;
	int montage7 = mesdurerfront[1] + maforceb;
	int montage8 = mesdurerfront[1] + montremolo;

    for(int laforcehbase = maforceh; laforcehbase > 0; laforcehbase--)
     {

         mesamplifront[0] -= mesvarampli[0];
         montage1 -= (maforceplus + mesvarampli[0]);
         montage2 -= (maforceplus + mesvarampli[0]);
         mesamplifront[1] += mesvarampli[1];
         montage3 += (maforceplus + mesvarampli[0]);
         montage4 += (maforceplus + mesvarampli[0]);


	montage5 = mesdurerfront[0] - maforceb;
	montage6 = mesdurerfront[0] - montremolo;
	montage7 = mesdurerfront[1] + maforceb;
	montage8 = mesdurerfront[1] + montremolo;


	 // respect des limites
	if(mesdurerfront[0]>239)
	mesdurerfront[0] = 239;

	if(mesdurerfront[0]<6)
	mesdurerfront[0] = 6;

	if(mesdurerfront[1]>239)
	mesdurerfront[1] = 239;

	if(mesdurerfront[1]<6)
	mesdurerfront[1] = 6;

	if(montage1>239)
	montage1 = 239;
	if(montage1<16)
	montage1 = 16;

	if(montage2>239)
	montage2 = 239;
	if(montage2<16)
	montage2 = 16;

	if(montage3>239)
	montage3 = 239;
	if(montage3<16)
	montage3 = 16;

	if(montage4>239)
	montage4 = 239;
	if(montage4<16)
	montage4 = 16;


	if(mesamplifront[0]>239)
	mesamplifront[0] = 239;

	if(mesamplifront[0]<16)
	mesamplifront[0] = 16;

	if(mesamplifront[1]>239)
	mesamplifront[1] = 239;

	if(mesamplifront[1]<16)
	mesamplifront[1] = 16;

	if(montage5>239)
	montage5 = 239;

	if(montage5<16)
	montage5 = 16;
	if(montage6>239)
	montage6 = 239;

	if(montage6<16)
	montage6 = 16;
	if(montage7>239)
	montage7 = 239;

	if(montage7<16)
	montage7 = 16;
	if(montage8>239)
	montage8 = 239;

	if(montage8<16)
	montage8 = 16;




          fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront[0]);

          fprintf(fichierjo,  "%c%c",    (char)montage1, (char)montage5);

          fprintf(fichierjo,  "%c%c",    (char) montage2, (char)montage6);

          fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront[1]);

          fprintf(fichierjo,  "%c%c",    (char)montage3, (char)montage7);

          fprintf(fichierjo,  "%c%c",    (char) montage4, (char)montage8);


      for(int i = macombiendezonememoire; i > 0; i--)
       {


          fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront[0]);

          fprintf(fichierjo,  "%c%c",    (char)montage1, (char)montage5);

          fprintf(fichierjo,  "%c%c",    (char) montage2, (char)montage6);

          fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront[1]);

          fprintf(fichierjo,  "%c%c",    (char)montage3, (char)montage7);

          fprintf(fichierjo,  "%c%c",    (char) montage4, (char)montage8);

       }
     }




// fin  multiplie
   }
 
  fclose(fichierjo);

}

// fin de la zone de travail de l'apprenant
