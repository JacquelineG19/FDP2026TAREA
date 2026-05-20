//Zodíaco según el Mes: Solicita un mes de nacimiento y muestra el signo zodiacal correspondiente.

#include <iostream>
using namespace std;

int main () {

int mes;

//Pedir al usuario que seleccione el numero correspondiente a su mes de nacimiento
cout << "Bienvenido" << endl;
cout << "Por favor seleccione su mes de nacimiento, para saber su signo zodical" << endl;
cout << "1. Enero" << endl;
cout << "2. Febrero" << endl;
cout << "3. Marzo" << endl;
cout << "4. Abril" << endl;
cout << "5. Mayo" << endl;
cout << "6. Junio" << endl;
cout << "7. Julio" << endl;
cout << "8. Agosto" << endl;
cout << "9. Septiembre" << endl;
cout << "10. Octubre" << endl;
cout << "11. Noviembre" << endl;
cout << "12. Diciembre" << endl;
cout << "13. Salir" << endl;
cout << "Mes de nacimiento: ";
cin >> mes;


//Evaluar el signo zodiacal del usuario segun su mes de nacimiento
switch (mes)
{
case 1:
    cout << "Su signo zodiacal es Acuario" << endl;
    break;
case 2:
    cout << "Su signo zodiacal es Piscis" << endl;
    break;
case 3:
    cout << "Su signo zodiacal es Aries" << endl;
    break;
case 4:
    cout << "Su signo zodiacal es Tauro" << endl;
    break;
case 5:
    cout << "Su signo zodiacal es Geminis" << endl;
    break;
case 6:
    cout << "Su signo zodiacal es Cancer" << endl;
    break;
case 7:
    cout << "Su signo zodiacal es Leo" << endl;
    break;
case 8:
    cout << "Su signo zodiacal es Virgo" << endl;
    break;
case 9:
    cout << "Su signo zodiacal es Escorpio" << endl;
    break;
case 10:
    cout << "Su signo zodiacal es Libra" << endl;
    break;
case 11:
    cout << "Su signo zodiacal es Sagitario" << endl;
    break;
case 12:
    cout << "Su signo zodiacal es Capricornio" << endl;
    break;

default:
    cout << "Dato incorrecto" << endl;
    break;
    return 1;
}

return 0;

}
