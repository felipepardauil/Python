#include <iostream>
#include <math.h>
#include <tgmath.h>
using namespace std;

struct ponto
{
    float x, y;
};

void input(ponto &p1, ponto &p2)
{
    cout << "Coordenada X e Y do ponto P1 = ";
    cin >> p1.x >> p1.y;

    cout << "\nCoordenada X e Y do ponto P2 = ";
    cin >> p2.x >> p2.y;
}

float calcular_dist(ponto p1, ponto p2)
{
    float d = sqrt(pow((p2.x - p1.x), 2) + pow((p2.y - p1.y), 2));

    return d;
}

int main()
{
    ponto p1, p2;

    input(p1, p2);
    cout << "\nDistancia entre os pontos P1 e P2 = " << calcular_dist(p1, p2) << " u.c"; // UNIDADE CARTESIANA

    return 0;
}

/*"""distância entre os pontos = sqrt(pow(x2-x1, 2)+pow(y2-y1, 2))"""*/