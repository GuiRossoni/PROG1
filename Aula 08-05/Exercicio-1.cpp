#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int main (void)
{

    // int num = 0;

    // cout << "Informe um numero inteiro menor que 100: " << "\n";
    // cin >> num;

    // while (num >=100)
    // {
    //     cout << "Numero invalido!" << "\n";
    //     cout << "Informe um numero inteiro menor que 100: " << "\n";
    //     cin >> num;
    // }

    // cout << "O numero informado eh menor que 100" << "\n";

    // system("PAUSE");
    // system("cls");

    // int num = 0;

    // cout << "Informe um numero inteiro entre 10 e 20: " << "\n";
    // cin >> num;

    // while (num <=10 || num >= 20)
    // {
    //     cout << "Numero invalido" << "\n";
    //     cout << "Informe um numero inteiro entre 10 e 20: " << "\n";
    //     cin >> num;
    // }

    // cout << "O numero informado esta entre 10 e 20!" << "\n";

    // system("PAUSE");
    // system("cls");
    
    // num = 0;
    // bool fim = false;
    // while (!fim)
    // {
    //     cout << "Informe um numero entre 1 e 5: " << "\n";
    //     cin >> num;

    //     if(num < 1 || num > 5)
    //     {
    //         cout << "Numero invalido!" << "\n";
    //         cout << "Informe um numero entre 1 e 5: " << "\n";
    //     }
    //     else 
    //     {
    //         cout << "Numero informado esta entre 1 e 5" << "\n";
    //         fim = true;
    //     }

    // }

    // system("PAUSE");
    // system("cls");

    // int num = 0;

    // cout << "Informe um numero positivo e inteiro que inicie a contagem regressiva: " << "\n";
    // cin >> num;

    // while (num > 0)
    // {
    //     cout << num << endl;
    //     num = num -1;
    //     Sleep(200);
    // }

    // cout << "Decolar!!!" << "\n";

    // system("PAUSE");
    // system("cls");

    // int RA;
    // int RA_Correto = 202214143;
    // bool verificacao = false;

    // do
    //     {
    //         cout << "Digite seu RA para realizar o Login: " << "\n";
    //         cin >> RA;

    //         if(RA == RA_Correto)
    //         {
    //             verificacao = true;
    //         }
    //         else
    //         {
    //             cout << "RA invalido, tente novamente" << "\n";
    //         }
    //     }while (!verificacao);

    //     cout << "Bem vindo ao sistema de cadastro!" << "\n";

    // system("PAUSE");
    // system("cls");

    char selecao;

    do
    {
        double altura = 0, comprimento = 0;
        
        cout << "digite a altura e a largura separados por um espaco para calcular a area: " << "\n";
        cin >> altura >> comprimento;

        double area = altura*comprimento;

        cout << "A area eh: " << area << "\n";

        cout << "Gostaria de repetir a operacao? (S/N): " "\n";
        cin >> selecao;

    } while (selecao == 'S' || selecao == 's');
    
    cout << "Fim do programa!" << "\n";

    system("PAUSE");


}



