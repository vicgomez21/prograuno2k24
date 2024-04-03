#ifndef CONFIG_H
#define CONFIG_H


class Config
{
    public:
        Config(int filasTablero, int columnasTablero, int minasTablero, bool modoDesarrollador, int vidasTablero);
        int getFilasTablero();
        int setFilasTablero(int filasTablero);
        int getColumnasTablero();
        int setColumnasTablero(int columnasTablero);
        int getMinasTablero();
        int setMinasTablero(int minasTablero);
        bool getModoDesarrollador();
        bool setModoDesarrollador(bool modoDesarrollador);
        int getVidasTablero();
        int setVidasTablero(int vidasTablero);

    protected:

    private:
        int filasTablero;
        int columnasTablero;
        int minasTablero;
        bool modoDesarrollador;
        int vidasTablero;
};

#endif // CONFIG_H
