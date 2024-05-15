#include <iostream>
using namespace std;

int main()
{

    float angulo;
    cout << "ingrese algun angulo: ";
    cin >> angulo;

     if (angulo < 90)
     {
         cout << "el angulo es agudo ";
     }
    else if (angulo > 90)
     {
         cout << "el angulo es obtuso ";
     }
    else if (angulo = 90)
     {
         cout << "el angulo es recto ";
     }

     
    return 0;
}
