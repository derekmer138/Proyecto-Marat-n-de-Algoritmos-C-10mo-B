#include <iostream>
using namespace std;

int main() {
    float a, b, c;
    cout << "Ingrese tres numeros: ";
    cin >> a >> b >> c;

    float prom = (b + c) / 2;
    if (a > prom)
        cout << a << " es mayor que el promedio de " << b << " y " << c;
    else
        cout << a << " no es mayor que el promedio.";
    return 0;
}
