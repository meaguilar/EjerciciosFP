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
    bool respuestaUsuario = 0;

    // Solicitando datos al usuario
    cout << "Ingrese su nombre";
    cin>>nombre;
    cout << "Ingrese las horas trabajadas";
    cin >> horasTrabajadas;

    // Condición para evaluar si el valor ingresado es númerico
    if (horasTrabajadas == false)
    {
        cout << "Lo siento, el valor ingresado no es númerico";
    }
    else
    {
        // Condición para evaluar la cantidad de horas trabajadas
        if (horasTrabajadas <= 44)
        {
            // Cálculo de salario
            salario = horasTrabajadas * precioHora;
            // Salida del salario calculado y nombre
            cout << nombre << ", su salario $" << salario << endl;
        }
        else
        {
            // Cálculo de salario
            salario = 44 * precioHora + 1.5 * precioHora * (horasTrabajadas - 44);
            // Salida del salario calculado y nombre
            cout << nombre << ", su salario $" << salario << endl;
        }

        // Calcula horas extras
        cout << "¿Ha trabajado horas extras? 1 - Si horas Extras, 0 - No horas extras";
        cin >> respuestaUsuario;
        // 1 - SI HORAS EXTRAS  0 - NO HORAS EXTRAS
        if (respuestaUsuario == 1)
        {
            // Solicitud de datos
            cout << "¿Cuantas horas extras ha trabajado?";
            cin >> horasExtras;
            // Cálculo de salario con horas extras
            salarioExtra = precioHorasExtra * horasExtras;
            cout << nombre << ", su salario extra $" << salarioExtra;
        }
    }

    return 0;
}