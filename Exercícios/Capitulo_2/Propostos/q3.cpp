/*3. Construa um programa que leia 2 números reais informados
pelo usuário. Ao fim, o programa deve calcular e imprimir:
a. a soma dos dois valores
b. o produto entre eles*/
#include <iostream>
using namespace std;

int main()
{
    float a, b;

    cout << "Informe o primeiro valor: ";
    cin >> a;
    cout << "Informe o segundo valor: ";
    cin >> b;

    cout << "\nSoma = " << a + b;
    cout << "\nProduto = " << a * b;

    return 0;
}