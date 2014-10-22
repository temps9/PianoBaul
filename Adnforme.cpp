#include "AdnForme.h"
// Génère les fichiers c.jo et c.joa
void genereFichierJo(char c)
{

jo joc = mesjo[c-'a'];
  /*
  printf("duree=%d, laforceb=%d, laforceh=%d, amplitude={%d, %d, %d, %d},\n",
        joc.duree, joc.laforceb, joc.laforceh,
        joc.amplitude[0], joc.amplitude[1], joc.amplitude[2], joc.amplitude[3]);
  printf("dureefront={%d, %d, %d, %d}, changeamplitude={%d, %d, %d, %d},\n",
        joc.dureefront[0], joc.dureefront[1], joc.dureefront[2], joc.dureefront[3],
        joc.changeamplitude[0], joc.changeamplitude[1], joc.changeamplitude[2], joc.changeamplitude[3]);
  printf("changedureefront={%d, %d, %d, %d}, combiendezonememoire=%d\n\n",
        joc.changedureefront[0], joc.changedureefront[1], joc.changedureefront[2], joc.changedureefront[3],
        joc.combiendezonememoire);
  exit(0);
  */
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

  for(int duree = joc.duree; duree>0; duree--)
   {

    for(int laforcebbase = joc.laforceb; laforcebbase > 0; laforcebbase--)
     {
      for(int i=0; i<4; i++)
       {
        fprintf(fichierjo,  "%c%c",    (char)joc.amplitude[i], (char)joc.dureefront[i]);
        fprintf(fichierjoa, "%d %d\n", (unsigned char)joc.amplitude[i], (unsigned char)joc.dureefront[i]);
       }
     }

    int variforce = joc.laforceb;

    // Descente laforceb
    for(int laforcehbase = joc.laforceh; laforcehbase > 0; laforcehbase--)
     {
      for(int i=0; i<4; i++)
       {
        if(i%2)
         joc.amplitude[i] -= joc.changeamplitude[i];
        else
         joc.amplitude[i] += joc.changeamplitude[i];

        joc.dureefront[i] += joc.changedureefront[i];
       }

      for(int laforcebbase = variforce; laforcebbase > 0; laforcebbase--)
       {
        for(int i=0; i<4; i++)
         {
          fprintf(fichierjo,  "%c%c",    (char)joc.amplitude[i], (char)joc.dureefront[i]);
          fprintf(fichierjoa, "%d %d\n", (unsigned char)joc.amplitude[i], (unsigned char)joc.dureefront[i]);
         }
       }
      variforce++;
     }

    // Descente laforceh
    for(int laforcehbase = joc.laforceh; laforcehbase > 0; laforcehbase--)
     {
      for(int i=0; i<4; i++)
       {
        if(i%2)
         joc.amplitude[i] += joc.changeamplitude[i];
        else
         joc.amplitude[i] -= joc.changeamplitude[i];

        joc.dureefront[i] -= joc.changedureefront[i];
       }
      for(int laforcebbase = variforce; laforcebbase > 0; laforcebbase--)
       {
        for(int i=0; i<4; i++)
         {
          fprintf(fichierjo,  "%c%c",    (char)joc.amplitude[i], (char)joc.dureefront[i]);
          fprintf(fichierjoa, "%d %d\n", (unsigned char)joc.amplitude[i], (unsigned char)joc.dureefront[i]);
         }
       }
      variforce--;
     }

    // Écriture des zones mémoires
    for(int zonememoire = joc.combiendezonememoire; zonememoire > 0 ; zonememoire--)
     {
      fprintf(fichierjo,  "%c%c", 130, 250);
      fprintf(fichierjoa, "%d %d\n", 130, 250);
      fprintf(fichierjo,  "%c%c", 128, 250);
      fprintf(fichierjoa, "%d %d\n", 128, 250);
     }
   }
  fclose(fichierjo);
  fclose(fichierjoa);
}

// fin de la zone de travail de l'apprenant


/***************début**********piano2************************************************/

void genereFichierJo1(char c)
{

jo joc = mesjo[c-'a'];
  /*
  printf("duree=%d, laforceb=%d, laforceh=%d, amplitude={%d, %d, %d, %d},\n",
        joc.duree, joc.laforceb, joc.laforceh,
        joc.amplitude[0], joc.amplitude[1], joc.amplitude[2], joc.amplitude[3]);
  printf("dureefront={%d, %d, %d, %d}, changeamplitude={%d, %d, %d, %d},\n",
        joc.dureefront[0], joc.dureefront[1], joc.dureefront[2], joc.dureefront[3],
        joc.changeamplitude[0], joc.changeamplitude[1], joc.changeamplitude[2], joc.changeamplitude[3]);
  printf("changedureefront={%d, %d, %d, %d}, combiendezonememoire=%d\n\n",
        joc.changedureefront[0], joc.changedureefront[1], joc.changedureefront[2], joc.changedureefront[3],
        joc.combiendezonememoire);
  exit(0);
  */
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
// ici commence la zone de travail pour l'apprenant
//Nous allons utiliser les boucles du for en langage c pour produire les différents sons.
//Imaginer un gaulois qui marche, il va rencontrer plusieurs paysages prédéterminés.
//pour les sons, il en est de même, nous allons rencontrer plusieurs plateaux en équilibre 
//selon le chemin emprunté et les valeurs placées dans les plateaux d'équilibre.
//pianobaul est un chemin monotone de deux fronts qui augmente l'amplitude, puis la diminue.

//Nous indiquons ici combien de fois nous allons augmenter l'amplitude
    for(int laforcehbase = joc.laforceh; laforcehbase > 0; laforcehbase--)
     {
      for(int i=0; i<2; i++)
       {
//ici nous appliquons le changement de la valeur d'amplitude du front tous les 2 fronts
        if(i%2)
         joc.amplitude[i] -= joc.changeamplitude[i];
        else
         joc.amplitude[i] += joc.changeamplitude[i];

//nous diminuons la durée des fronts
         joc.dureefront[i] -= joc.changedureefront[i];
// création d'une décurité afin que la durée ne soit jamais inférieure à 6
	if (joc.dureefront[i]<6)
	joc.dureefront[i] = 6;

//les 2 lignes suivantes écrivent les fichiers audio, le premier en binaire, l'autre en ascii
          fprintf(fichierjo,  "%c%c",    (char)joc.amplitude[i], (char)joc.dureefront[i]);
          fprintf(fichierjoa, "%d %d\n", (unsigned char)joc.amplitude[i], (unsigned char)joc.dureefront[i]);
       }
     }

    // la nous reprenons la premiere forme en changeant le sens pour revenir aux valeurs de départ

    for(int laforcehbase = joc.laforceh; laforcehbase > 0; laforcehbase--)
     {
      for(int i=0; i<2; i++)
       {
//ici nous appliquons le changement de la valeur d'amplitude du front tous les 2 fronts
        if(i%2)
         joc.amplitude[i] += joc.changeamplitude[i];
        else
         joc.amplitude[i] -= joc.changeamplitude[i];

         joc.dureefront[i] += joc.changedureefront[i];
// création d'une décurité afin que la durée ne soit jamais supérieur à 240
	if (joc.dureefront[i]>240)
	joc.dureefront[i] = 240;

//les 2 lignes suivantes écrivent les fichiers audio, le premier en binaire, l'autre en ascii
          fprintf(fichierjo,  "%c%c",    (char)joc.amplitude[i], (char)joc.dureefront[i]);
          fprintf(fichierjoa, "%d %d\n", (unsigned char)joc.amplitude[i], (unsigned char)joc.dureefront[i]);
       }
     }

// fin de la zone de travail de l'apprenant
/************************************************************************/
 
  
 
  fclose(fichierjo);
  fclose(fichierjoa);
}
