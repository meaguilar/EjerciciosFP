#include <iostream>
using namespace std;

int main()
{
    // Declaración de constantes declaradas
    const int precio_hora = 15, precio_extra = 20;
    // Declaración de variables
    float horas, horas_extras, salario;
    string nombre;

    // Solicitando datos al usuario
    cout << "Ingrese las horas";
    cin >> horas;
    cout << "Ingrese su nombre";
    cin >> nombre;

    // Reto, preguntar si el usuario ha realizado horas extras posterior preguntar cuantas horas

    
    cout << "Ingrese las horas extras";
    cin >> horas_extras;

    // Condición para calcular el salario segun las horas trabajadas
    if (horas <= 44)
    {
        salario = horas * precio_hora + horas_extras * precio_extra;
    }
    else
    {
        salario = 44 * precio_hora + 1.5 * precio_hora * (horas - 44) + horas_extras * precio_extra;
    }

    //Salida del salario calculado y nombre
    cout << nombre << ", su salario $" << salario;

    return 0;
}