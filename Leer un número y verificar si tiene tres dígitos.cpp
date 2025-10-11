#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;

    if ((n >= 100 && n <= 999) || (n <= -100 && n >= -999))
        cout << "Tiene tres digitos.";
    else
        cout << "No tiene tres digitos.";
    return 0;
}
