#include "AdnForme41.h"

// Génère les fichiers c.jo et c.joa
void genereFichierJo41(int piste,int quelpiano2,int quelpiano3,int quelpiano4,int quelpiano5,int quelpiano6,int quelpiano7,int quelpiano8,int quelpiano9,int quelpiano10,int quelpiano11,int quelpiano12,int quelpiano13,int quelpiano14,int quelpiano15)
{

    int mesamplifront[22]; //son du n, la référence
    int mesdurerfront; //son du n, la référence
    int madurer; //son du n, la référence
    int maforceh;
    int maforceplus;



if(quelpiano2<120)
   {
    mesamplifront[0] = 128 + quelpiano2;
    mesamplifront[1] = 128 - quelpiano2;
   }
else   
   {
    mesamplifront[0] = quelpiano2;
    mesamplifront[1] = quelpiano2 - 6;
   }
   
if(quelpiano3<120)
   {
    mesamplifront[2] = 128 + quelpiano3;
    mesamplifront[3] = 128 - quelpiano3;
   }
else   
   {
    mesamplifront[2] = quelpiano3;
    mesamplifront[3] = quelpiano3 - 6;
   }
   
if(quelpiano4<120)
   {
    mesamplifront[4] = 128 + quelpiano4;
    mesamplifront[5] = 128 - quelpiano4;
   }
else   
   {
    mesamplifront[4] = quelpiano4;
    mesamplifront[5] = quelpiano4 - 6;
   }
   
if(quelpiano5<120)
   {
    mesamplifront[6] = 128 + quelpiano5;
    mesamplifront[7] = 128 - quelpiano5;
   }
else   
   {
    mesamplifront[6] = quelpiano5;
    mesamplifront[7] = quelpiano5 - 6;
   }

if(quelpiano6<120)
   {
    mesamplifront[8] = 128 + quelpiano6;
    mesamplifront[9] = 128 - quelpiano6;
   }
else   
   {
    mesamplifront[8] = quelpiano6;
    mesamplifront[9] = quelpiano6 - 6;
   }
   
if(quelpiano7<120)
   {
    mesamplifront[10] = 128 + quelpiano7;
    mesamplifront[11] = 128 - quelpiano7;
   }
else   
   {
    mesamplifront[10] = quelpiano7;
    mesamplifront[11] = quelpiano7 - 6;
   }
   
if(quelpiano8<120)
   {
    mesamplifront[12] = 128 + quelpiano8;
    mesamplifront[13] = 128 - quelpiano8;
   }
else   
   {
    mesamplifront[12] = quelpiano8;
    mesamplifront[13] = quelpiano8 - 6;
   }
   
if(quelpiano9<120)
   {
    mesamplifront[14] = 128 + quelpiano9;
    mesamplifront[15] = 128 - quelpiano9;
   }
else   
   {
    mesamplifront[14] = quelpiano9;
    mesamplifront[15] = quelpiano9 - 6;
   }
/****/
if(quelpiano10<120)
   {
    mesamplifront[16] = 128 + quelpiano10;
    mesamplifront[17] = 128 - quelpiano10;
   }
else   
   {
    mesamplifront[16] = quelpiano10;
    mesamplifront[17] = quelpiano10 - 6;
   }
   
if(quelpiano11<120)
   {
    mesamplifront[18] = 128 + quelpiano11;
    mesamplifront[19] = 128 - quelpiano11;
   }
else   
   {
    mesamplifront[18] = quelpiano11;
    mesamplifront[19] = quelpiano11 - 6;
   }
   
if(quelpiano12<120)
   {
    mesamplifront[20] = 128 + quelpiano12;
    mesamplifront[21] = 128 - quelpiano12;
   }
else   
   {
    mesamplifront[20] = quelpiano12;
    mesamplifront[21] = quelpiano12 - 6;
   }

mesdurerfront = quelpiano13;
maforceplus = quelpiano14;
maforceh = quelpiano15;

  // Nom du fichier jo
  char nomfichierjo[32];
  snprintf(nomfichierjo, 32, "%d.jo", piste);
  // Fichier jo
  FILE* fichierjo;
  if (!(fichierjo = fopen(nomfichierjo, "ab")))
   {
    exit(-1);
   }
// ici commence la zone de travail pour l'apprenant


// multiplie


    for(int laforcebbase = maforceh; laforcebbase > 0; laforcebbase--)
     {

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront);       
       
           for(int laforcebbaseb = maforceplus; laforcebbaseb > 0; laforcebbaseb--)
     {


        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[0], (char)mesdurerfront);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[1], (char)mesdurerfront);   

	}
/*********/
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[2], (char)mesdurerfront);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[3], (char)mesdurerfront);       
       
           for(int laforcebbaseb = maforceplus; laforcebbaseb > 0; laforcebbaseb--)
     {

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[2], (char)mesdurerfront);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[3], (char)mesdurerfront);   

	}
 /*********/
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[4], (char)mesdurerfront);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[5], (char)mesdurerfront);       
       
           for(int laforcebbaseb = maforceplus; laforcebbaseb > 0; laforcebbaseb--)
     {

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[4], (char)mesdurerfront);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[5], (char)mesdurerfront);   

	}
/*********/
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[6], (char)mesdurerfront);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[7], (char)mesdurerfront);       
       
           for(int laforcebbaseb = maforceplus; laforcebbaseb > 0; laforcebbaseb--)
     {

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[6], (char)mesdurerfront);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[7], (char)mesdurerfront);   

	}
          
/*********/
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[8], (char)mesdurerfront);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[9], (char)mesdurerfront);       
       
           for(int laforcebbaseb = maforceplus; laforcebbaseb > 0; laforcebbaseb--)
     {

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[8], (char)mesdurerfront);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[9], (char)mesdurerfront);   

	}
/*********/
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[10], (char)mesdurerfront);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[11], (char)mesdurerfront);       
       
           for(int laforcebbaseb = maforceplus; laforcebbaseb > 0; laforcebbaseb--)
     {

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[10], (char)mesdurerfront);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[11], (char)mesdurerfront);   

	}
    
/*********/
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[12], (char)mesdurerfront);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[13], (char)mesdurerfront);       
       
           for(int laforcebbaseb = maforceplus; laforcebbaseb > 0; laforcebbaseb--)
     {

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[12], (char)mesdurerfront);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[13], (char)mesdurerfront);   

	}
/*********/
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[14], (char)mesdurerfront);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[15], (char)mesdurerfront);       
       
           for(int laforcebbaseb = maforceplus; laforcebbaseb > 0; laforcebbaseb--)
     {

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[14], (char)mesdurerfront);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[15], (char)mesdurerfront);   

	}
    
/*********/
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[16], (char)mesdurerfront);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[17], (char)mesdurerfront);       
       
           for(int laforcebbaseb = maforceplus; laforcebbaseb > 0; laforcebbaseb--)
     {

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[16], (char)mesdurerfront);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[17], (char)mesdurerfront);   

	}
 /*********/
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[18], (char)mesdurerfront);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[19], (char)mesdurerfront);       
       
           for(int laforcebbaseb = maforceplus; laforcebbaseb > 0; laforcebbaseb--)
     {

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[18], (char)mesdurerfront);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[19], (char)mesdurerfront);   

	}
/*********/
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[20], (char)mesdurerfront);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[21], (char)mesdurerfront);       
       
           for(int laforcebbaseb = maforceplus; laforcebbaseb > 0; laforcebbaseb--)
     {

        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[20], (char)mesdurerfront);
        fprintf(fichierjo,  "%c%c",    (char)mesamplifront[21], (char)mesdurerfront);   

	}
     
// fin  multiplie
   }
 
  fclose(fichierjo);

}

// fin de la zone de travail de l'apprenant
