#include <iostream>
using namespace std;
//Incluye al archivo que contiene las declaraciones de las funciones
#include "Lib.hpp"

int main()
{
    int n1, n2, opcion;

    cout << "Selecciona la operación a realizar 1-Suma, 2-Resta, 3-Multiplicación, 4-División" << endl;
    cin >> opcion;
    cout << "Ingresa un número ";
    cin >> n1;
    cout << "Ingresa un número ";
    cin >> n2;

    switch (opcion)
    {
    case 1: // LLama a la función Suma
        cout << Suma(n1, n2);
        break;
    case 2: // Resta
        cout << Resta(n1, n2);
        break;
    case 3:
        cout << Multiplicacion(n1, n2);
        break;
    case 4:
        cout << Division(n1, n2);
        break;
    default:
        break;
    }
}