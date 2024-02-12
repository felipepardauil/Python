/*''' 7. Uma imobiliária paga aos seus corretores um salário base
de R$ 1.500,00. Além disso, uma comissão de R$ 200,00 por
cada imóvel vendido e 5% do valor de cada venda. Construa
um programa que solicite o nome do corretor, a quantidade
de imóveis vendidos e o valor total de suas vendas. Ao fim, o
programa deve calcular e escrever o salário final do corretor de
imóveis.'''*/
#include <iostream>
using namespace std;

void input(string &nome, int &imoveis, float &vendas)
{
    cout << "Nome do corretor: ";
    getline(cin, nome); fflush(stdin);

    cout << "\nQuantidadde de imoveis vendidos = ";
    cin >> imoveis;

    cout << "Total de vendas (R$) = ";
    cin >> vendas;
}

int main()
{
    string nome;
    float sal_base = 1500.00, cpi = 200.00, vendas_total, sal_total;
    int imoveis_vend;

    input(nome, imoveis_vend, vendas_total);
    cout << "\nCorretor: " << nome << endl;

    sal_total = sal_base + (cpi * imoveis_vend) + (vendas_total * 0.05);
    cout << "Salario total = " << sal_total;

    return 0;
}