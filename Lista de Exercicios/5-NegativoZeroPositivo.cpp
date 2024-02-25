#include <iostream>

using namespace std;

int main ()
{
    
    int numero;

    system("cls");  //Para limpar o terminal =)

    cout << "Insira um numero inteiro: " << "\n";
    cout << "\n=> ";
    cin >> numero;

    if (numero < 0)
        {
            cout << "\nNumero negativo!" << "\n";
            cout << "\n";
        }
    else if (numero == 0)
        {
            cout << "\nZero!" << "\n";
            cout << "\n";
        }
    else
        {
            cout << "\nNumero positivo!" << "\n";
            cout << "\n";
        }


    return 0;
}

