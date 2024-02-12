/*1. Um aluno iniciou seus estudos em geometria plana e, para
validar se suas respostas estão corretas, solicitou sua ajuda.
Sabendo que Area do triangulo é base vezes altura divido por 2,
construa um programa para auxiliar esse aluno.*/
#include <iostream>
using namespace std;

void input(float &base, float &altura)
{
    cout << "Base do triangulo: ";
    cin >> base;

    cout << "Altura do triangulo: ";
    cin >> altura;
}

float calcular_area(float base, float altura)
{
    float area = (base * altura) / 2;

    return area;
}

int main()
{
    float b, h; // b = base ; h = altura

    input(b, h);
    cout << "\nArea do triangulo = " << calcular_area(b, h)<<" metros quadrados.";

    return 0;
}