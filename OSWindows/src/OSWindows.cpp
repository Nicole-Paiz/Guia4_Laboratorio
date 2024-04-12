#include "OSWindows.h"

OSWindows::OSWindows()
{
    strcpy(_win_titulo,"Microsoft Windows 2016");
    strcpy(_win_area_trabajo,"No hay nada en el area de trabajo");
    strcpy(_win_estado,"Windows no ha sido activado todavia");
}

OSWindows::~OSWindows()
{
    //dtor
}

void OSWindows::PintarWindow()
{
    //dibujamos la barra de titulo
    DibujarSimbolo('*',80,true);
    DibujarSimbolo('*',1);
    CentrarTexto(_win_titulo);
    DibujarSimbolo('*',1,true);
    DibujarSimbolo('*',80,true);

    //dibujamos el area de trabajo
    for(int e=0;e<10;e++)
    {
        DibujarSimbolo('*',1);
        DibujarSimbolo(' ',78);
        DibujarSimbolo('*',1,true);
        //cuando llegamos a la fila 5 escribimos
        //el contenido del area de trabajo
        if(e == 5)
        {
            DibujarSimbolo('*',1);
            CentrarTexto(_win_area_trabajo);
            DibujarSimbolo('*',1,true);
        }
    }

    //dibujamos la barra de estado
    DibujarSimbolo('*',80,true);
    DibujarSimbolo('*',1);
    CentrarTexto(_win_estado);
    DibujarSimbolo('*',1,true);
    DibujarSimbolo('*',80,true);
}

void OSWindows::DibujarSimbolo(char _simbolo,int _limite,bool _saltarlinea)
{
    //dibujamos la barra de titulo
    for(int e=0;e<_limite;e++)
    {
        cout << _simbolo;
    }
    if(_saltarlinea)
    {
        cout << endl;
    }
}

void OSWindows::CentrarTexto(char *_ptexto)
{
    int k,n,r;
    n = strlen(_ptexto);
    k = (78-n)/2;
    r = (78-n)%2;
    for(int i=0;i<k;i++)
    {
        cout << ' ';
    }
    cout << _ptexto;

    for(int i=0;i<k+r;i++)
    {
        cout << ' ';
    }
}