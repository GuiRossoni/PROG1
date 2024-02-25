#include<iostream>

using namespace std;

int main(void)
{
    int Numero;
    int Sum = 0;

    system("cls");

    for(Numero=1; Numero<=15; Numero++)
        {
            if (Numero % 2 == !0)
            {
                Sum = Sum + Numero;
            }
        }

    cout << "A soma dos numeros inteiros impares eh: " << Sum << "\n";
    cout << "\n";
}