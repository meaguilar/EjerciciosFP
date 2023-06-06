#include <iostream>
using namespace std;

// Declaración de una función con parámetro de arreglo bidimensional
void Imprimir(string matriz[3][4]);

int main()
{
    // Declarar e inicializar 3 filas y 4 columnas
    string matriz[3][4] = {
        {"Daniel", "A", "B", "C"},
        {"Rocio", "C", "E", "F"},
        {"Marco", "D", "M", "N"}};

    // Llamado de la función
    Imprimir(matriz);

    return 0;
}

// Definición de la función
void Imprimir(string matriz[3][4])
{
    // Primer for evalua las filas
    for (int i = 0; i < 3; i++)
    {
        cout << endl;
        // Segundo for evalua las columnas
        for (int j = 0; j < 4; j++)
        {
            cout << matriz[i][j] << endl;
        }
    }
}