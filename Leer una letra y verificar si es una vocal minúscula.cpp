#include <iostream>
using namespace std;

int main() {
    char l;
    cout << "Ingrese una letra: ";
    cin >> l;

    if (l=='a'||l=='e'||l=='i'||l=='o'||l=='u')
        cout << "Es una vocal minuscula.";
    else
        cout << "No es una vocal minuscula.";
    return 0;
}
