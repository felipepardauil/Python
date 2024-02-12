#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float deslocamento, var_tempo, vel_med;

    cout << "Informe a variação do deslocamento: ";
    cin >> deslocamento;

    cout << "Informe a variação de tempo do movimento: ";
    cin >> var_tempo;

    vel_med = deslocamento / var_tempo;

    cout << "\nVelocidade media = " << vel_med << " m/s";

    return 0;
}