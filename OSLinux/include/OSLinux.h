#ifndef OSLINUX_H
#define OSLINUX_H
#include <stdio.h>
#include <iostream>
using namespace std;
#include <string.h>
#include "iApariencia.h"


class OSLinux : public iApariencia
{
    public:
        OSLinux();
        virtual ~OSLinux();
        void PintarLinux();

    protected:

    private:
        char _lin_titulo[100];
        char _lin_area_trabajo[100];
        char _lin_estado[100];
        void DibujarSimbolo(char,int,bool _saltarlinea = false);
        void CentrarTexto(char*);
};

#endif // OSLINUX_H
