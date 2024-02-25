#include<iostream>

using namespace std;

int main(void)
{
    int Cont;
    int Numero;
    int NumeroPar = 0;
    int NumeroImpar = 0;

    system("cls");

    for(Cont=1; Cont<=10; Cont++)
        {
            cout << "Informe um numero: " << "\n";
            cout << "\n";
            cin >> Numero;
            cout << "\n";
            if (Numero % 2 == 0)
            {
                NumeroPar++;
            }
            else
            {
                NumeroImpar++;
            }
        }

    cout << "\nA quantidade de numeros pares eh: " << NumeroPar << "\n";
    cout << "\n";
    cout << "\nA quantidade de numeros impares eh: " << NumeroImpar << "\n";
    cout << "\n";
}