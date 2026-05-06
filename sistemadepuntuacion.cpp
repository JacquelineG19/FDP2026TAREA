//Sistema de Puntuación de Videojuegos
//Pide el puntaje de un jugador (1-5 estrellas) y muestra un mensaje acorde a su desempeño.

#include <iostream>
using namespace std;

int main () {

int estrellas;

//Pidiendo al jugador que seleccione su puntaje
cout << "Bienvenido" << endl;
cout << "Por favor seleccione su puntaje, para mostrar su desempeno" << endl;
cout << "1. 1 estrella" << endl;
cout << "2. 2 estrellas" << endl;
cout << "3. 3 estrellas" << endl;
cout << "4. 4 estrellas" << endl;
cout << "5. 5 estrellas" << endl;
cout << "Opcion: ";
cin >> estrellas;

//Evaluando el desempeño
switch (estrellas)
{
case 1:
    cout << "Su desempeno fue bastante malo" << endl;
    break;
case 2:
    cout << "Su desempeno fue malo" << endl;
    break;
case 3:
    cout << "Su desempeno fue bueno" << endl;
    break;
case 4:
    cout << "Su desempeno fue bastante bueno" << endl;
    break;
case 5:
    cout << "Su desempeno fue Excelente" << endl;
    break;

default:
    cout << "Dato incorrecto, por favor ingrese una opcion valida" << endl;
    break;
    return 1;
}

return 0;
}
