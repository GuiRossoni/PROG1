#include <iostream>

using namespace std;

int main()
{
    system("cls");
    
    int num;
    int num2;
    const int maior = 20;
    const int menor = 10;

    cout << boolalpha;

    cout << "Informe um numero entre " << menor << " e " << maior << ": ";
    cin >> num;

    bool EntreLimites = false;

    EntreLimites = (num > menor) && (num < maior);

    cout << num << " esta entre " << menor << " e " << maior << ": " << EntreLimites << "\n";

    
    
    cout << "\nInforme um numero fora dos limites de " << menor << " e " << maior << ": ";
    cin >> num2;

    bool ForaLimites = false;

    ForaLimites = (num2 < menor) || (num2 > maior);

    cout << num2 << " esta fora de " << menor << " e " << maior << ": " << ForaLimites << "\n";


    return 0;
}