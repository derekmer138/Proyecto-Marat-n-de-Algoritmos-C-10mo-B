#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;

    if (n % 4 == 0 && n % 6 == 0)
        cout << "Es multiplo de 4 y 6.";
    else
        cout << "No es multiplo de ambos.";
    return 0;
}
