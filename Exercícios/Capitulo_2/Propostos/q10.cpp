#include <iostream>
using namespace std;

int main()
{
    string copo1 = "laranja", copo2 = "acerola";

    cout << "Antes da troca:\n";
    cout << "Copo1: " << copo1 << ", copo2: " << copo2;

    string aux = "";

    // em c++ precisa-se de uma variável auxiliar para realizar a permuta de valores
    aux = copo1;
    copo1 = copo2;
    copo2 = aux;

    cout << "\nDepois da troca: \n";
    cout << "Copo1: " << copo1 << ", copo2: " << copo2;

    return 0;
}