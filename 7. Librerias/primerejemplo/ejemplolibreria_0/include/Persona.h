#ifndef PERSONA_H
#define PERSONA_H


class Persona
{
    public:
        Persona();
        Persona(int dpi, int nombre, int apellido, int telefono, int correo);
        void despliegaVidas(int vidas);
        int getDpi();
        int getNombre();
        int getApellido();
        int getTelefono();
        int getCorreo();

    protected:

    private:
        int dpi;
        int nombre;
        int apellido;
        int telefono;
        int correo;
};

#endif // PERSONA_H
