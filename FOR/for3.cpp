//19. Triángulo de Asteriscos
//Imprime un triángulo de altura N usando *.

#include <iostream>
using namespace std;

int main (){

    int n;
    cout << "Ingrese la altura del triangulo que desea: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (n-i); j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= (2*i-1); k++)
        {
            cout << "*";
        }
        
        cout << endl;
    }
    


    return 0;
}