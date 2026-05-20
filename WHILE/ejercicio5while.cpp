// Serie de Fibonacci
// Muestra los primeros N términos de la serie de Fibonacci utilizando while.

#include <iostream>
using namespace std;

int main()
{

    int n, contador = 0, a = 0, b = 1, suma = 0;

    cout << "Bienvenido" << endl;
    cout << "Le mostraremos los terminos de la serie de Fibonacci" << endl;
    cout << "Por favor, ingrese la cantidad de terminos que desea saber: ";
    cin >> n;

    while (contador < n)
    {
        cout << a << endl;
        suma = a + b;
        a = b;
        b = suma;
        contador++;
    }

    return 0;
}