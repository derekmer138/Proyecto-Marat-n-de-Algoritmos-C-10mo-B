#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;

    int ultimo = abs(n) % 10;

    if (ultimo % 2 == 0)
        cout << "Termina en numero par.";
    else
        cout << "Termina en numero impar.";
    return 0;
}
