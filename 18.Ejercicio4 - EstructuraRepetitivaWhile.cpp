#include <iostream>
using namespace std;

int main()
{

    // Imprimir hola 3 veces

    // Definir el contador
    // start
    int i = 0;
    // stop
    while (i <= 2)
    {
        cout << "Hola =)";
        // step
        i++;
    }

    // Sumar los valores 1 - 5
    int i = 0;
    int suma = 0;
    while (i <= 4)
    {
        suma += i;
        i++;
    }
    cout << "El resultado de la suma es " << suma;

    // Calcular el promedio de 3 notas
    int i = 1;
    float suma = 0;
    float nota = 0;
    float promedio = 0;
    while (i <= 3)
    {
        cout << "Ingrese la nota";
        cin >> nota;
        suma += nota;
        i++;
    }
    promedio = suma / 3;
    cout << "El promedio obtenido es " << promedio;

    // Realizar un decremento 5 4 3 2 1
    int i = 5;
    while (i > 0)
    {
        cout << i << endl;
        i--;
    }

    // Encontrar el factorial de 5
    int i = 1;
    int factorial = 1;
    while (i <= 5)
    {
        factorial *= i;
        i++;
    }
    cout << "El factorial de 5 es " << factorial;

    return 0;
}