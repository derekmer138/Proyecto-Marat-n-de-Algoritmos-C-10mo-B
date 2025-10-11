#include <iostream>
using namespace std;

int main() {
    char turno;
    cout << "Ingrese turno (M:mañana, T:tarde, N:noche): ";
    cin >> turno;

    switch (turno) {
        case 'M': case 'm': cout << "Buenos dias!"; break;
        case 'T': case 't': cout << "Buenas tardes!"; break;
        case 'N': case 'n': cout << "Buenas noches!"; break;
        default: cout << "Turno invalido.";
    }
    return 0;
}
