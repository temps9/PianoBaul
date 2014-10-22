QT += widgets
TEMPLATE = app
DEPENDPATH += .
INCLUDEPATH += .

# Input
HEADERS += clavier.h \
           jo.h \
           convertisseur.h \
           AdnForme.h
SOURCES += main.cpp \
           clavier.cpp \
           fronts.cpp \
           convertisseur.cpp \
           AdnForme.cpp


TARGET = pianobaul
