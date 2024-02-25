#include<iostream>

using namespace std;

int main()
{
    system("cls"); //Para limpar o terminal =)

    int senha;
    const int PswPadrao = 34567;

    cout << "informe abaixo a senha para acesso" << "\n";
    cout << "\n";
    cout << "=> ";
    cin >> senha;

    if (senha == PswPadrao)
        {
            cout << "\nAcesso autorizado!" << "\n";
            cout << "\n";
        }

    else
        {
            cout << "\nAcesso negado!" << "\n";
            cout << "\n";
        }


    return 0;
}