//Clasificación de Películas por Edad
//Pide la edad de un usuario y usa switch para recomendar una categoría de películas (G, PG, PG-13, R).

#include <iostream>
using namespace std;

int main (){

    int edad;

    cout << "Bienvenido" << endl;
    cout << "Por favor ingrese su edad para recomendar una categoria de peliculas" << endl;
    cout << "edad: ";
    cin >> edad;

switch (edad)
{
case 1:
    cout << "La categoria de pelicula que se recomienda es G" << endl;
    break;
case 2:
    cout << "La categoria de pelicula que se recomienda es G" << endl;
    break;
case 3:
    cout << "La categoria de pelicula que se recomienda es G" << endl;
    break;
case 4:
    cout << "La categoria de pelicula que se recomienda es G" << endl;
    break;
case 5:
    cout << "La categoria de pelicula que se recomienda es G" << endl;
    break;
case 6:
    cout << "La categoria de pelicula que se recomienda es G" << endl;
    break;
case 7:
    cout << "La categoria de pelicula que se recomienda es G" << endl;
    break;
case 8:
    cout << "La categoria de pelicula que se recomienda es G" << endl;
    break;
case 9:
    cout << "La categoria de pelicula que se recomienda es G" << endl;
    break;
case 10:
    cout << "La categoria de pelicula que se recomienda es G" << endl;
    break;
case 11:
    cout << "La categoria de pelicula que se recomienda es G y PG" << endl;
    break;
case 12:
    cout << "La categoria de pelicula que se recomienda es G y PG" << endl;
    break;
case 13:
    cout << "Las categorias de peliculas que se recomienda son G, PG y PG-13" << endl;
    break;
case 14:
    cout << "Las categorias de peliculas que se recomienda son G, PG y PG-13" << endl;
    break;
case 15:
    cout << "Las categorias de peliculas que se recomienda son G, PG Y PG-13" << endl;
    break;
case 16:
    cout << "Las categorias de peliculas que se recomienda son G, PG Y PG-13" << endl;
    break;
case 17:
    cout << "Las categorias de peliculas que se recomienda son G, PG, PG-13 y R" << endl;
    break;

default:
    cout << "Usted puede ver cualquier categoria de peliculas: G, PG, PG-13 Y R" << endl;
    break;

}

return 0;
}