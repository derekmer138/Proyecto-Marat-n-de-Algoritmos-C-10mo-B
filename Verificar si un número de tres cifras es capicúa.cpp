#include <iostream>
using namespace std;

int main() {
    int n, centena, decena, unidad;
    cout << "Ingrese un numero de tres cifras: ";
    cin >> n;

    centena = n / 100;
    decena = (n / 10) % 10;
    unidad = n % 10;

    if (centena == unidad)
        cout << "Es capicua.";
    else
        cout << "No es capicua.";
    return 0;
}
