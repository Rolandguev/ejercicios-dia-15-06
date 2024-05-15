#include <iostream>
using namespace std;
int main()
{
     float angulo1, angulo2, angulo3;
     cout << "ingrese el primer angulo: ";
     cin >> angulo1;

     cout << "ingrse el segundo angulo: ";
     cin >> angulo2;

     angulo3 = 180 - (angulo1 + angulo2);

     cout << "el tercer angulo es: " << angulo3 << endl;

     if (angulo1 + angulo2 > 180)
    {
        cout << " datos incorretos ";
    }
    
     return 0;
}