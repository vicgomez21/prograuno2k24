#ifndef JUEGO_H
#define JUEGO_H


class Juego
{
    public:
        Juego();
        void colocarMinasAleatoriamente();
        int solicitarFilaUsuario();
        int solicitarColumnaUsuario();
        bool jugadorGana();
        void iniciar();

    protected:

    private:
            int cantidadMinas;

            int aleatorioEnRango(int minimo, int maximo);
            int filaAleatoria();
            int columnaAleatoria();
};

#endif // JUEGO_H
