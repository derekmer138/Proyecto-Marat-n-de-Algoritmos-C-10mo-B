#include <iostream>
using namespace std;

int main() {
    char l;
    cout << "Ingrese una letra: ";
    cin >> l;

    if (l=='c'||l=='o'||l=='m'||l=='p'||l=='u'||l=='t'||l=='a'||l=='d'||l=='r')
        cout << "Pertenece a la palabra 'computadora'.";
    else
        cout << "No pertenece.";
    return 0;
}
