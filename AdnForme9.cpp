#include "AdnForme9.h"

// Génère les fichiers c.jo et c.joa
void genereFichierJo9(char c)
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

//mesvarampli[0] = ((joc.lagame * mesvarampli[0]) * 0.01);
//mesvarampli[1] = ((joc.lagame * mesvarampli[1]) * 0.01);
mesdurerfront[0] = ((joc.lagame * mesdurerfront[0]) * 0.01);
mesdurerfront[1] = ((joc.lagame * mesdurerfront[1]) * 0.01);

int pentea = montremolo + 1;

if(pentea >20)
pentea = 20;

int variationdegame1 = pentea * ( 6 - (joc.lagame * 0.01)) ;


// multiplie
  for(int duree = madurer; duree>0; duree--)
   {

//monte


switch (macombiendezonememoire) {

case 1 :

    for(int laforcebbase = variationdegame1; laforcebbase > 0; laforcebbase--)
     {
      for(int i=0; i<2; i++)
       {
        if(i%2)
         mesamplifront[i] -= mesvarampli[i];
        else
         mesamplifront[i] += mesvarampli[i];

        if(i%2)
         mesdurerfront[i] -= mesvardurer[i];
        else
         mesdurerfront[i] += mesvardurer[i];
	
	 // respect des limites
	if(mesamplifront[i]>239)
	mesamplifront[i] = 239;

	if(mesamplifront[i]<16)
	mesamplifront[i] = 16;	

	if(mesdurerfront[i]>239)
	mesdurerfront[i] = 239;

	if(mesdurerfront[i]<6)
	mesdurerfront[i] = 6;	

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront[0]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesamplifront[0], (unsigned char)mesdurerfront[0]);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront[1]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesamplifront[1], (unsigned char)mesdurerfront[1]);

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront[1]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesamplifront[0], (unsigned char)mesdurerfront[1]);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront[0]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesamplifront[1], (unsigned char)mesdurerfront[0]);

// ajout de force, il faut faire attention aux portes car avec trop de force nous changeons 
// les états d'équilibres, donc nous changeons de son

    for(int laforcebbaseb = maforceplus; laforcebbaseb > 0; laforcebbaseb--)
      {




        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront[0]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesamplifront[0], (unsigned char)mesdurerfront[0]);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront[1]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesamplifront[1], (unsigned char)mesdurerfront[1]);

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront[1]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesamplifront[0], (unsigned char)mesdurerfront[1]);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront[0]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesamplifront[1], (unsigned char)mesdurerfront[0]);


       }

       }

       }

 break;

case 2 :

    for(int laforcebbase = variationdegame1; laforcebbase > 0; laforcebbase--)
     {
      for(int i=0; i<2; i++)
       {
        if(i%2)
         mesamplifront[i] -= mesvarampli[i];
        else
         mesamplifront[i] += mesvarampli[i];

        if(i%2)
         mesdurerfront[i] -= mesvardurer[i];
        else
         mesdurerfront[i] += mesvardurer[i];
	
	 // respect des limites
	if(mesamplifront[i]>239)
	mesamplifront[i] = 239;

	if(mesamplifront[i]<16)
	mesamplifront[i] = 16;	

	if(mesdurerfront[i]>239)
	mesdurerfront[i] = 239;

	if(mesdurerfront[i]<6)
	mesdurerfront[i] = 6;	

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront[0]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesamplifront[0], (unsigned char)mesdurerfront[0]);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront[1]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesamplifront[1], (unsigned char)mesdurerfront[1]);

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront[1]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesamplifront[0], (unsigned char)mesdurerfront[1]);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront[0]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesamplifront[1], (unsigned char)mesdurerfront[0]);

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront[0]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesamplifront[0], (unsigned char)mesdurerfront[0]);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront[1]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesamplifront[1], (unsigned char)mesdurerfront[1]);
// ajout de force, il faut faire attention aux portes car avec trop de force nous changeons 
// les états d'équilibres, donc nous changeons de son

    for(int laforcebbaseb = maforceplus; laforcebbaseb > 0; laforcebbaseb--)
      {




        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront[0]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesamplifront[0], (unsigned char)mesdurerfront[0]);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront[1]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesamplifront[1], (unsigned char)mesdurerfront[1]);

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront[1]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesamplifront[0], (unsigned char)mesdurerfront[1]);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront[0]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesamplifront[1], (unsigned char)mesdurerfront[0]);


        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront[0]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesamplifront[0], (unsigned char)mesdurerfront[0]);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront[1]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesamplifront[1], (unsigned char)mesdurerfront[1]);
       }

       }

       }

 break;

case 4 :
    for(int laforcebbase = variationdegame1; laforcebbase > 0; laforcebbase--)
     {
      for(int i=0; i<2; i++)
       {

        if(i%2)
         mesamplifront[i] -= mesvarampli[i];
        else
         mesamplifront[i] += mesvarampli[i];

        if(i%2)
         mesdurerfront[i] -= mesvardurer[i];
        else
         mesdurerfront[i] += mesvardurer[i];
	
	 // respect des limites
	if(mesamplifront[i]>239)
	mesamplifront[i] = 239;

	if(mesamplifront[i]<16)
	mesamplifront[i] = 16;	

	if(mesdurerfront[i]>239)
	mesdurerfront[i] = 239;

	if(mesdurerfront[i]<6)
	mesdurerfront[i] = 6;	

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront[0]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesamplifront[0], (unsigned char)mesdurerfront[0]);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront[1]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesamplifront[1], (unsigned char)mesdurerfront[1]);

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront[1]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesamplifront[0], (unsigned char)mesdurerfront[1]);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront[0]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesamplifront[1], (unsigned char)mesdurerfront[0]);

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront[0]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesamplifront[0], (unsigned char)mesdurerfront[0]);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront[1]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesamplifront[1], (unsigned char)mesdurerfront[1]);

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront[0]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesamplifront[0], (unsigned char)mesdurerfront[0]);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront[1]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesamplifront[1], (unsigned char)mesdurerfront[1]);
// ajout de force, il faut faire attention aux portes car avec trop de force nous changeons 
// les états d'équilibres, donc nous changeons de son

    for(int laforcebbaseb = maforceplus; laforcebbaseb > 0; laforcebbaseb--)
      {




        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront[0]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesamplifront[0], (unsigned char)mesdurerfront[0]);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront[1]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesamplifront[1], (unsigned char)mesdurerfront[1]);

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront[1]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesamplifront[0], (unsigned char)mesdurerfront[1]);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront[0]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesamplifront[1], (unsigned char)mesdurerfront[0]);


        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront[0]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesamplifront[0], (unsigned char)mesdurerfront[0]);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront[1]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesamplifront[1], (unsigned char)mesdurerfront[1]);

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront[0]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesamplifront[0], (unsigned char)mesdurerfront[0]);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront[1]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesamplifront[1], (unsigned char)mesdurerfront[1]);
       }

       }

       }

 break;

case 5 :
    for(int laforcebbase = variationdegame1; laforcebbase > 0; laforcebbase--)
     {
      for(int i=0; i<2; i++)
       {
        if(i%2)
         mesamplifront[i] -= mesvarampli[i];
        else
         mesamplifront[i] += mesvarampli[i];

        if(i%2)
         mesdurerfront[i] -= mesvardurer[i];
        else
         mesdurerfront[i] += mesvardurer[i];
	
	 // respect des limites
	if(mesamplifront[i]>239)
	mesamplifront[i] = 239;

	if(mesamplifront[i]<16)
	mesamplifront[i] = 16;	

	if(mesdurerfront[i]>239)
	mesdurerfront[i] = 239;

	if(mesdurerfront[i]<6)
	mesdurerfront[i] = 6;	

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront[0]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesamplifront[0], (unsigned char)mesdurerfront[0]);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront[1]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesamplifront[1], (unsigned char)mesdurerfront[1]);

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront[1]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesamplifront[0], (unsigned char)mesdurerfront[1]);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront[0]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesamplifront[1], (unsigned char)mesdurerfront[0]);

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront[0]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesamplifront[0], (unsigned char)mesdurerfront[0]);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront[1]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesamplifront[1], (unsigned char)mesdurerfront[1]);

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront[0]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesamplifront[0], (unsigned char)mesdurerfront[0]);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront[1]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesamplifront[1], (unsigned char)mesdurerfront[1]);

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront[0]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesamplifront[0], (unsigned char)mesdurerfront[0]);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront[1]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesamplifront[1], (unsigned char)mesdurerfront[1]);
// ajout de force, il faut faire attention aux portes car avec trop de force nous changeons 
// les états d'équilibres, donc nous changeons de son

    for(int laforcebbaseb = maforceplus; laforcebbaseb > 0; laforcebbaseb--)
      {



        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront[0]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesamplifront[0], (unsigned char)mesdurerfront[0]);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront[1]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesamplifront[1], (unsigned char)mesdurerfront[1]);

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront[1]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesamplifront[0], (unsigned char)mesdurerfront[1]);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront[0]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesamplifront[1], (unsigned char)mesdurerfront[0]);


        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront[0]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesamplifront[0], (unsigned char)mesdurerfront[0]);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront[1]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesamplifront[1], (unsigned char)mesdurerfront[1]);

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront[0]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesamplifront[0], (unsigned char)mesdurerfront[0]);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront[1]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesamplifront[1], (unsigned char)mesdurerfront[1]);

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront[0]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesamplifront[0], (unsigned char)mesdurerfront[0]);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront[1]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesamplifront[1], (unsigned char)mesdurerfront[1]);
       }

       }

       }

 break;

default: 


    for(int laforcebbase = variationdegame1; laforcebbase > 0; laforcebbase--)
     {
      for(int i=0; i<2; i++)
       {
        if(i%2)
         mesamplifront[i] -= mesvarampli[i];
        else
         mesamplifront[i] += mesvarampli[i];
	
	 // respect des limites
	if(mesamplifront[i]>239)
	mesamplifront[i] = 239;

	if(mesamplifront[i]<16)
	mesamplifront[i] = 16;	

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront[0]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesamplifront[0], (unsigned char)mesdurerfront[0]);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront[1]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesamplifront[1], (unsigned char)mesdurerfront[1]);

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront[1]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesamplifront[0], (unsigned char)mesdurerfront[1]);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront[0]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesamplifront[1], (unsigned char)mesdurerfront[0]);

// ajout de force, il faut faire attention aux portes car avec trop de force nous changeons 
// les états d'équilibres, donc nous changeons de son

    for(int laforcebbaseb = maforceplus; laforcebbaseb > 0; laforcebbaseb--)
      {




        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront[0]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesamplifront[0], (unsigned char)mesdurerfront[0]);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront[1]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesamplifront[1], (unsigned char)mesdurerfront[1]);

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront[1]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesamplifront[0], (unsigned char)mesdurerfront[1]);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront[0]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesamplifront[1], (unsigned char)mesdurerfront[0]);


       }

       }

       }

}



//plateau


    for(int laforcebbase = maforceh; laforcebbase > 0; laforcebbase--)
     {

           for(int laforcebbaseb = maforceb; laforcebbase > 0; laforcebbase--)
        {

	 mesdurerfront[0] += mesvardurer[0];
         mesdurerfront[0] += mesvardurer[1];
	 // respect des limites
	if(mesdurerfront[0]>239)
	mesdurerfront[0] = 239;



	if(mesdurerfront[1]>239)
	mesdurerfront[1] = 239;



        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront[0]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesamplifront[0], (unsigned char)mesdurerfront[0]);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront[1]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesamplifront[1], (unsigned char)mesdurerfront[1]);

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront[1]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesamplifront[0], (unsigned char)mesdurerfront[1]);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront[0]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesamplifront[1], (unsigned char)mesdurerfront[0]);
	}

           for(int laforcebbaseb = maforceb; laforcebbase > 0; laforcebbase--)
        {

	 mesdurerfront[0] -= mesvardurer[0];
         mesdurerfront[0] -= mesvardurer[1];
	 // respect des limites


	if(mesdurerfront[0]<16)
	mesdurerfront[0] = 16;	


	if(mesdurerfront[1]<16)
	mesdurerfront[1] = 16;	

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront[0]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesamplifront[0], (unsigned char)mesdurerfront[0]);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront[1]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesamplifront[1], (unsigned char)mesdurerfront[1]);

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront[1]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesamplifront[0], (unsigned char)mesdurerfront[1]);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront[0]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesamplifront[1], (unsigned char)mesdurerfront[0]);
	}

     }



//descend 
// il faut faire attention selon monté, descente, ou plateau ce sont des équilibres différents donc des sons différents

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

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront[0]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesamplifront[0], (unsigned char)mesdurerfront[0]);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront[1]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesamplifront[1], (unsigned char)mesdurerfront[1]);
/*
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront[1]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesamplifront[0], (unsigned char)mesdurerfront[1]);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront[0]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)mesamplifront[1], (unsigned char)mesdurerfront[0]);
*/
       }
     }




// fin  multiplie
   }
 
  fclose(fichierjo);
  fclose(fichierjoa);
}

// fin de la zone de travail de l'apprenant
