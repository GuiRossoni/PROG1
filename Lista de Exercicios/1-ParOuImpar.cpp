#include<iostream>

using namespace std;

int main()
{
    int numero;

    system("cls"); //Para limpar o terminal =)

    cout << "\nInforme abaixo um numero inteiro: " << "\n";
    cout << "\n";
    cout << "=> ";
    cin >> numero;

    if (numero % 2 == 0)
        {
            cout << "\n" << numero << " Eh um numero: PAR!" << "\n";
            cout << "\n";
        }
    else
        {
            cout << "\n" << numero << " Eh um numero: IMPAR!" << "\n";
            cout << "\n";
        }

    return 0;
}