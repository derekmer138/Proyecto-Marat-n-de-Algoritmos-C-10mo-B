#include <iostream>
using namespace std;

int main() {
    int hora;
    cout << "Ingrese la hora (0-23): ";
    cin >> hora;

    if (hora < 12) cout << "Buenos dias!";
    else if (hora < 18) cout << "Buenas tardes!";
    else cout << "Buenas noches!";
    return 0;
}
