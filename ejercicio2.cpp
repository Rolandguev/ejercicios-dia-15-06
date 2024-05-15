#include <iostream>
using namespace std;

int main()
{
    int edad;
    cout << "ingrese su edad ";
    cin >> edad;

    if (edad < 0 || edad > 100)
    {
        cout << "Error: edad incorrecta." << endl;
    }
    else if (edad <= 17)
    {
        cout << "No eres un adulto" << endl;
    }
    else if (edad >= 18)
    {
        cout << "eres un adulto" << endl;

    }
    return 0;
    
}