#include <iostream>
using namespace std;

int main()
{
    // Declaracion e inicializacion del arreglo
    int MiPrimerArreglo[3] = {1, 5, 89};

    // Declaracion de arreglo dimensión 7 y variable suma
    int ArregloEjemplo[7];
    int suma = 0;

    // Permite obtener el tamaño en bytes sizeof()
    // Determinando la dimensión del arreglo
    int DimensionArreglo = sizeof(ArregloEjemplo) / sizeof(int);

    // Solicitar los datos al usuario para almacenarlos en el arregloEjemplo
    for (int i = 0; i < DimensionArreglo; i++)
    {
        cout << "Ingrese el valor ";
        cin >> ArregloEjemplo[i];
    }
    cout<<"Listado de números pares "<<endl;
    // Recorriendo el arreglo e imprimiendo los valores que son múltiplos de 2
    for (int i = 0; i < DimensionArreglo; i++)
    {
        if (ArregloEjemplo[i] % 2 == 0)
        {
            // Imprimir la posición del valor par
            cout << "Posicion " << i << " valor " << ArregloEjemplo[i] << endl;
            suma += ArregloEjemplo[i];
        }
    }
    // Salida de la suma de los pares
    cout << "El valor de la suma de los pares " << suma;

    return 0;
}