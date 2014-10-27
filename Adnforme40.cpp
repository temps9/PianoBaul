#include "AdnForme40.h"
// Génère les fichiers c.jo et c.joa
void genereFichierJo40(char c)
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
/******************************fin*partie*fixe************/
// ici commence la zone de travail pour l'apprenant
//Nous allons utiliser les boucles du for en langage c pour produire les différents sons.
//Imaginer un gaulois qui marche, il va rencontrer plusieurs paysages prédéterminés.
//pour les sons, il en est de même, nous allons rencontrer plusieurs plateaux en équilibre 
//selon le chemin emprunté et les valeurs placées dans les plateaux d'équilibre.
//lmfab104 est un chemin de huit fronts qui augmente l'amplitude, fait un plateau modulo 5, puis diminue l'amplitude.


// Etape 1
//Nous indiquons ici combien de fois nous allons augmenter l'amplitude
    for(int laforcehbase = joc.laforceh; laforcehbase > 0; laforcehbase--)
     {
      for(int i=0; i<8; i++)
       {
//ici nous appliquons le changement de la valeur d'amplitude du front tous les 8 fronts
        if(i%2)
         joc.amplitude[i] -= joc.changeamplitude[i];
        else
         joc.amplitude[i] += joc.changeamplitude[i];

//les 2 lignes suivantes écrivent les fichiers audio, le premier en binaire, l'autre en ascii
          fprintf(fichierjo,  "%c%c",    (char)joc.amplitude[i], (char)joc.dureefront[i]);
          fprintf(fichierjoa, "%d %d\n", (unsigned char)joc.amplitude[i], (unsigned char)joc.dureefront[i]);
       }
     }

// Etape 2

// la nous créons un plateau de 8 front sans variation d'amplitude


int basculeDe1 = joc.tremolo * 8;
int basculeDe2 = basculeDe1 - 1;
int basculeDe3 = basculeDe1 * 2 - 1;
int basculeDe5 = 0;

    for(int laforcehbase = joc.laforceb; laforcehbase > 0; laforcehbase--)
     {



      for(int i=0; i<8; i++)
       {

//nous créons ici un trémolo de tremolo, comme c-est sur 8 fronts une bascule à tremolo*8 
//avec une vinaigrette l'amplitude et la durée varient à l'inverse
if(basculeDe5<basculeDe1)
{
joc.dureefront[i] += joc.changedureefront[i];
joc.amplitude[i] -= joc.changeamplitude[i];
}

if(basculeDe5>basculeDe2)
{
joc.dureefront[i] -= joc.changedureefront[i];
joc.amplitude[i] += joc.changeamplitude[i];
}
basculeDe5++;
if(basculeDe5>basculeDe3)
basculeDe5 = 0;


//les 2 lignes suivantes écrivent les fichiers audio, le premier en binaire, l'autre en ascii
          fprintf(fichierjo,  "%c%c",    (char)joc.amplitude[i], (char)joc.dureefront[i]);
          fprintf(fichierjoa, "%d %d\n", (unsigned char)joc.amplitude[i], (unsigned char)joc.dureefront[i]);
       }
     }

// Etape 3

    // la nous reprenons la premiere forme en changeant le sens pour revenir aux valeurs de départ

    for(int laforcehbase = joc.laforceh; laforcehbase > 0; laforcehbase--)
     {
      for(int i=0; i<8; i++)
       {
//ici nous appliquons le changement de la valeur d'amplitude du front tous les 8 fronts
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
