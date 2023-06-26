#include <iostream>

using namespace std;

void miFuncion1(int *);
void miFuncion2(int &);

int var = 45;

int main()
{
    // Declaración de una variable tipo entero y asignacion a una variable
    int a = 10;
    // Declaracion de puntero
    int *p, *c;
    // Asignando valor al puntero
    p = &a;
    // Un puntero puede apuntar a otro puntero
    c = p;
    *p = 25;
    // Imprimiendo la direccion de memoria de la variable a
    cout << p << endl;
    // Imprimiendo el valor de a
    cout << *p << endl;
    // Imprimiendo el valor de p
    cout << c << endl;

    // Llamando a la función
    miFuncion1(&a);
    miFuncion2(a);
    cout << "Nuevo valor de a " << *p;

    return 0;
}

// Paso de parametro por referencia
//  Puntero como argumento
void miFuncion1(int *b)
{
    cout << "El valor es: " << *b << endl;
    *b = 20;
    cout << "El valor es: " << *b << endl;
}

// Referencia
void miFuncion2(int &b)
{
    cout << "El valor es: " << b << endl;
    b = 20;
    cout << "El valor es: " << b << endl;
}