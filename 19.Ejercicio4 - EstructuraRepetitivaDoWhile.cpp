#include <iostream>
using namespace std;

int main()
{

    // Imprimir hola 3 veces

    // Definir el contador
    // start
        int i = 0;
        do
        {
            cout<<"Hola =)" <<endl;
            //step
            i++;
        } while (i<=2); // stop

    // Sumar los valores 1 - 5
        int i = 0;
        int suma = 0;
        do
        {
            suma += i;
            i++;
        } while (i <= 4);

        cout << "El resultado de la suma es " << suma;

    // Calcular el promedio de 3 notas
       int i = 1;
       float suma = 0;
       float nota = 0;
       float promedio = 0;
       do
       {
           cout << "Ingrese la nota";
           cin >> nota;
           suma += nota;
           i++;
       } while (i<=3);
       promedio = suma / 3;
       cout << "El promedio obtenido es " << promedio;

    // Realizar un decremento 5 4 3 2 1
        int i = 5;
        do
        {
            cout << i << endl;
            i--;
        } while (i > 0);

    // Encontrar el factorial de 5
    int i = 1;
    int factorial = 1;
    do
    {
        factorial *= i;
        i++;
    } while (i<=5);

    cout << "El factorial de 5 es " << factorial;

    return 0;
}