#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Ingrese dos numeros: ";
    cin >> a >> b;

    int suma = a + b;
    if (suma > 0) cout << "Suma positiva.";
    else if (suma < 0) cout << "Suma negativa.";
    else cout << "Suma igual a cero.";
    return 0;
}
