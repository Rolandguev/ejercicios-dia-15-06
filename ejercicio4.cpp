#include <iostream>
using namespace std;
int main()
{

    float corto1, corto2, parcial1, parcial2, laboratorio, proyecto;
    string nombre;
    cout << "ingrese su nombre: ";
    cin >> nombre;

    cout << "ingrese la nota del corto 1: ";
    cin >> corto1;
    cout << "ingrese la nota del corto 2: ";
    cin >> corto2;
    cout << "ingrese la nota del parcial 1: ";
    cin >> parcial1;
    cout << "ingrese la nota del parcial 2: ";
    cin >> parcial2;
    cout << "ingrese la nota del laboratorio: ";
    cin >> laboratorio;
    cout << "ingrese la nota del proyecto: ";
    cin >> proyecto;

    float promedio = (corto1 * 0.10) + (corto2 * 0.10) + (parcial1 * 0.15) + (parcial2 * 0.20) + (laboratorio * 0.20) + (proyecto * 0.25);

    cout << "promedio final: " << promedio <<  endl;

    if (promedio >= 6)
    {
        cout << "felicidades, " << nombre << "Felicitaciones a pasado la materia " <<  endl;
    }
    else
    {
        cout << "lo siento " << nombre << " no a pasado la materia " <<  endl;
    }
    
    return 0;
} 
