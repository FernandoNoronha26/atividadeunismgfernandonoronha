#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> listaNumeros = {10, 20, 30, 40, 50};

    while (true) {
        cout << " Lista atual: ";
        for (int num : listaNumeros) {
            cout << num << " ";
        }
        cout << endl;

        int novoNumero;
        cout << " Digite um numero para adicionar (ou digite 0 para encerrar): ";
        cin >> novoNumero;

        if (novoNumero == 0) {
            cout << " Encerrando o programa. Ate mais! " << endl;
            break;
        }

        listaNumeros.push_back(novoNumero);
    }

    return 0;
}