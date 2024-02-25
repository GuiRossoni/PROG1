#include <iostream>

using namespace std;

int main (void)
{
    int Senha;
    int SenhaCorreta = 4321;
    bool Validacao = false;

    do
    {
    cout << "Digite a senha para realizar o Login: " << "\n";
    cin >> Senha;

    if(Senha == SenhaCorreta)
        {
            Validacao = true;
        }
    else
        {
            cout << "Senha Incorreta!" << "\n";
        }
    
    }while (!Validacao);

    cout << "Senha Correta!" << "\n";

}