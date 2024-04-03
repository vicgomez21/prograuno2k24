#ifndef TABLERO_H
#define TABLERO_H


class Tablero
{
    public:
        Tablero(int alturaTablero, int anchoTablero, bool modoDesarrollador);
        int getAlturaTablero();
        int setAlturaTablero(int alturaTablero);
        int getAnchoTablero();
        int setAnchoTablero(int anchoTablero);
        bool getModoDesarrollador();
        bool setModoDesarrollador(bool modoDesarrollador);
        bool colocarMina(int x, int y);
        bool descubrirMina(int x, int y);
        int contarCeldasSinMinasYSinDescubrir();


    protected:

    private:
        int alturaTablero;
        int anchoTablero;
        bool modoDesarrollador;




        int minasCercanas(int final, int columna);
};

#endif // TABLERO_H
