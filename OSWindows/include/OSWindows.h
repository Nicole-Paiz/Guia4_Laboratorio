#ifndef IOSWINDOWS_H
#define IOSWINDOWS_H

#include <stdio.h>
#include <windows.h>
#include <iostream>
#include <string.h>
#include "iApariencia.h"

using namespace std;

class OSWindows : public iApariencia
{
    public:
        OSWindows();
        virtual ~OSWindows();
        void PintarWindow();
    protected:
    private:
        char _win_titulo[100];
        char _win_area_trabajo[100];
        char _win_estado[100];
        void DibujarSimbolo(char,int,bool _saltarlinea = false);
        void CentrarTexto(char*);
};

#endif // IOSWINDOWS_H
