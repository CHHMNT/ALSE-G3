#include <iostream>
using namespace std;

int main() {
    char letra;
    int resultado = 0;

    cout << "Columna: ";
    while (cin.get(letra)) {
        if (letra == '\n') {
            break;
        }

        if (letra >= 'a' && letra <= 'z') {
            letra = letra - 'a' + 'A';
        }

        int valor = letra - 'A' + 1;
        resultado = resultado * 26 + valor;
    }

    cout << "Numero de la columna: " << resultado << endl;

    return 0;
}
