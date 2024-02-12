/*''' 4. Implemente um programa que converta o valor de uma ve
locidade média em km/h para m/s. Para isso, o usuário deve
informar o valor da velocidade média. Sabe-se que o fator utili
zado para essa conversão é 3,6.'''
# km/h -> m/s divide-se o valor em km/h por 3,6
# m/s -> m/s multiplica-se o valor em km/h por 3,6*/
#include <iostream>
using namespace std;

#define cte 3.6 // cte = constante de converão

float converter(float vel_med)
{
    return (vel_med /= cte);
}

int main()
{
    float vel_med;

    cout << "Velocidade media em km/h = ";
    cin >> vel_med;

    cout << "Velocidade media em m/s = " << converter(vel_med) << " m/s";

    return 0;
}