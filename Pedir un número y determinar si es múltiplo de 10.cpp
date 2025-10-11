#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;

    if (n % 10 == 0)
        cout << "Es multiplo de 10.";
    else
        cout << "No es multiplo de 10.";
    return 0;
}
