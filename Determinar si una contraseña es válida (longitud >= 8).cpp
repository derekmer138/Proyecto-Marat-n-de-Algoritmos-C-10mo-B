#include <iostream>
#include <string>
using namespace std;

int main() {
    string pass;
    cout << "Ingrese su contraseña: ";
    cin >> pass;

    if (pass.length() >= 8)
        cout << "Contraseña valida.";
    else
        cout << "Contraseña demasiado corta.";
    return 0;
}
