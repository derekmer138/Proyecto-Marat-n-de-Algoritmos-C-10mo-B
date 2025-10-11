#include <iostream>
using namespace std;

int main() {
    int edad;
    cout << "Ingrese la edad: ";
    cin >> edad;

    if (edad < 13)
        cout << "Nino.";
    else if (edad < 18)
        cout << "Joven.";
    else if (edad < 60)
        cout << "Adulto.";
    else
        cout << "Anciano.";
    return 0;
}
