#include <iostream>
using namespace std;

int main() {
    int hora;
    cout << "Ingrese la hora (0-23): ";
    cin >> hora;

    if (hora >= 6 && hora < 12)
        cout << "Es manana.";
    else if (hora >= 12 && hora < 18)
        cout << "Es tarde.";
    else
        cout << "Es noche.";
    return 0;
}
