#include <iostream>

using namespace std;

// Alias a un tipo de dato
typedef double decimal;

//Declaracion de conjunto de constantes enum
enum operaciones {SUMA = 15, RESTA, DIVISION, MULTIPLICACION};

// Declaración de un struct
struct EjemploStruct
{
    int a;    // 4
    double b; // 8
} ejm;

// Declaración de la union
union Ejemplo
{
    int a;
    double b;
} ej;

int main()
{
    /****************** Uso de typedef ********************/
    // Implementando el alias
    decimal var = 5;

    /****************** Uso de Union ********************/
    cout << sizeof(decimal);
    // Tamaño de una union
    cout << sizeof(Ejemplo) << endl;
    // Dirección de memoria de los miembros de la union
    cout << &(ej.a) << endl;
    cout << &(ej.b) << endl;
    // Inicializar un miembro de la union, solo se podra un miembro a la vez
    union Ejemplo ejemplo = {7};
    // Accediendo al miembro de la union quien esta usando la memoria de la union
    cout << ejemplo.a << endl;
    // En este punto b esta usando la memoria de la union
    ejemplo.b = 6;
    cout << ejemplo.b << endl;
    cout << ejemplo.a;

    /****************** Uso de struct  ********************/
    // Tamaño de un struct
    cout << sizeof(EjemploStruct) << endl;
    // Direccion de memoria de los miembros del struct
    cout << &(ejm.a) << endl;
    cout << &(ejm.b) << endl;

    /****************** Operador ternario ********************/
    int edad = 21;
    // Operador ternario
    (edad > 18) ? cout << "Eres mayor de edad" << endl : cout << "Eres menor de edad" << endl;

    /****************** Uso de for each en C++ ********************/
    int vector[3] = {2, 4, 6};
    // Auto para que detecte el tipo de dato o colocar el tipo de dato del arreglo
    for (auto i : vector)
    {
        cout << i << endl;
    }

    /************************Uso de enum ********************************/
    // Declaracion de variable enum
    enum operaciones op;
    // Asignando un valor a op
    op = RESTA;
    switch (op)
    {
    case 15:
        cout << "Has seleccionado suma";
        break;
    case 16:
        cout << "Has seleccionado resta" << RESTA;
        break;
    default:
        break;
    }
}