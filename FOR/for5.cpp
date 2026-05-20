//12. Cálculo de Potencia
//Pide dos números base y exponente, y calcula base^exponente sin usar la función pow().

#include <iostream>
using namespace std;

int main () {

    int b, n, calculo = 1;

    cout << "CALCULADORA DE POTENCIA" << endl;
    cout << "Por favor ingrese el valor de la base: ";
    cin >> b;

    cout << "Por favor ingrese el valor del exponenete: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        calculo *= b;
        
    }

    cout << "El resultado es: " << calculo << endl;

    return 0;
}