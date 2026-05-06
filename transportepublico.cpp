//Sistema de Transporte Público
//Pide un tipo de transporte (1 = Bus, 2 = Metro, 3 = Taxi) y muestra el costo estimado de un viaje.

#include <iostream>
using namespace std;

int main () {

int tipo;

//Pidiendo al usuario que seleccione un tipo de transporte
cout << "Bienvenido" << endl;
cout << "Por favor seleccione el tipo de transporte, para mostar el costo estimado del viaje" << endl;
cout << "1. Bus" << endl;
cout << "2. Metro" << endl;
cout << "3. Taxi" << endl;
cout << "Opcion: ";
cin >> tipo;

switch (tipo)
{
case 1:
    cout << "El costo estimado para viajar en Bus es de 0.50 ctv" << endl;
    break;
case 2:
    cout << "El costo estimado para viajar en Metro es de 0.85 ctv" << endl;
    break;
case 3:
    cout << "El costo estimado para viajar en Taxi es de 3.50 dolares" << endl;
    break;
default:
    cout << "Dato incorrecto, ingrese una opcion valida" << endl;
    break;
    return 1;
}

return 0;
}
