#include <iostream>
using namespace std;

class Persona
{
public:
    Persona() {};
    Persona(string dpi, string nombre, string apellido, string telefono, string correo)
    {
        this->dpi=dpi;
        this->nombre=nombre;
        this->apellido=apellido;
        this->telefono=telefono;
        this->correo=correo;
    }
    string nombreCompleto()
    {
        return nombre + " " + apellido;
    }
private:
    string dpi;
    string nombre;
    string apellido;
    string telefono;
    string correo;
};
enum class EntidadFinanciera { MasterCred, VisaCred};
class TarjetaDeCredito
{
public:
    TarjetaDeCredito(string entidadBancaria, string numeroTarjeta, double saldoTarjeta, Persona titular, EntidadFinanciera entidadFinanciera)
    {
            this->entidadBancaria=entidadBancaria;
            this->numeroTarjeta=numeroTarjeta;
            this->saldoTarjeta=saldoTarjeta;
            this->titular=titular;
            this->entidadFinanciera=entidadFinanciera;
    }
    bool tieneSaldoDisponible(double monto)
    {
        return this->saldoTarjeta>=monto;
    }
    void descontar(double monto)
    {
        this->saldoTarjeta = this->saldoTarjeta - monto;
    }
    string nombreCompletoTitular()
    {
        return titular.nombreCompleto();
    }
    void informacionTarjeta()
    {
        cout << this->entidadBancaria << " " << this->numeroTarjeta << " " << this->saldoTarjeta << " " << this->titular.nombreCompleto() << endl;
    }
private:
    string entidadBancaria;
    string numeroTarjeta;
    double saldoTarjeta;
    Persona titular;
    EntidadFinanciera entidadFinanciera;
};
class Ticket
{
public:

    Ticket() {};
    Ticket(string nombreApellido, double montoTotal, double montoPorCuota)
    {
        this->nombreApellido=nombreApellido;
        this->montoTotal=montoTotal;
        this->montoPorCuota=montoPorCuota;
    }
    void informacionTicket()
    {
        cout << this->nombreApellido << " " << this->montoTotal << " " << this->montoPorCuota << endl;
    }
private:
    string nombreApellido;
    double montoTotal;
    double montoPorCuota;

};
class Posnet
{
public:
    const double RECARGO_POR_CUOTA=0.03;
    const int MIN_CANTIDAD_CUOTAS=1;
    const int MAX_CANTIDAD_CUOTAS=6;
    Posnet() {};
    Ticket efectuarPago(TarjetaDeCredito tarjeta, double montoAAbonar, int cantidadCuotas)
    {
        Ticket miTicket;
        if (datosValidos(tarjeta, montoAAbonar, cantidadCuotas))
        {
                double montoFinal = montoAAbonar + ( montoAAbonar * recargoSegunCuotas(cantidadCuotas));
                if (tarjeta.tieneSaldoDisponible(montoFinal))
                {
                    tarjeta.descontar(montoFinal);
                    string nombreApellido = tarjeta.nombreCompletoTitular();
                    double montoPorCuota = montoFinal / cantidadCuotas;
                    miTicket=Ticket(nombreApellido, montoFinal, montoPorCuota);
                }
        }
        return miTicket;

    }

private:
    bool datosValidos( TarjetaDeCredito tarjeta, double monto, int cantidad)
    {
        bool esTarjetaValida = true;
        bool esMontoValido = (monto>0);
        bool esCantidadCuotasValidas = (cantidad>=MIN_CANTIDAD_CUOTAS && cantidad<=MAX_CANTIDAD_CUOTAS);
        return esTarjetaValida && esMontoValido && esCantidadCuotasValidas;
    }
    double recargoSegunCuotas(int cantidadCuotas)
    {
        return (cantidadCuotas-1)*RECARGO_POR_CUOTA;
    }

};
int main()
{
    Posnet posnet;
    Persona persona("404545454","Luis", "Gomez", "45454545", "gomezl@gmail.com");
    TarjetaDeCredito tarjeta("FakeBank", "4545454545",15000.00, persona, EntidadFinanciera::VisaCred);
    cout << "Tarjeta antes de pago" << endl;
    tarjeta.informacionTarjeta();
    Ticket ticketGenerado = posnet.efectuarPago(tarjeta, 10000.00, 5);
    cout << "Ticket Generado" << endl;
    ticketGenerado.informacionTicket();
    cout << "Tarjeta despues del pago" << endl;
    tarjeta.informacionTarjeta();
    return 0;
}

