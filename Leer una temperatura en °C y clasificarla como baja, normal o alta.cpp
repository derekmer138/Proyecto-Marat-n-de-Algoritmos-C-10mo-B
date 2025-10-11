#include <iostream>
using namespace std;

int main() {
    float temp;
    cout << "Ingrese la temperatura en °C: ";
    cin >> temp;

    if (temp < 36)
        cout << "Temperatura baja.";
    else if (temp <= 37.5)
        cout << "Temperatura normal.";
    else
        cout << "Temperatura alta.";
    return 0;
}
