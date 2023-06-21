#include <iostream>
using namespace std;

//Estructura anidada a estructura Album
struct Disquera
{
    string nombre;
    string pais;
    int aFundacion;
};

//Estructura principal
struct Album
{
    string nombreCantante;
    //arreglos como campos o miembros de la estructura
    string nombreCancion[2];
    int numeroPista[2];
    float duracion[2]; 
    int aPublicacion;
    int antiguedadAlbum;
    // variable para anidar
    struct Disquera disco;
} album[3]; //Arreglo de estructuras

//Declaración de las funciones
void SolicitarDatos();
void CalcularAntiguedad(struct Album a[]);
void Imprimir(struct Album a[]);
int CalcularCantidadAlbumMayor(struct Album a[]);
void BuscarAlbum(struct Album a[], string cantante);

int main()
{
    string cantante;
    SolicitarDatos();
    CalcularAntiguedad(album);
    cout << "---------------------------" << endl;
    cout << "Datos ingresado del album " << endl;
    Imprimir(album);
    cout << "Cantidad de album mayor a 10 anos: " << CalcularCantidadAlbumMayor(album) << endl;
    cout << "Ingresa el cantante a buscar ";
    cin >> cantante;
    cout << "Resultados de busqueda";
    BuscarAlbum(album, cantante);

    return 0;
}

//Definición de las funciones 

void SolicitarDatos()
{
    //Manejando el arreglo de estructuras
    for (int i = 0; i < 3; i++)
    {
        cout << "Ingresa nombre de cantante";
        cin >> album[i].nombreCantante;
        //Manejando los arreglos como miembros o campos de la estructura
        for (int j = 0; j < 2; j++)
        {
            cout << "Ingresa nombre de la cancion";
            cin >> album[i].nombreCancion[j];
            cout << "Ingrese el numero de pista";
            cin >> album[i].numeroPista[j];
            cout << "Ingrese la duración de la cancion";
            cin >> album[i].duracion[j];
        }
        cout << "Ingresa fecha(Anio) de publicación";
        cin >> album[i].aPublicacion;
        cout << "Ingresa el nombre de la disquera";
        cin >> album[i].disco.nombre;
    }
}

void CalcularAntiguedad(struct Album a[])
{
    for (int i = 0; i < 3; i++)
    {
        //Almacenara la diferencia en el campo antiguedadAlbum
        a[i].antiguedadAlbum = 2023 - a[i].aPublicacion;
    }
}

void Imprimir(struct Album a[])
{
    for (int i = 0; i < 3; i++)
    {
        cout << "-------------------------------------------------------" << endl;
        cout << "Cantante " << a[i].nombreCantante << endl;
        for (int j = 0; j < 2; j++)
        {
            cout << "Cancion: " << a[i].nombreCancion[j] << endl;
            cout << "Pista: " << a[i].numeroPista[j] << endl;
            cout << "Duracion: " << a[i].duracion[j] << endl;
        }

        cout << "Anio publicacion: " << a[i].aPublicacion << endl;
        cout << "Antiguedad de Album: " << a[i].antiguedadAlbum << endl;
        cout << "Disquera: " << a[i].disco.nombre << endl;

        cout << "-------------------------------------------------------" << endl;
    }
}

//Una función no puede retornar un arreglo.
int CalcularCantidadAlbumMayor(struct Album a[])
{
    int cantidad;
    for (int i = 0; i < 3; i++)
    {
        if (album[i].antiguedadAlbum >= 10)
        {
            cantidad++;
            // cantidad += 1;
            // cantidad = cantidad + 1;
        }
    }
    return cantidad;
}

void BuscarAlbum(struct Album a[], string cantante)
{

    for (int i = 0; i < 3; i++)
    {   
        //Comparando el nombre del cantante ingresado por el usuario y el nombre del cantante existente
        if (cantante == a[i].nombreCantante)
        {
            cout << "Cantante " << a[i].nombreCantante << endl;
            for (int j = 0; j < 2; j++)
            {
                cout << "Cancion: " << a[i].nombreCancion[j] << endl;
                cout << "Pista: " << a[i].numeroPista[j] << endl;
                cout << "Duracion: " << a[i].duracion[j] << endl;
            }

            cout << "Anio publicacion: " << a[i].aPublicacion << endl;
            cout << "Antiguedad de Album: " << a[i].antiguedadAlbum << endl;
            cout << "Disquera: " << a[i].disco.nombre << endl;
        }
    }
}
