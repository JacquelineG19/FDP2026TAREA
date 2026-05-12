// Menú Interactivo
// Crea un menú que se repita hasta que el usuario elija la opción de salir.

#include <iostream>
using namespace std;

int main()
{

    int opcion;

    // Usando Do While para el menu interactivo hasta que seleccione la opcion salir
    do
    {
        cout << "Bienvenido" << endl;

        // Pidiendo al usuario que seleccione una opcion
        cout << "Por favor seleccione del menu el tipo de transporte, para mostar el costo estimado del viaje" << endl;
        cout << "MENU" << endl;
        cout << "1. Bus" << endl;
        cout << "2. Metro" << endl;
        cout << "3. Taxi" << endl;
        cout << "4. Salir" << endl;
        cout << "Opcion: ";
        cin >> opcion;

        // Evaluando el costo del viaje
        switch (opcion)
        {
        case 1:
            cout << "El costo estimado para viajar en Bus es de 0.50 ctv" << endl;
            break;
        case 2:
            cout << "El costo estimado para viajar en Metro es de 0.85 ctv" << endl;
            break;
        case 3:
            cout << "El costo estimado para viajar en Taxi es de 3.50 dolares" << endl;
            break;
        case 4:
            cout << "Saliendo del programa, Hasta Pronto" << endl;
            break;
        default:
            cout << "Dato incorrecto, ingrese una opcion valida" << endl;
            break;
        }

    } while (opcion != 4);

    return 0;
}
