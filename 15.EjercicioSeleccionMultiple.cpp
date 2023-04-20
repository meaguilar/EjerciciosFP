#include <iostream>

using namespace std; 

int main(){

    int opcion;
    float n1, n2;
    float suma, resta, multiplicacion, division;

    cout<<"Ingresa una opción  1 - Suma, 2 - Resta, 3 - Multiplicación, 4-División";
    cin>>opcion;
    cout<<"Ingresa primer valor";
    cin>>n1;
    cout<<"Ingrese segundo valor";
    cin>>n2;

    switch (opcion)
    {
    case 1:
        //Suma 
        suma = n1 + n2;
        cout<<"El resultado de la suma es "<<suma;
        break;
    case 2:
        //Resta
        resta = n1 - n2;
        cout<<"El resultado de la resta es "<<resta;
        break;
    case 3:
        //Multiplicacion
        multiplicacion = n1*n2;
        cout<< "El resultado de la multiplicación es" <<multiplicacion;
        break;

        case 4:
        //Division
        division = n1/n2;
        cout<< "El resultado de la división es" <<division;
        break;

    default:
        cout<<"No existe la opción";
        break;
    }

    return 0;
}