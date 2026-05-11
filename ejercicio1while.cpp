//Suma de Números Pares
//Pide un número N al usuario y usa while para calcular la suma de los números pares desde 1 hasta N.

#include <iostream>
using namespace std;

int main () {
    int n, y = 1, suma = 0;
    cout << "Por favor ingrese un numero" << endl;
    cin >> n;

    while (y <= n){
    if ( y % 2 == 0)
    {
        suma = suma+y;
    }
    y++;
    
    }
    
    cout  << suma << endl;
    return 0;
}