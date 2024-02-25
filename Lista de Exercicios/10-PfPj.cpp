#include<iostream>

using namespace std;

int main()
{
    system("cls"); //Para limpar o terminal =)

    char letra;

    cout << "informe abaixo F para pessoa fisica e J para pessoa juridica" << "\n";
    cout << "\n";
    cout << "=> ";
    cin >> letra;

    if (letra == 'j' || letra == 'J')
        {
            cout << "\nPessoa Juridica" << "\n";
            cout << "\n";
        }
    
    else if (letra == 'f' || letra == 'F')
        {
            cout << "\nPessoa Fisica" << "\n";
            cout << "\n"; 
        }

    else
        {
            cout << "\nTipo de pessoa invalido!" << "\n";
            cout << "\n";
        }


    return 0;
}