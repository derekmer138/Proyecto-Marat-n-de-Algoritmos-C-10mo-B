#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char l;
    cout << "Ingrese una letra: ";
    cin >> l;

    if (isupper(l))
        cout << "Es mayuscula.";
    else if (islower(l))
        cout << "Es minuscula.";
    else
        cout << "No es una letra.";
    return 0;
}

