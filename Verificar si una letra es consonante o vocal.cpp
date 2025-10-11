#include <iostream>
using namespace std;

int main() {
    char l;
    cout << "Ingrese una letra: ";
    cin >> l;

    if (l=='a'||l=='e'||l=='i'||l=='o'||l=='u'||l=='A'||l=='E'||l=='I'||l=='O'||l=='U')
        cout << "Es vocal.";
    else if ((l >= 'A' && l <= 'Z') || (l >= 'a' && l <= 'z'))
        cout << "Es consonante.";
    else
        cout << "No es una letra.";
    return 0;
}
