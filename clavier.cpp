#include "clavier.h"


int quelpiano = 1;

clavier::clavier ():QWidget ()
{

  sm = new QSignalMapper(this);
  QDesktopWidget position;
  QRect calcul_position = position.screenGeometry ();

  setWindowState ((windowState () &
          ~(Qt::WindowMinimized | Qt::
            WindowFullScreen)) | Qt::WindowMaximized);

  /**choix*instrument***/
  aa_bouton = new QPushButton ("ON OFF", this);
  aa_bouton->setFont (QFont ("Comic Sans MS", 10));
  aa_bouton->setGeometry (200 * calcul_position.width () / 400,
        600 * calcul_position.height () / 700,
        20 * calcul_position.width () / 400,
        50 * calcul_position.height () / 700);
 
 
 piano2 = new QSpinBox(this);
 piano2->setGeometry (220 * calcul_position.width () / 400,
        600 * calcul_position.height () / 700,
        20 * calcul_position.width () / 400,
        50 * calcul_position.height () / 700);
piano2->setMaximum(255);
QString nombre2=QString::number(piano2->value());
QObject::connect (piano2, SIGNAL(valueChanged(int)), this, SLOT (fonctionpiano1 (int)));
 
       
 piano3 = new QSpinBox(this);
 piano3->setGeometry (240 * calcul_position.width () / 400,
        600 * calcul_position.height () / 700,
        20 * calcul_position.width () / 400,
        50 * calcul_position.height () / 700); 
piano3->setMaximum(255);
QString nombre3=QString::number(piano3->value());
QObject::connect (piano3, SIGNAL(valueChanged(int)), this, SLOT (fonctionpiano2 (int))); 
        
       
 piano4 = new QSpinBox(this);
 piano4->setGeometry (260 * calcul_position.width () / 400,
        600 * calcul_position.height () / 700,
        20 * calcul_position.width () / 400,
        50 * calcul_position.height () / 700);  
piano4->setMaximum(255);
QString nombre4=QString::number(piano4->value());
QObject::connect (piano4, SIGNAL(valueChanged(int)), this, SLOT (fonctionpiano1 (int)));        
        
       
 piano5 = new QSpinBox(this);
 piano5->setGeometry (300 * calcul_position.width () / 400,
        600 * calcul_position.height () / 700,
        20 * calcul_position.width () / 400,
        50 * calcul_position.height () / 700);
piano5->setMaximum(255);
QString nombre5=QString::number(piano5->value());
QObject::connect (piano5, SIGNAL(valueChanged(int)), this, SLOT (fonctionpiano1 (int)));

 piano6 = new QSpinBox(this);
 piano6->setGeometry (300 * calcul_position.width () / 400,
        600 * calcul_position.height () / 700,
        20 * calcul_position.width () / 400,
        50 * calcul_position.height () / 700);
piano6->setMaximum(255);
QString nombre6=QString::number(piano6->value());
QObject::connect (piano6, SIGNAL(valueChanged(int)), this, SLOT (fonctionpiano1 (int)));

 piano7 = new QSpinBox(this);
 piano7->setGeometry (320 * calcul_position.width () / 400,
        600 * calcul_position.height () / 700,
        20 * calcul_position.width () / 400,
        50 * calcul_position.height () / 700);
piano7->setMaximum(255);
QString nombre7=QString::number(piano7->value());
QObject::connect (piano7, SIGNAL(valueChanged(int)), this, SLOT (fonctionpiano1 (int)));

 piano8 = new QSpinBox(this);
 piano8->setGeometry (340 * calcul_position.width () / 400,
        600 * calcul_position.height () / 700,
        20 * calcul_position.width () / 400,
        50 * calcul_position.height () / 700);
piano8->setMaximum(255);
QString nombre8=QString::number(piano8->value());
QObject::connect (piano8, SIGNAL(valueChanged(int)), this, SLOT (fonctionpiano1 (int))); 

 piano9 = new QSpinBox(this);
 piano9->setGeometry (360 * calcul_position.width () / 400,
        600 * calcul_position.height () / 700,
        20 * calcul_position.width () / 400,
        50 * calcul_position.height () / 700);
piano9->setMaximum(255);
QString nombre9=QString::number(piano9->value());
QObject::connect (piano9, SIGNAL(valueChanged(int)), this, SLOT (fonctionpiano1 (int)));  
     
        
  piano10_bouton = new QPushButton ("9", this);
  piano10_bouton->setFont (QFont ("Comic Sans MS", 10));
  piano10_bouton->setGeometry (380 * calcul_position.width () / 400,
        600 * calcul_position.height () / 700,
        20 * calcul_position.width () / 400,
        50 * calcul_position.height () / 700);                
 /*******************************************************/
 
 
  piano1a = new QSpinBox(this);
 piano1a->setGeometry (200 * calcul_position.width () / 400,
        650 * calcul_position.height () / 700,
        20 * calcul_position.width () / 400,
        50 * calcul_position.height () / 700);
piano1a->setMaximum(255);
QString nombre1a=QString::number(piano1a->value());
QObject::connect (piano1a, SIGNAL(valueChanged(int)), this, SLOT (fonctionpiano1 (int)));

 piano2a = new QSpinBox(this);
 piano2a->setGeometry (220 * calcul_position.width () / 400,
        650 * calcul_position.height () / 700,
        20 * calcul_position.width () / 400,
        50 * calcul_position.height () / 700);
piano2a->setMaximum(255);
QString nombre2a=QString::number(piano2a->value());
QObject::connect (piano2a, SIGNAL(valueChanged(int)), this, SLOT (fonctionpiano1 (int)));

 piano3a = new QSpinBox(this);
 piano3a->setGeometry (240 * calcul_position.width () / 400,
        650 * calcul_position.height () / 700,
        20 * calcul_position.width () / 400,
        50 * calcul_position.height () / 700);  
piano3a->setMaximum(255);
QString nombre3a=QString::number(piano3a->value());
QObject::connect (piano3a, SIGNAL(valueChanged(int)), this, SLOT (fonctionpiano1 (int))); 

 piano4a = new QSpinBox(this);
 piano4a->setGeometry (260 * calcul_position.width () / 400,
        650 * calcul_position.height () / 700,
        20 * calcul_position.width () / 400,
        50 * calcul_position.height () / 700); 
piano4a->setMaximum(255);
QString nombre4a=QString::number(piano4a->value());
QObject::connect (piano4a, SIGNAL(valueChanged(int)), this, SLOT (fonctionpiano1 (int)));       

 piano5a = new QSpinBox(this);
 piano5a->setGeometry (280 * calcul_position.width () / 400,
        650 * calcul_position.height () / 700,
        20 * calcul_position.width () / 400,
        50 * calcul_position.height () / 700);
piano5a->setMaximum(255);
QString nombre5a=QString::number(piano5a->value());
QObject::connect (piano5a, SIGNAL(valueChanged(int)), this, SLOT (fonctionpiano1 (int)));

 piano6a = new QSpinBox(this);
 piano6a->setGeometry (300 * calcul_position.width () / 400,
        650 * calcul_position.height () / 700,
        20 * calcul_position.width () / 400,
        50 * calcul_position.height () / 700);
piano6a->setMaximum(255);
QString nombre6a=QString::number(piano6a->value());
QObject::connect (piano6a, SIGNAL(valueChanged(int)), this, SLOT (fonctionpiano1 (int)));
        
 piano7a = new QSpinBox(this);
 piano7a->setGeometry (320 * calcul_position.width () / 400,
        650 * calcul_position.height () / 700,
        20 * calcul_position.width () / 400,
        50 * calcul_position.height () / 700);
piano7a->setMaximum(255);
QString nombre7a=QString::number(piano7a->value());
QObject::connect (piano7a, SIGNAL(valueChanged(int)), this, SLOT (fonctionpiano1 (int)));
        
 piano8a = new QSpinBox(this);
 piano8a->setGeometry (340 * calcul_position.width () / 400,
        650 * calcul_position.height () / 700,
        20 * calcul_position.width () / 400,
        50 * calcul_position.height () / 700);
piano8a->setMaximum(255);
QString nombre8a=QString::number(piano8a->value());
QObject::connect (piano8a, SIGNAL(valueChanged(int)), this, SLOT (fonctionpiano1 (int)));
  
        
  piano9a_bouton = new QPushButton ("8", this);
  piano9a_bouton->setFont (QFont ("Comic Sans MS", 10));
  piano9a_bouton->setGeometry (360 * calcul_position.width () / 400,
        650 * calcul_position.height () / 700,
        20 * calcul_position.width () / 400,
        50 * calcul_position.height () / 700);         
        
  piano10a_bouton = new QPushButton ("9", this);
  piano10a_bouton->setFont (QFont ("Comic Sans MS", 10));
  piano10a_bouton->setGeometry (380 * calcul_position.width () / 400,
        650 * calcul_position.height () / 700,
        20 * calcul_position.width () / 400,
        50 * calcul_position.height () / 700);      
 


  /***fin choix instruments ***/


  /***serie2*clavier1*bas************************************************************************/

  bouton['a'-'a'] = new QPushButton ("A do oct3", this);
  bouton['a'-'a']->setFont (QFont ("Comic Sans MS", 14));
  bouton['a'-'a']->setGeometry (1 * calcul_position.width () / 400,
        1 * calcul_position.height () / 700,
        100 * calcul_position.width () / 400,
        100 * calcul_position.height () / 700);

  bouton['z'-'a'] = new QPushButton ("Z do# oct3", this);
  bouton['z'-'a']->setFont (QFont ("Comic Sans MS", 14));
  bouton['z'-'a']->setGeometry (100 * calcul_position.width () / 400,
        1 * calcul_position.height () / 700,
        100 * calcul_position.width () / 400,
        100 * calcul_position.height () / 700);

  bouton['e'-'a'] = new QPushButton ("E re oct3", this);
  bouton['e'-'a']->setFont (QFont ("Comic Sans MS", 14));
  bouton['e'-'a']->setGeometry (200 * calcul_position.width () / 400,
        1 * calcul_position.height () / 700,
        100 * calcul_position.width () / 400,
        100 * calcul_position.height () / 700);

  bouton['r'-'a'] = new QPushButton ("R re# oct3", this);
  bouton['r'-'a']->setFont (QFont ("Comic Sans MS", 14));
  bouton['r'-'a']->setGeometry (300 * calcul_position.width () / 400,
        1 * calcul_position.height () / 700,
        100 * calcul_position.width () / 400,
        100 * calcul_position.height () / 700);
  /****ligne2****/

  bouton['t'-'a'] = new QPushButton ("T mi oct3", this);
  bouton['t'-'a']->setFont (QFont ("Comic Sans MS", 14));
  bouton['t'-'a']->setGeometry (1 * calcul_position.width () / 400,
        100 * calcul_position.height () / 700,
        100 * calcul_position.width () / 400,
        100 * calcul_position.height () / 700);

  bouton['y'-'a'] = new QPushButton ("Y fa oct3", this);
  bouton['y'-'a']->setFont (QFont ("Comic Sans MS", 14));
  bouton['y'-'a']->setGeometry (100 * calcul_position.width () / 400,
        100 * calcul_position.height () / 700,
        100 * calcul_position.width () / 400,
        100 * calcul_position.height () / 700);

  bouton['u'-'a'] = new QPushButton ("U fa# oct3", this);
  bouton['u'-'a']->setFont (QFont ("Comic Sans MS", 14));
  bouton['u'-'a']->setGeometry (200 * calcul_position.width () / 400,
        100 * calcul_position.height () / 700,
        100 * calcul_position.width () / 400,
        100 * calcul_position.height () / 700);

  bouton['i'-'a'] = new QPushButton ("I sol oct3", this);
  bouton['i'-'a']->setFont (QFont ("Comic Sans MS", 14));
  bouton['i'-'a']->setGeometry (300 * calcul_position.width () / 400,
        100 * calcul_position.height () / 700,
        100 * calcul_position.width () / 400,
        100 * calcul_position.height () / 700);

  /***ligne3****/

  bouton['o'-'a'] = new QPushButton ("O sol# oct3", this);
  bouton['o'-'a']->setFont (QFont ("Comic Sans MS", 14));
  bouton['o'-'a']->setGeometry (1 * calcul_position.width () / 400,
        200 * calcul_position.height () / 700,
        100 * calcul_position.width () / 400,
        100 * calcul_position.height () / 700);

  bouton['p'-'a'] = new QPushButton ("P la oct3", this);
  bouton['p'-'a']->setFont (QFont ("Comic Sans MS", 14));
  bouton['p'-'a']->setGeometry (100 * calcul_position.width () / 400,
        200 * calcul_position.height () / 700,
        100 * calcul_position.width () / 400,
        100 * calcul_position.height () / 700);

  bouton['q'-'a'] = new QPushButton ("Q la# oct3", this);
  bouton['q'-'a']->setFont (QFont ("Comic Sans MS", 14));
  bouton['q'-'a']->setGeometry (200 * calcul_position.width () / 400,
        200 * calcul_position.height () / 700,
        100 * calcul_position.width () / 400,
        100 * calcul_position.height () / 700);

  bouton['s'-'a'] = new QPushButton ("S si oct3", this);
  bouton['s'-'a']->setFont (QFont ("Comic Sans MS", 14));
  bouton['s'-'a']->setGeometry (300 * calcul_position.width () / 400,
        200 * calcul_position.height () / 700,
        100 * calcul_position.width () / 400,
        100 * calcul_position.height () / 700);
  /***ligne4****/

  bouton['d'-'a'] = new QPushButton ("D do oct4", this);
  bouton['d'-'a']->setFont (QFont ("Comic Sans MS", 14));
  bouton['d'-'a']->setGeometry (1 * calcul_position.width () / 400,
        300 * calcul_position.height () / 700,
        100 * calcul_position.width () / 400,
        100 * calcul_position.height () / 700);


  bouton['f'-'a'] = new QPushButton ("F do# oct4", this);
  bouton['f'-'a']->setFont (QFont ("Comic Sans MS", 14));
  bouton['f'-'a']->setGeometry (100 * calcul_position.width () / 400,
        300 * calcul_position.height () / 700,
        100 * calcul_position.width () / 400,
        100 * calcul_position.height () / 700);

  bouton['g'-'a'] = new QPushButton ("G re oct4", this);
  bouton['g'-'a']->setFont (QFont ("Comic Sans MS", 14));
  bouton['g'-'a']->setGeometry (200 * calcul_position.width () / 400,
        300 * calcul_position.height () / 700,
        100 * calcul_position.width () / 400,
        100 * calcul_position.height () / 700);

  bouton['h'-'a'] = new QPushButton ("H re# oct4", this);
  bouton['h'-'a']->setFont (QFont ("Comic Sans MS", 14));
  bouton['h'-'a']->setGeometry (300 * calcul_position.width () / 400,
        300 * calcul_position.height () / 700,
        100 * calcul_position.width () / 400,
        100 * calcul_position.height () / 700);
  /***ligne5****/

  bouton['j'-'a'] = new QPushButton ("J mi oct4", this);
  bouton['j'-'a']->setFont (QFont ("Comic Sans MS", 14));
  bouton['j'-'a']->setGeometry (1 * calcul_position.width () / 400,
        400 * calcul_position.height () / 700,
        100 * calcul_position.width () / 400,
        100 * calcul_position.height () / 700);

  bouton['k'-'a'] = new QPushButton ("K fa oct4", this);
  bouton['k'-'a']->setFont (QFont ("Comic Sans MS", 14));
  bouton['k'-'a']->setGeometry (100 * calcul_position.width () / 400,
        400 * calcul_position.height () / 700,
        100 * calcul_position.width () / 400,
        100 * calcul_position.height () / 700);

  bouton['l'-'a'] = new QPushButton ("L fa# oct4", this);
  bouton['l'-'a']->setFont (QFont ("Comic Sans MS", 14));
  bouton['l'-'a']->setGeometry (200 * calcul_position.width () / 400,
        400 * calcul_position.height () / 700,
        100 * calcul_position.width () / 400,
        100 * calcul_position.height () / 700);

  bouton['m'-'a'] = new QPushButton ("M sol oct4", this);
  bouton['m'-'a']->setFont (QFont ("Comic Sans MS", 14));
  bouton['m'-'a']->setGeometry (300 * calcul_position.width () / 400,
        400 * calcul_position.height () / 700,
        100 * calcul_position.width () / 400,
        100 * calcul_position.height () / 700);

  /***ligne6****/

  bouton['w'-'a'] = new QPushButton ("W sol# oct4", this);
  bouton['w'-'a']->setFont (QFont ("Comic Sans MS", 14));
  bouton['w'-'a']->setGeometry (1 * calcul_position.width () / 400,
        500 * calcul_position.height () / 700,
        100 * calcul_position.width () / 400,
        100 * calcul_position.height () / 700);

  bouton['x'-'a'] = new QPushButton ("X la oct4", this);
  bouton['x'-'a']->setFont (QFont ("Comic Sans MS", 14));
  bouton['x'-'a']->setGeometry (100 * calcul_position.width () / 400,
        500 * calcul_position.height () / 700,
        100 * calcul_position.width () / 400,
        100 * calcul_position.height () / 700);

  bouton['c'-'a'] = new QPushButton ("C la# oct4", this);
  bouton['c'-'a']->setFont (QFont ("Comic Sans MS", 14));
  bouton['c'-'a']->setGeometry (200 * calcul_position.width () / 400,
        500 * calcul_position.height () / 700,
        100 * calcul_position.width () / 400,
        100 * calcul_position.height () / 700);

  bouton['v'-'a'] = new QPushButton ("V si oct4", this);
  bouton['v'-'a']->setFont (QFont ("Comic Sans MS", 14));
  bouton['v'-'a']->setGeometry (300 * calcul_position.width () / 400,
        500 * calcul_position.height () / 700,
        100 * calcul_position.width () / 400,
        100 * calcul_position.height () / 700);
  /***ligne7****/

  bouton['b'-'a'] = new QPushButton ("B do oct5", this);
  bouton['b'-'a']->setFont (QFont ("Comic Sans MS", 14));
  bouton['b'-'a']->setGeometry (1 * calcul_position.width () / 400,
        600 * calcul_position.height () / 700,
        100 * calcul_position.width () / 400,
        100 * calcul_position.height () / 700);

  bouton['n'-'a'] = new QPushButton ("N do# oct5", this);
  bouton['n'-'a']->setFont (QFont ("Comic Sans MS", 14));
  bouton['n'-'a']->setGeometry (100 * calcul_position.width () / 400,
        600 * calcul_position.height () / 700,
        100 * calcul_position.width () / 400,
        100 * calcul_position.height () / 700);

  QObject::connect (aa_bouton, SIGNAL (clicked()), qApp, SLOT (quit ()));
//  QObject::connect (piano2, SIGNAL (clicked ()), this, SLOT (fonctionpiano1 ()));
//  QObject::connect (piano3_bouton, SIGNAL (clicked ()), this, SLOT (fonctionpiano2 ()));

  for(char c ='a'; c<='z'; c++)
   {
    QObject::connect(bouton[c-'a'], SIGNAL(clicked()), sm, SLOT(map()));
    sm->setMapping(bouton[c-'a'], (int)c);
   }
  connect(sm, SIGNAL(mapped(int)), this, SLOT(fonctiontouche(int)));
}

void clavier::fonctionpiano1()
{
quelpiano = 1;
}
void clavier::fonctionpiano2()
{
quelpiano = 2;
}

void clavier::fonctiontouche(int ic)
{
  char c = (char)ic;
  static int passele[26];
  aasynthe(c,passele[c - 'a']+1);
  passele[c-'a']++;
  if(passele[c-'a']>=5) passele[c-'a']=0;
}

void
clavier::keyPressEvent (QKeyEvent * event)
{
  switch (event->key ())
   {
    case Qt::Key_A:
      fonctiontouche((int)'a');
      break;
    case Qt::Key_B:
      fonctiontouche((int)'b');
      break;
    case Qt::Key_C:
      fonctiontouche((int)'c');
      break;
    case Qt::Key_D:
      fonctiontouche((int)'d');
      break;
    case Qt::Key_E:
      fonctiontouche((int)'e');
      break;
    case Qt::Key_F:
      fonctiontouche((int)'f');
      break;
    case Qt::Key_G:
      fonctiontouche((int)'g');
      break;
    case Qt::Key_H:
      fonctiontouche((int)'h');
      break;
    case Qt::Key_I:
      fonctiontouche((int)'i');
      break;
    case Qt::Key_J:
      fonctiontouche((int)'j');
      break;
    case Qt::Key_K:
      fonctiontouche((int)'k');
      break;
    case Qt::Key_L:
      fonctiontouche((int)'l');
      break;
    case Qt::Key_M:
      fonctiontouche((int)'m');
      break;
    case Qt::Key_N:
      fonctiontouche((int)'n');
      break;
    case Qt::Key_O:
      fonctiontouche((int)'o');
      break;
    case Qt::Key_P:
      fonctiontouche((int)'p');
      break;
    case Qt::Key_Q:
      fonctiontouche((int)'q');
      break;
    case Qt::Key_R:
      fonctiontouche((int)'r');
      break;
    case Qt::Key_S:
      fonctiontouche((int)'s');
      break;
    case Qt::Key_T:
      fonctiontouche((int)'t');
      break;
    case Qt::Key_U:
      fonctiontouche((int)'u');
      break;
    case Qt::Key_V:
      fonctiontouche((int)'v');
      break;
    case Qt::Key_W:
      fonctiontouche((int)'w');
      break;
    case Qt::Key_X:
      fonctiontouche((int)'x');
      break;
    case Qt::Key_Y:
      fonctiontouche((int)'y');
      break;
    case Qt::Key_Z:
      fonctiontouche((int)'z');
      break;
   }
}

void clavier::aasynthe(char c, int n)
{
  // On test si le fichier wav existe
  char nomfichierwav[32];
  snprintf(nomfichierwav, 32, "%c%d.wav", c, n);
  if(!fork())
   {
    FILE * fichierwav;
    if (!(fichierwav=fopen(nomfichierwav, "r")))
    // sinon, on le génère
     {
     
     switch (quelpiano) {

case 1 :
      genereFichierJo(c);
      conversionJoWav(c,n);

 break;

case 2 :
      genereFichierJo1(c);
      conversionJoWav(c,n);

 break;


default: 

      genereFichierJo(c);
      conversionJoWav(c,n);

}
     

     }
    else
     fclose(fichierwav);

    // Et on le lit
    execlp("sox", "sox", nomfichierwav, "-d", NULL);
    perror("Ceci ne devrait pas arriver.");
    exit(-1);
   }
}
