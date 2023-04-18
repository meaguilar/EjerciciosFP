#include <iostream>
using namespace std;

int main()
{
    //Variables locales
    //Declaración de variables
    string modelo, marca;
    float kilometraje, kilometrajeInicial, distancia, tiempo, velocidad;
    int anio;
    //Declaración e inicialización de variable
    bool estado = 0;

    // Solicitar modelo, marca, año, estado, kilometraje, kilometrajeInicial, distancia, tiempo, velocidad.
    cout << "Ingresel 1-Encendido, 0-Apagado";
    cin >> estado;
    cout << "Ingresa la marca del carro ";
    cin >> marca;
    cout << "Ingresa el modelo del carro ";
    cin >> modelo;
    cout << "Ingresa el año";
    cin >> anio;
    cout << "Ingresa el kilometraje inicial ";
    cin >> kilometrajeInicial;
    cout << "Ingresa la distancia ";
    cin >> distancia;
    cout << "Ingrese el tiempo";
    cin >> tiempo;

    // Calcular la velocidad  v = d/t
    velocidad = distancia / tiempo;
    cout << "La velocidad fue " << velocidad << "km/h" << endl;

    // Calcular la distancia  d = v*t
    distancia = velocidad * tiempo;
    cout << "La distancia fue " << distancia << "km" << endl;

    // Calcular el tiempo

    // Determinar el kilometraje
    kilometraje = kilometrajeInicial + distancia;
    cout << "El kilometraje actual es " << kilometraje << "km" << endl;


//Estructura condicional simple para validar si esta o no encendido el carro
    if (estado == 1)
    {
        cout << "Esta encendido" << endl;
    }
    else
    {
        cout << "Esta apagado" << endl;
    }
//Estructura condicional para validar el cambio de aceite
    if (kilometraje > 4000)
    {
        cout << "Se requiere cambio de aceite";
    }
    else
    {
        cout << "Aun no requiere cambio de aceite";
    }

    // RETO Determinar el gasto de gasolina

    return 0;
}
