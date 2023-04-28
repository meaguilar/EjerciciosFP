#include <iostream>

using namespace std;

int main()
{
    //Probar por separado los ejercicios

    // Imprimir 3 hola
    // start        stop       step
    for (int i = 3; i <= 6; i++)
    {
        cout << "Hola soy numero " << i << endl;
    }

    // Sumar los valores 1 - 5
    float suma = 0;
    for (float i = 1; i <= 5; i++)
    {
        suma = suma + i;
    }

    cout << "La suma es: " << suma;

    // Calcular el promedio de 3 notas

    float suma = 0;
    float promedio = 0;
    float valorUsuario;
    for (float i = 1; i <= 5; i++)
    {
        cout << "Ingrese el valor";
        cin >> valorUsuario;
        suma = suma + valorUsuario;
    }
    promedio = suma / 3;
    cout << "El promedio es " << promedio;

    // Realizar un decremento 5 4 3 2 1

    for (int i = 5; i >= 1; i--)
    {
        cout << i << endl;
    }

    // Encontrar el factorial de 5
    int factorial = 1;
    for (int i = 5; i >= 1; i--)
    // 5 * 4 * 3 * 2 * 1
    {
        // factorial = factorial * i;
        factorial *= i;
    }
    cout << "El factorial es " << factorial;

    // Sumar los numeros pares rango 1 - 10
    // % operador mod --obtener residuo
    int sumaPar = 0;
    int sumaImpar = 0;
    int valor;
    cout << "Ingrese el valor de fin ";
    cin >> valor;
    // cond. inicio  cond. final  incremento
    for (int i = 1; i <= valor; i++)
    {
        if (i % 2 == 0)
        {
            sumaPar = sumaPar + i;
            // sumaPar += i;
            cout << "Hola soy un numero par " << i << endl;
        }
        else
        {
            sumaImpar += i;
            cout << "Hola soy un numero impar" << i << endl;
        }
    }
    cout << "La suma de los pares" << sumaPar;
    cout << "La suma de los impares" << sumaImpar;

    return 0;
}