/*"""9. Construa um programa que solicite que o usuário informe 2
números inteiros positivos. O programa deve calcular:
 a) O cubo do segundo número
 b) A média geométrica entre o primeiro e o segundo nú
mero, isto é, Media geo = sqrt(num1*num2)"""*/
#include <iostream>
#include <tgmath.h>
#include <math.h>
using namespace std;

void input(int &num1, int &num2)
{
    cout << "Informe dois numeros inteiros: ";
    cin >> num1 >> num2;
}

int calcular_cubo(int num2)
{
    int cubo = pow(num2, 3);
    return cubo;
}

int calcular_medgeo(int num1, int num2)
{
    int medgeo = sqrt(num1 * num2);
    return medgeo;
}

int main()
{
    int num1, num2;

    input(num1, num2);
    cout << "\nCubo do segundo numero = " << calcular_cubo(num2);
    cout << "\nMedia geometrica entre os numeros = " << calcular_medgeo(num1, num2);

    return 0;
}