#include <iostream>
#include <vector>
using namespace std;

int main() {
    int qdias;
    cout << "Dias a comparar? ";
    cin >> qdias;

    if (qdias < 2) {
        cout << "0";
        return 0;
    }

    vector<int> precios(qdias);
    cout << "Ingrese los precios separados por espacio: ";

    for (int i = 0; i < qdias; i++) {
        cin >> precios[i];
    }

    int Lprecio = precios[0];  
    int maxg = 0;              
    int pact, ganancia;

    for (int i = 1; i < qdias; i++) {
        pact = precios[i];              
        ganancia = pact - Lprecio;      

        if (ganancia > maxg) {          
            maxg = ganancia;
        }

        if (pact < Lprecio) {           
            Lprecio = pact;
        }
    }

    cout << "La ganancia maxima posible es: " << maxg << endl;

    return 0;
}
