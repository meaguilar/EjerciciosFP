#include <iostream>
using namespace std;

// Declaración de la función
int CalcularMayoresEdad(int edad[]);

int main()
{
    // Inicialización de las edades
    int edad[5] = {40, 5, 6, 7, 90};

    // Salida
    cout << "La cantidad de mayores de edad es: " << CalcularMayoresEdad(edad) << endl;

    return 0;
}

//Definición de la función con arreglo como parámetro
int CalcularMayoresEdad(int edad[])
{
    int contador = 0;
    for (int i = 0; i < 5; i++)
    {
        if (edad[i] >= 18)
        {
            contador++;
        }
    }
    return contador;
}