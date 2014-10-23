QT += widgets
TEMPLATE = app
DEPENDPATH += .
INCLUDEPATH += .

# Input
HEADERS += clavier.h \
           jo.h \
           convertisseur.h \
           AdnForme.h \
           AdnForme1.h
SOURCES += main.cpp \
           clavier.cpp \
           fronts.cpp \
           convertisseur.cpp \
           AdnForme.cpp\
           AdnForme1.cpp


TARGET = pianobaul
