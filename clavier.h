/* Imaginer et creer par Abadie joris*/
/* en utilisant un concept de Andre pierre jocelyn*/
/*Cette oeuvre est protégée et n'est divulguée et réservé que pour utilisation sous linux dans les conditions Creative common ci-dessous*/
/* Cette oeuvre est mise à disposition selon les termes de la Licence Creative Commons Paternité - Pas d'Utilisation Commerciale - Partage des Conditions Initiales à l'Identique 2.0 France. */
/*Aucune garantie n'est donner sur les effets de cet executable*/
#ifndef DEF_clavier
#define DEF_clavier
#include <QApplication>
#include <QDesktopWidget>
#include <QWidget>
#include <QPushButton>
#include <QSignalMapper>
#include <QObject>
#include <QMessageBox>
#include <QKeyEvent>
#include <ctype.h>
#include <QProcess>
#ifdef WIN32 // WIN32 is defined by all Windows 32 compilers, but not by others.
#include <windows.h>
#else
#include <unistd.h>
#endif

#include "convertisseur.h"
#include <qspinbox.h>

using namespace std;
class clavier : public QWidget
{
  Q_OBJECT
   QObject *parent;

  public:
  clavier();

  private:
 
  
  QSpinBox *piano1a;
  QSpinBox *piano2a;
  QSpinBox *piano3a;
  QSpinBox *piano4a;
  QSpinBox *piano5a;
  QSpinBox *piano6a;
  QSpinBox *piano7a;
  QSpinBox *piano8a;
  QPushButton *piano9a_bouton;
  QPushButton *piano10a_bouton;
  QSpinBox *piano2;
  QLabel *texte;
  QSpinBox *piano3;
  QSpinBox *piano4;
  QSpinBox *piano5;
  QSpinBox *piano6;
  QSpinBox *piano7;
  QSpinBox *piano8;
  QSpinBox *piano9;
  QPushButton *piano10_bouton;
  QSignalMapper *sm;
  QPushButton *aa_bouton;
  QPushButton *an_bouton;
  QPushButton *ao_bouton;
  QPushButton *ap_bouton;
  QPushButton *aq_bouton;
  QPushButton *ar_bouton;
  QPushButton *as_bouton;
  QPushButton *at_bouton;
  QPushButton *au_bouton;
  QPushButton *av_bouton;
  QPushButton *aw_bouton;
  QPushButton *ax_bouton;
  QPushButton *ay_bouton;
  QPushButton *az_bouton;
  
  QPushButton *bouton[26];

  public slots:
   void fonctiontouche (int c);
   void keyPressEvent(QKeyEvent* event);
   void aasynthe (char c, int n);
   void fonctionpiano1 ();
   void fonctionpiano2 ();

};

#endif
