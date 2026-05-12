//Suma de Números
//Pide al usuario números hasta que ingrese 0. Luego, muestra la suma de todos los números ingresados.

#include <iostream>
using namespace std;

int main () {
    int num, suma = 0;

    //Pidiendo un numero al usuario
    cout << "SUMA DE NUMEROS" <<endl;
    cout << "Por favor ingrese un numero: ";
    cin >> num;

    //While para los numeros ingresados hasta que sea 0 y la suma de total de los datos ingresados
    while (num != 0)
    {
        suma = suma + num;

        cin >> num;

    }
    
    //Se muestra la suma total de los datos ingresados
    cout << "La suma de los numeros ingresados es: " << suma << endl;
    return 0;
}