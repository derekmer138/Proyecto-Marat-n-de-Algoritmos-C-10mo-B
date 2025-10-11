#include <iostream>
using namespace std;

int main() {
    float nota;
    cout << "Ingrese su nota: ";
    cin >> nota;

    if (nota >= 7)
        cout << "Aprobado.";
    else
        cout << "Reprobado.";
    return 0;
}
