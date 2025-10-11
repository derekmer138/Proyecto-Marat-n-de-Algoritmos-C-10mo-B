#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;

    if (n >= 1 && n <= 100)
        cout << "El numero esta entre 1 y 100.";
    else
        cout << "Fuera del rango.";
    return 0;
}
