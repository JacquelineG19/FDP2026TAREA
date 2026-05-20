//10. Serie de Fibonacci
//Muestra los primeros N términos de la serie de Fibonacci.

#include <iostream>
using namespace std;

int main () {

    int n,a = 0, b = 1, suma = 0;
    
    cout << "Ingrese la cantidad de numeros que desea saber: ";
    cin >> n;

    for ( int i = 1; i <= n; i++){

        cout << a << endl;
        suma = a + b;
        a = b;
        b = suma;

    }



    return 0;
}