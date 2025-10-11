#include <iostream>
using namespace std;

int main() {
    int nota;
    cout << "Ingrese nota (0-10): ";
    cin >> nota;

    switch (nota) {
        case 10: case 9: cout << "Excelente"; break;
        case 8: case 7: cout << "Muy bueno"; break;
        case 6: cout << "Bueno"; break;
        case 5: cout << "Regular"; break;
        default: cout << "Insuficiente";
    }
    return 0;
}
