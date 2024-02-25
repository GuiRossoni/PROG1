#include <iostream>

using namespace std;

int main ()
{
    
    int  NumA =0;
    int  NumB =0;

    system("cls");

    cout << "\nInforme abaixo os valores para A e B respectivamente e separados por espaco:" << "\n";
    cout << "\n";
    cout << "=> ";
    cin >> NumA >> NumB;

    if ((NumA % NumB) == 0)
        {
            cout << "\nSao multiplos!" << "\n";
            cout << "\n";
        }
    
    else if ((NumB % NumA) == 0)
        {
            cout << "\nO segundo numero informado eh multiplo do primeiro numero!" << "\n";
            cout << "\n";
        }

    else
        {
            cout << "\nNao sao multiplos!" << "\n";
            cout << "\n";
        }

    return 0;
}