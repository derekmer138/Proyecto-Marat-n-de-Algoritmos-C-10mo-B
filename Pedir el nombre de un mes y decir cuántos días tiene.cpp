#include <iostream>
#include <string>
using namespace std;

int main() {
    string mes;
    cout << "Ingrese el nombre del mes: ";
    cin >> mes;

    if (mes == "enero" || mes == "marzo" || mes == "mayo" || mes == "julio" ||
        mes == "agosto" || mes == "octubre" || mes == "diciembre")
        cout << "Tiene 31 dias.";
    else if (mes == "abril" || mes == "junio" || mes == "septiembre" || mes == "noviembre")
        cout << "Tiene 30 dias.";
    else if (mes == "febrero")
        cout << "Tiene 28 o 29 dias.";
    else
        cout << "Mes invalido.";
    return 0;
}
