#include <iostream>
using namespace std;

int main() {
    int edad;
    cout << "Ingrese su edad: ";
    cin >> edad;

    if (edad >= 16)
        cout << "Puede votar.";
    else
        cout << "No puede votar.";
    return 0;
}
