/*2. Agora o mesmo aluno precisa que você construa um progra
ma para calcular o comprimento de uma circunferência. Para
isso, o aluno informará ao programa o raio da circunferência.
Sabe-se que o comprimento é igual à 2*pi*raio*/
#include <iostream>
using namespace std;

#define pi 3.14

void input(float &raio)
{
    cout << "Raio da circunferencia: ";
    cin >> raio;
}

float calcular_comp(float raio)
{
    float comp = 2 * pi * raio; // ordem do produto não altera o resultado

    return comp;
}

int main()
{
    float r; // raio da circunferencia

    input(r);
    cout << "Comprimento da circunferencia = " << calcular_comp(r);

    return 0;
}