// Cuenta Regresiva
// Solicita un número y muestra una cuenta regresiva hasta 0.

#include <iostream>
using namespace std;

int main()
{
    int num;

    // Solicitando numero al usuario
    cout << "Por favor ingrese un numero, para realizar la cuenta regresiva" << endl;
    cin >> num;

    // Ciclo while para la cuenta regresiva
    while (num >= 0)
    {
        cout << "Numero: " << num << endl;
        num--;
    }

    cout << "Cuenta regresiva finalizada" << endl;

    return 0;
}