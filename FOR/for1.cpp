// 4. Tabla de Multiplicar
//Pide un número al usuario y muestra su tabla de multiplicar del 1 al 10.

#include <iostream>
using namespace std;

int main (){

    int n, multiplicacion;

    cout << "Por favor ingrese la tabla de multiplicar que desea saber: ";
    cin >> n;

    for (int i = 1; i <=  10; i++) {

    cout << n << " x " << i << " = " << n * i << endl;
        

    }

return 0;
}