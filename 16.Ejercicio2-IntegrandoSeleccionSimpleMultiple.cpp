#include <iostream>

using namespace std;

int main()
{
    // Declaración de constantes
    const float precioHora = 20;
    const float precioHorasExtra = 30;
    // Declaración de variables
    float horasTrabajadas;
    string nombre;
    float salario;
    float horasExtras;
    float salarioExtra;
    int opcion;

    // Solicitando datos al usuario
    cout << "Ingrese su nombre: ";
    cin >> nombre;
    cout << "¿Qué reporte se desea generar? 1-Tiempo Completo 2-Horas Extras 3-Servicio Profesional";
    cin >> opcion;

    switch (opcion)
    {
    case 1: // Tiempo completo
        cout << "Ingrese las horas trabajadas: ";
        cin >> horasTrabajadas;

        // Condición para evaluar si el valor ingresado es númerico
        if (horasTrabajadas == false)
        {
            //Mensaje a mostrar 
            cout << "Ingrese un valor válido" << endl;
        }
        else
        {
            // Condición para evaluar la cantidad de horas trabajadas
            if (horasTrabajadas >= 44)
            {
                // Cálculo de salario
                salario = 44 * precioHora + 1.5 * precioHora * (horasTrabajadas - 44);
                // Salida del salario calculado y nombre
                cout << nombre << ", su salario: $" << salario << endl;
            }
            else
            {
                // Cálculo de salario
                salario = horasTrabajadas * precioHora;
                // Salida del salario calculado y nombre
                cout << nombre << ", su salario: $" << salario << endl;
            }
        }
        break;
    case 2: // Horas extras
        // Solicitar datos al usuario
        cout << "¿Cuantas horas extras ha trabajado?";
        cin >> horasExtras;
        // Cálculo horas extras
        salarioExtra = precioHorasExtra * horasExtras;
        // Salida del salario extra calculado y nombre
        cout << nombre << ", su salario extra $" << salarioExtra;

        break;
    case 3: // Servicio profesional
        // Reto agregar calculo para el salario por servicio profesional

    default:
        cout << "No existe esa opción";
        break;
    }

    return 0;
}
