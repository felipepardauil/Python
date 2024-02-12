#include <iostream>
using namespace std;

int main()
{
    float altura_metros;

    cout << "Informe sua altura em metros(m): \n";
    cin >> altura_metros;

    float altura_cm = altura_metros * 100;

    cout << "\nSua altura em cm é: " << altura_cm << " cm";

    return 0;
}