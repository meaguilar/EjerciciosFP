#include <iostream>
#include <string>
// Libreria para archivos
#include <fstream>

using namespace std;

// Estructura principal
struct Persona
{
    string dui;
    string nombre;
    string telefono;
    // Arreglo de estructuras
} persona[3];

// Declaración de funciones
void AgregarPersonaFichero();
void ImprimirFichero();
bool Comprobar(string _dui);

int main()
{
    int opc;
    string _dui;

    cout << "1 - Buscar DUI, 2 - Agregar Persona, 3 - Imprimir";
    cin >> opc;
    cin.ignore();
    switch (opc)
    {
    case 1:
        cout << "Buscar, ingrese el numero de DUI";
        cin >> _dui;
        cout << "Si existe 1, No existe 0 - Valor de busqueda: " << Comprobar(_dui);
        break;
    case 2:
        AgregarPersonaFichero();
        break;
    case 3:
        ImprimirFichero();
        break;
    default:
        cout << "Opción inválida";
        break;
    }
    return 0;
}

// Definición de la funciones

void AgregarPersonaFichero()
{
    // Declaración de una variable tipo ofstream
    ofstream ArchivoPersona;
    // Creando el archivo y aplicando los modos de apertura de escritura y añadir
    ArchivoPersona.open("InformacionPersona.txt", ios::out | ios::app);

    // Solicitando los datos en el arreglo de estructuras
    for (int i = 0; i < 3; i++)
    {
        cout << "Ingrese el DUI ";
        getline(cin, persona[i].dui);
        cout << "Ingrese el nombre ";
        getline(cin, persona[i].nombre);
        cout << "Ingrese el numero de telefono ";
        getline(cin, persona[i].telefono);
    }

    // Comprobando si se crea el archivo
    if (ArchivoPersona.fail() == true)
    {
        cout << "Error al crear el archivo";
        return;
    }
    else
    {
        // Agregando la informacion del struct al archivo.txt
        //  ArchivoPersona.write((char *) &persona, sizeof(persona));
        for (int i = 0; i < 3; i++)
        {
            ArchivoPersona << persona[i].dui << " - " << persona[i].nombre << " -  " << persona[i].telefono << "\n";
        }

        // Cerrando la conexión
        ArchivoPersona.close();
    }
}

void ImprimirFichero()
{
    // Crear una variable para la salida del texto
    string texto;
    ifstream ArchivoPersona;
    ArchivoPersona.open("InformacionPersona.txt", ios::in);

    if (ArchivoPersona.is_open())
    {
        while (getline(ArchivoPersona, texto))
        {
            // Salida
            cout << texto << endl;
        }
        // Cerrar conexion
        ArchivoPersona.close();
    }
    else
    {
        cout << "Error al abrir el archivo" << endl;
    }
}

bool Comprobar(string _dui)
{
    ifstream ficheroLectura("InformacionPersona.txt", ios::in);
    string dui;

    ficheroLectura >> dui;
    // Leer hasta llegar al final
    while (!ficheroLectura.eof())
    {
        ficheroLectura >> dui;
        if (dui == _dui)
        {
            cout << "✋ DUI ya existe";
            ficheroLectura.close();
            return false;
        }
        ficheroLectura >> dui;
    }
    ficheroLectura.close();

    return true;
}