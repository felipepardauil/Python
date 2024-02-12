/*""" 8. Construa um programa que receba do usuário o valor do
salário mínimo atual. Na sequência, o programa deve solicitar
que o usuário informe o valor do seu salário mensal. Ao fim, o
programa deve calcular a quantidade de salários mínimos re
cebidos pelo usuário. """*/
#include <iostream>
using namespace std;

int main()
{
    float sal_min, sal_mensal;

    cout << "Valor do salario minimo = ";
    cin >> sal_min;

    cout << "\nValor do seu salario mensal = ";
    cin >> sal_mensal;

    cout << "Você recebe " << sal_mensal / sal_min << " salario(s) minimo(s) ao mes.";

    return 0;
}