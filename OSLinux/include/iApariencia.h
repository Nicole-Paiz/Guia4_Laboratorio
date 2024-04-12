#ifndef IAPARIENCIA_H
#define IAPARIENCIA_H


class iApariencia
{
    public:
        virtual void PintarLinux()=0;
        //virtual ~iApariencia();
        virtual void DibujarSimbolo(char,int,bool)=0;

    protected:

    private:
};

#endif // IAPARIENCIA_H
