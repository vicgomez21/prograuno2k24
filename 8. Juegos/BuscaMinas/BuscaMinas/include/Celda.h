#ifndef CELDA_H
#define CELDA_H


class Celda
{
    public:
        Celda();
        int getCoordenadaX();
        int setCoordenadaX(int coordenadaX);
        int getCoordenadaY();
        int setCoordenadaY(int coordenadaY);
        bool getMina();
        bool setMina(bool estadoMina);
        bool getMinaDescubierta();
        bool setMinaDescubierta(bool minaDescubierta);

        void imprimirCelda();
    protected:

    private:
        int coordenadaX, coordenadaY;
        bool mina, minaDescubierta;
};

#endif // CELDA_H
