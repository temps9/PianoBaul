#include "AdnForme.h"
// Génère les fichiers c.jo et c.joa
void genereFichierJo(char c)
{

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

int dureebase[4];
      for(int i=0; i<6; i++)
       {dureebase[i] = joc.dureefront[i];}

  for(int duree = joc.duree; duree>0; duree--)
   {


    // monte laforceh
    for(int laforcehbase = joc.laforceh; laforcehbase > 0; laforcehbase--)
     {
      for(int i=0; i<6; i++)
       {
        if(i%2)
         joc.amplitude[i] -= joc.changeamplitude[i];
        else
         joc.amplitude[i] += joc.changeamplitude[i];

//        if(i%2)
//        joc.dureefront[i] -= joc.changedureefront[i];

        if(joc.dureefront[i] < 6)
         joc.dureefront[i] = 6;
        if(joc.amplitude[i] < 6)
         joc.amplitude[i] = 6;
        if(joc.amplitude[i] > 240)
         joc.amplitude[i] = 240;
          fprintf(fichierjo,  "%c%c",    (char)joc.amplitude[i], (char)joc.dureefront[i]);
          fprintf(fichierjoa, "%d %d\n", (unsigned char)joc.amplitude[i], (unsigned char)joc.dureefront[i]);

       }



     }



    int variforce = joc.dureefront[0];
    int variforce1 = joc.dureefront[2];
    int variforce2 = joc.dureefront[4];
	joc.dureefront[0] = joc.dureefront[1];
	joc.dureefront[2] = joc.dureefront[3];
	joc.dureefront[4] = joc.dureefront[5];
	joc.dureefront[1] = variforce;
	joc.dureefront[3] = variforce1;
	joc.dureefront[5] = variforce2;


//tremolo

    // monte laforceh
    for(int laforcehbase = joc.forceplus; laforcehbase > 0; laforcehbase--)
     {//2


   for(int laforcebbase = joc.laforceb; laforcebbase > 0; laforcebbase--)
     {//2


      for(int i=0; i<6; i++)
       {//3

        if(i%2)
         joc.amplitude[i] += joc.changeamplitude[i];
        else
         joc.amplitude[i] -= joc.changeamplitude[i];

       if(i%2)
        joc.dureefront[i] += joc.changedureefront[i];
        else
         joc.dureefront[i] -= joc.changedureefront[i];

          fprintf(fichierjo,  "%c%c",    (char)joc.amplitude[i], (char)joc.dureefront[i]);
          fprintf(fichierjoa, "%d %d\n", (unsigned char)joc.amplitude[i], (unsigned char)joc.dureefront[i]);

       }//3
    	variforce = joc.dureefront[0];
    	variforce1 = joc.dureefront[2];
    	variforce2 = joc.dureefront[4];
	joc.dureefront[0] = joc.dureefront[1];
	joc.dureefront[2] = joc.dureefront[3];
	joc.dureefront[4] = joc.dureefront[5];
	joc.dureefront[1] = variforce;
	joc.dureefront[3] = variforce1;
	joc.dureefront[5] = variforce2;

       }//2

   for(int laforcebbase = joc.laforceb; laforcebbase > 0; laforcebbase--)
     {


      for(int i=0; i<6; i++)
       {
        if(i%2)
         joc.amplitude[i] -= joc.changeamplitude[i];
        else
         joc.amplitude[i] += joc.changeamplitude[i];

       if(i%2)
        joc.dureefront[i] -= joc.changedureefront[i];
        else
         joc.dureefront[i] += joc.changedureefront[i];

          fprintf(fichierjo,  "%c%c",    (char)joc.amplitude[i], (char)joc.dureefront[i]);
          fprintf(fichierjoa, "%d %d\n", (unsigned char)joc.amplitude[i], (unsigned char)joc.dureefront[i]);

       }

    	variforce = joc.dureefront[0];
    	variforce1 = joc.dureefront[2];
    	variforce2 = joc.dureefront[4];
	joc.dureefront[0] = joc.dureefront[1];
	joc.dureefront[2] = joc.dureefront[3];
	joc.dureefront[4] = joc.dureefront[5];
	joc.dureefront[1] = variforce;
	joc.dureefront[3] = variforce1;
	joc.dureefront[5] = variforce2;
       }
       }//fin de zone tremolo





    // Descente laforceh
    for(int laforcehbase = joc.laforceh; laforcehbase > 0; laforcehbase--)
     {


      for(int i=0; i<6; i++)
       {

        if(i%2)
         joc.amplitude[i] += joc.changeamplitude[i];
        else
         joc.amplitude[i] -= joc.changeamplitude[i];



          fprintf(fichierjo,  "%c%c",    (char)joc.amplitude[i], (char)joc.dureefront[i]);
          fprintf(fichierjoa, "%d %d\n", (unsigned char)joc.amplitude[i], (unsigned char)joc.dureefront[i]);





      for(int i=0; i<6; i++)
       {joc.dureefront[i] = dureebase[i] - joc.changedureefront[i]; }

     }


   }
    // Écriture des zones mémoires
    for(int zonememoire = joc.combiendezonememoire; zonememoire > 0 ; zonememoire--)
     {
      fprintf(fichierjo,  "%c%c", 130, 250);
      fprintf(fichierjoa, "%d %d\n", 130, 250);
      fprintf(fichierjo,  "%c%c", 128, 250);
      fprintf(fichierjoa, "%d %d\n", 128, 250);
     }
  fclose(fichierjo);
  fclose(fichierjoa);
}
// fin de la zone de travail de l'apprenant
