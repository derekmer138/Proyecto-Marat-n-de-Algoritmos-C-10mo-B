#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Ingrese tres lados: ";
    cin >> a >> b >> c;

    if (a + b > c && a + c > b && b + c > a)
        cout << "Forman un triangulo valido.";
    else
        cout << "No forman un triangulo.";
    return 0;
}
