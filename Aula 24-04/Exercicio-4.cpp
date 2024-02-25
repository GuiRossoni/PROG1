#include<iostream>

using namespace std;

int main(void)
{
    int Idade;
    int SIdade = 0;
    int TIdades;
    int Cont;
    float Media;

    system("cls");
    cout << "Quantas idades serao utilizadas?" << "\n";
    cout << "\n";
    cin >> TIdades;

    for(Cont=1; Cont<=TIdades; Cont++)
        {
            cout << "Informe a idade: " << "\n";
            cout << "\n";
            cin >> Idade;
            cout << "\n";

            SIdade = SIdade + Idade;
        }

    Media = SIdade / TIdades;

    cout << "\nA Media das idades eh: " << Media << "\n";
    cout << "\n";
}