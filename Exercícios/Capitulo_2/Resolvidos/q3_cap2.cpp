#include <iostream>
using namespace std;

#define pi 3.14

float calcular_area(float raio)
{
    float area = pi * (raio * raio);

    return area;
}

void ler_raio(float &r)
{
    cout << "Raio da area de convivencia: ";
    cin >> r;
}

int main()
{
    float r;

    ler_raio(r);
    cout << "Area = " << calcular_area(r);

    return 0;
}