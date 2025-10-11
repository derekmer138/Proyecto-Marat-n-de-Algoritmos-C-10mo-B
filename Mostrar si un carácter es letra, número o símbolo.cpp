#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char c;
    cout << "Ingrese un caracter: ";
    cin >> c;

    if (isalpha(c))
        cout << "Letra.";
    else if (isdigit(c))
        cout << "Numero.";
    else
        cout << "Simbolo.";
    return 0;
}
