#include <iostream>
using namespace std;

// Declaración de la estructura
struct Alumno
{  // Campos o miembros de la estructura
    string nombre;          // 32 bytes
    // char nombre[25];     // 25 bytes
    int anioNac;            // 4 bytes
    float notas[3];         // 12 bytes
} alumno[5];        // arreglo de estructuras

int main()
{
    // Determinar el tamaño en bytes de la estructura
    sizeof(Alumno);
    // Determinar el numero de elementos de una estructura
    sizeof(alumno) / sizeof(alumno[0]);

    // Declaracion de una variable tipo struct
    struct Alumno alumno1;
    Alumno alumno2;

    // Inicializar los valores de los miembros desde variables
    alumno1.nombre = "Karla";
    alumno2.nombre = "Juan";
    alumno1.anioNac = 2003;
    alumno2.anioNac = 2005;
    alumno1.notas[0] = 10;
    alumno1.notas[1] = 8;

    // Inicializar todos los miembros de la estructura desde variable
    alumno1 = {
        "Darlyn",
        2003,
        {8.5, 9, 10}};

    // Solicitando valores de miembros de estructura desde arreglo de estructuras
    for (int i = 0; i < 5; i++)
    {
        cout << "Ingrese el nombre";
        cin >> alumno[i].nombre;
        cout << "Ingrese el año de nacimiento";
        cin >> alumno[i].anioNac;
        // Solicitando valores de arreglo notas de una estructura desde arreglo de estructuras
        for (int j = 0; j < 3; j++)
        {
            cout << "Ingresa la nota";
            cin >> alumno[i].notas[j];
        }
    }

    // Imprimir nombre y año de nacimiento de alumno1
    cout << alumno1.nombre << " - " << alumno1.anioNac << endl;

    // Imprimir un arreglo de estructuras
    for (int i = 0; i < 5; i++)
    {
        cout << "Nombre " << alumno[i].nombre << endl;
        cout << "Año de nacimiento " << alumno[i].anioNac << endl;
        for (int j = 0; j < 3; j++)
        {
            cout << "Nota " << j << " - " << alumno[i].notas[j] << endl;
        }
    }

    return 0;
}