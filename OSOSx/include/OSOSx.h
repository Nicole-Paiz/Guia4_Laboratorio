#ifndef OSOSX_H
#define OSOSX_H
#include <stdio.h>
#include <iostream>
using namespace std;
#include <string.h>
#include "iApariencia.h"

class OSOSx : public iApariencia
{
    public:
        OSOSx();
        virtual ~OSOSx();
        void PintarOSx();

    protected:

    private:
        char _osx_titulo[100];
        char _osx_area_trabajo[100];
        char _osx_estado[100];
        void DibujarSimbolo(char,int,bool _saltarLinea = false);
        void CentrarTexto(char*);

};

#endif // OSOSX_H
