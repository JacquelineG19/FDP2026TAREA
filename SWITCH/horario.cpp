//Horario de Clases
//Pide el día de la semana y muestra el horario de clases para ese día
#include <iostream>
using namespace std;

int main (){

    int dia;

//Pedir al usuario que seleccione el dia de la semana
cout << "Bienvenido" << endl;
cout << "Por favor seleccione el dia de la semana, para verificar su horario de clases" << endl;
cout << "1. Lunes" << endl;
cout << "2. Martes" << endl;
cout << "3. Miercoles" << endl;
cout << "4. Jueves" << endl;
cout << "5. Viernes" << endl;
cout << "6. Sabado" << endl;
cout << "7. Domingo" << endl;
cout << "Dia de la semana: ";
cin >> dia;

//Evaluando el horario de clase segun el dia de la semana
switch (dia)
{
case 1:
    cout << "Su Horario de Clases es: " << endl;
    cout << "ECCyT de 9:00 am a 11:00 am" << endl;
    cout << "FDP de 11:00 am a 1:00 pm" << endl;
    break;
case 2:
    cout << "Su Horario de Clases es: " << endl;
    cout << "Precalculo de 9:00 am a 11:00 am" << endl;
    cout << "Matematica Discreta de 11:00 am a 1:00 pm" << endl;
    break;
case 3:
    cout << "Su Horario de Clases es: " << endl;
    cout << "ECCyT de 9:00 am a 11:00 am" << endl;
    cout << "FDP de 11:00 am a 1:00 pm" << endl;
    break;
case 4:
    cout << "Su Horario de Clases es: " << endl;
    cout << "Precalculo de 9:00 am a 11:00 am" << endl;
    cout << "Matematica Discreta de 11:00 am a 1:00 pm" << endl;
    break;
case 5:
    cout << "Su Horario de Clases es: " << endl;
    cout << "Discusion Precalculo de 8:00 am a 9:00 am" << endl;
    cout << "Discusion Matematica Discreta de 10:00 am a 11:00 am" << endl;
    break;
case 6:
    cout << "Es sabado, dia de descanso" << endl;
    break;
case 7:
    cout << "Es domingo, dia de descanso" << endl;
    break;
default:
    cout << "Dato incorrecto, por favor ingrese una opcion valida" << endl;
    break;
    return 1;
}

return 0;
}

