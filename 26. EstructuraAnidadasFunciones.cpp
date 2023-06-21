#include <iostream>
using namespace std;

// Estructura anidada
struct Residencia
{
    string municipio;
    string departamento;
};

// Estructura principal 
struct Alumno
{
    string nombre;  // 32 bytes
    int fechaNac;   // 4 bytes
    float notas[3]; //  4* 3 = 12 bytes
    int edad;       // 4 bytes
    struct Residencia residencia;

} alumno[2];

//Declaración de las funciones 
void SolicitarDatos();
void CalcularEdad(struct Alumno a[]);
void Imprimir(struct Alumno a[]);
float CalcularPromedioGrupo(struct Alumno a[]);
int ObtenerNumeroStructuras();
int obtenerNumeroElementosArreglo();

int main()
{
    // El tamaño en bytes de la estructura es el total de los pesos individuales de cada miembro

    // sizeof(Alumno);

    // Obtener el número de elementos de la estructura
    // sizeof(alumno) / sizeof(alumno[0]);

    // Obtener el número de elementos de un arreglo miembro de una estructura
    // sizeof(alumno[0].notas)/sizeof(float);

    // Llamada a la función sin parámetros
    SolicitarDatos();

    cout << "--------------------- Datos ingresados----------------------" << endl;
    // Llamada a funciones con parámetro de arreglo de estructuras.
    CalcularEdad(alumno);
    Imprimir(alumno);
    cout << "El promedio del grupo es: " << CalcularPromedioGrupo(alumno);

    return 0;
}

// Función para solicitar datos
void SolicitarDatos()
{
    // Solicitud de los datos
    for (int i = 0; i < ObtenerNumeroStructuras(); i++)
    {
        cout << "Ingrese el nombre completo: ";
        cin >> alumno[i].nombre;
        cout << "Ingresa el año de nacimiento: ";
        cin >> alumno[i].fechaNac;
        // Solicitud de los datos para el arreglo notas
        for (int j = 0; j < obtenerNumeroElementosArreglo(); j++)
        {
            cout << "Ingresa la nota" << j + 1 << " : ";
            cin >> alumno[i].notas[j];
        }
        cout << "Ingrese el municipio de residencia";
        cin >> alumno[i].residencia.municipio;
        cout << "Ingrese el departamento de residencia";
        cin >> alumno[i].residencia.departamento;
    }
}

// Función Calcular Edad
void CalcularEdad(struct Alumno a[])
{ // Recorre el arreglo de estructuras
    for (int i = 0; i < ObtenerNumeroStructuras(); i++)
    {
        // Almacena el resultado de la edad en el miembro edad de la estructura
        a[i].edad = 2023 - a[i].fechaNac;
    }
}
// Función para Imprimir datos
void Imprimir(struct Alumno a[])
{
    // Impresión de datos del arreglo de estructuras
    for (int i = 0; i < ObtenerNumeroStructuras(); i++)
    {
        cout << "Nombre: " << a[i].nombre << endl;
        cout << "Año de nacimiento: " << a[i].fechaNac;
        cout << " Edad: " << a[i].edad << endl;
        // Recorre el arreglo notas que es miembro de la estructura
        for (int j = 0; j < obtenerNumeroElementosArreglo(); j++)
        {
            cout << "Nota" << j + 1 << " - " << a[i].notas[j] << endl;
        }
        cout<<"Municipio:" << alumno[i].residencia.municipio;
        cout<<"Departamento: " << alumno[i].residencia.departamento;
    }
}

// Función calcular el promedio general de los alumnos
float CalcularPromedioGrupo(struct Alumno a[])
{
    float sumaPromedioAlumno = 0, promedioAlumno = 0, promedioGeneral = 0;
    // Recorre el arreglo de estructuras
    for (int i = 0; i < ObtenerNumeroStructuras(); i++)
    {
        // Recorre el arreglo notas que es miembro de la estructura
        for (int j = 0; j < obtenerNumeroElementosArreglo(); j++)
        {
            sumaPromedioAlumno += a[i].notas[j];
        }
        promedioAlumno = sumaPromedioAlumno / 3;
    }
    promedioGeneral = promedioAlumno / ObtenerNumeroStructuras();
      
    return promedioGeneral;
}

// Función para obtener el número de estructuras de un arreglo de estructuras
int ObtenerNumeroStructuras()
{
    return (sizeof(alumno) / sizeof(alumno[0]));
}

// Función para obtener el número de elementos de un arreglo como miembro de una estructura
int obtenerNumeroElementosArreglo()
{
    return (sizeof(alumno[0].notas) / sizeof(float));
}
