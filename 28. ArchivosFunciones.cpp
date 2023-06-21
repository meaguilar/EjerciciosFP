#include <iostream>
#include <fstream>

using namespace std;

void CrearFichero();
void LeerFichero();

int main()
{

    CrearFichero();
    LeerFichero();
    return 0;
}

void CrearFichero()
{
    // Crea y abre un archivo de texto
    // ofstream Fichero("prueba.txt");
    // app permite ingresar al final del texto existen
    ofstream fichero("prueba.txt", ios::out | ios::app);
    //Metodo para comprobar si se crea el archivo
    if (fichero.fail() == true)
    {
        cout << "No se logro crear el archivo";
        return;
    }
    else
    {
        // Insertar texto al fichero
        fichero << "Hola prueba ...!!! \n";
        // Cerrar la conexion con el fichero
        fichero.close();
    }
}

void LeerFichero()
{
    // Crear una variable para la salida del texto
    string texto;
    //ifstream fichero("prueba.txt");
    ifstream fichero("prueba.txt", ios::in);
    //Leer el fichero 
    while (getline(fichero, texto))
    {
        // Salida
        cout << texto;
    }
    // Cerrar la conexion con el fichero
    fichero.close();

    
}
