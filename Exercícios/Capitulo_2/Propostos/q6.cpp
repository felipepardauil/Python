#include <iostream>
#include <tgmath.h>
#include <math.h>
using namespace std;

void calcular_raizes(int a, int b, int delta)
{
    if (delta < 0)
    {
        cout << "\nNão possui raizes reais.";
    }
    else if (delta > 0)
    {
        cout << "\nPossui duas raizes reais: \n";
        int x1 = (-b + sqrt(delta)) / (2 * a), x2 = (-b - sqrt(delta)) / (2 * a);

        cout << "\nx1 = " << x1;
        cout<< "\nx2 = " << x2;
    }
    else
    {
        cout << "\nPossui apenas uma raiz real: ";
        int x = (-b + sqrt(delta)) / (2 * a);

        cout << "\nx = " << x;
    }
}

int calcular_delta(int a, int b, int c)
{
    int delta = pow(b, 2) - (4 * a * c);

    return delta;
}

void input(int &a, int &b, int &c)
{
    cout << "Valor de a = ";
    cin >> a;
    cout << "Valor de b = ";
    cin >> b;
    cout << "Valor de c = ";
    cin >> c;
}

int main()
{
    int a, b, c, delta;

    input(a, b, c);
    delta = calcular_delta(a, b, c);
    calcular_raizes(a, b, delta);

    return 0;
}

// a*pow(x, 2) + b*x + c = 0