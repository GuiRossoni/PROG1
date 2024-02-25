#include <iostream>

using namespace std;

int main ()
{
    float numero;

    system("cls");  //Para limpar o terminal =)

    cout << "Insira um numero: " << "\n";
    cout << "\n=> ";
    cin >> numero;

    if (numero >= 5 && numero <= 20)
        {
            cout << "\nO numero: " << numero << " informado esta entre 5 e 20" << "\n";
            cout << "\n";
        }
    else
        {
            cout << "\nO numero: " << numero << " informado nao esta entre 5 e 20" << "\n";
            cout << "\n";
        }


    return 0;
}

