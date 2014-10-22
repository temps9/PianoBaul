#include <QApplication>
#include "clavier.h"
#ifdef WIN32 // WIN32 is defined by all Windows 32 compilers, but not by others.
#include <windows.h>
#else
#include <unistd.h>
#endif
/* Imaginer et creer par Abadie joris*/
/* en utilisant un concept de Andre pierre jocelyn*/
/*Cette oeuvre est protégée et n'est divulguée et réservé que pour utilisation sous linux dans les conditions Creative common ci-dessous*/
/* Cette oeuvre est mise à disposition selon les termes de la Licence Creative Commons Paternité - Pas d'Utilisation Commerciale - Partage des Conditions Initiales à l'Identique 2.0 France. */
/*Aucune garantie n'est donner sur les effets de cet executable*/
int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    clavier fenetre;
    fenetre.show();
    return app.exec();
}
