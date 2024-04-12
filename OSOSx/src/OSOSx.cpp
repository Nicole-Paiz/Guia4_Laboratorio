#include "OSOSx.h"

OSOSx::OSOSx()
{
    strcpy(_osx_titulo,"OS(OPERATING SYSTEM)");
    strcpy(_osx_area_trabajo,"No hay nada en el area de trabajo");
    strcpy(_osx_estado,"OSOSx no ha sido activado todavia");
}

OSOSx::~OSOSx()
{
    //dtor
}
void OSOSx::PintarOSx()
{
    ///Dibuja la barra de titulo
    DibujarSimbolo('*',80,true);
    DibujarSimbolo('*',1);
    CentrarTexto(_osx_titulo);
    DibujarSimbolo('*',1,true);
    DibujarSimbolo('*',80,true);

    ///Dibujamos el area de trabajo
     for(int e=0;e<10;e++){
        DibujarSimbolo('*',1);
        DibujarSimbolo(' ',78);
        DibujarSimbolo('*',1,true);
        ///Cuando llegamos a la fila 5 Escribimos
        ///El Contenido Del Area De Trabajo
        if(e==5){
            DibujarSimbolo('*',1);
            CentrarTexto(_osx_area_trabajo);
            DibujarSimbolo('*',1,true);
        }
    }

    ///Dibujamos la barra de estado
    DibujarSimbolo('*',80,true);
    DibujarSimbolo('*',1);
    CentrarTexto(_osx_estado);
    DibujarSimbolo('*',1,true);
    DibujarSimbolo('*',80,true);

}
 void OSOSx::DibujarSimbolo(char _simbolo, int _limite, bool _saltarlinea)
 {
    ///Dibujamos La Barra De Titulo
    for(int e=0;e<_limite;e++)
    {
        cout << _simbolo;
    }
    if(_saltarlinea)
    {
        cout << endl;
    }

 }

 void OSOSx::CentrarTexto(char *_ptexto)
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
