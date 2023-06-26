#include <iostream>
using namespace std;

struct Persona
{
    string nombre;
    int edad;
} persona;

int main()
{
    // Declarando un puntero tipo struct
    struct Persona *ptr_persona;

    // Puntero apunta a estructura
    ptr_persona = &persona;

    // Accediendo a los miembros desde punteros
    ptr_persona->nombre;
    ptr_persona->edad;

    return 0;
}