//14. Invertir un Número
//Solicita un número y muestra su inverso (Ejemplo: 123 → 321).

#include <iostream>
using namespace std;

int main (){

    int n, inverso = 0, residuo;

    cout << "Por favor, ingrese un  numero para mostrar su inverso: ";
    cin >> n;

    for (n; n > 0; n /= 10)
    {
      
        residuo = n % 10;
        inverso = (inverso * 10) + residuo;
     
    }

    cout << "El numero invertido es: " << inverso << endl;
    

    return 0;
}