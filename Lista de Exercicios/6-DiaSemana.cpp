#include <iostream>

using namespace std;

int main ()
{
    
    int numero;

    system("cls");  //Para limpar o terminal =)

    cout << "\nInforme o numero de um dia da semana (1 a 7)" << "\n";
    cout << "\n";
    cout << "=> ";
    cin >> numero;

    if (numero == 1)
        {
            cout << "\nO numero: " << numero << " corresponde a Domingo." << "\n";
            cout << "\n";
        }
    
    else if (numero == 2)
        {
            cout << "\nO numero: " << numero << " corresponde a Segunda-feira." << "\n";
            cout << "\n";
        }

    else if (numero == 3)
        {
            cout << "\nO numero: " << numero << " corresponde a Terca-feira." << "\n";
            cout << "\n";
        }

    else if (numero == 4)
        {
            cout << "\nO numero: " << numero << " corresponde a Quarta-feira." << "\n";
            cout << "\n";
        }

    else if (numero == 5)
        {
            cout << "\nO numero: " << numero << " corresponde a quinta-feira." << "\n";
            cout << "\n";
        }

    else if (numero == 6)
        {
            cout << "\nO numero: " << numero << " corresponde a sexta-feira." << "\n";
            cout << "\n";
        }

    else if (numero == 7)
        {
            cout << "\nO numero: " << numero << " corresponde a Sabado." << "\n";
            cout << "\n";
        }

    return 0;
}