#include <iostream>

using namespace std;

// Notación a utilizar para funciones Pascal, para variables Camel

/* Tres partes importantes para crear funciones con o sin parámetros
1. Declarar la función fuera del main en la parte superior  .... tipodedato nombreFuncion();
2. Definir la función  fuera del main en la parte inferior ..... tipodedato NombreFunción(){ código}
3. Llamar (invocar) a la función  dentro del main ........ NombreFunción() */

/* Pueden existir 2 o más funciones con el mismo nombre lo que cambia es la cantidad y parametros,
a este punto se le conoce como sobrecarga de funciones */

// 1. Declaracion de la funcion o prototipo de la funcion
// Declaración de la función no parametrizada (sin parámetros)
float DescuentoRenta();
// Declaración de la función parametrizada (con parámetros)
float DescuentoRenta(float salario);

int main()
{

    // 3.LLamado a la función sin parámetros
    DescuentoRenta();

    /*     Importante, los parámetros son los valores de entrada necesarios para que se realice el proceso indicado
        en la función */

    // Variable local, la cual será el parámetro (la entrada) para la función
    float salario;
    cout << "Ingrese su salario";
    cin >> salario;

    // Llamado a la función con parámetros
    cout << "El descuento de renta es " << DescuentoRenta(salario);
    return 0;
}

// 2. Definicion de la función no parametrizada (sin parámetros)
// En esta función el valor del salario ya esta directamente dentro de la función
float DescuentoRenta()
{
    float descuento;
    float salario = 1000;
    // Proceso
    descuento = salario * 0.35;
    // Valor a retornar es el valor calculado después del proceso
    return descuento;
}

// 2. Definición de la función parametrizada (con parámetros0)
// En esta función el valor del salario será ingresado por el usuario
float DescuentoRenta(float salario)
{
    // Proceso
    float descuento = salario * 0.35;
    // Valor a retornar es el valor calculado después del proceso
    return descuento;
}