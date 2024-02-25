#include <iostream>

using namespace std;

int main (void)
{
    int i = 0;
    int TAB;

    cout << "\nInforme um valor de 1 a 10: " << "\n";
    cout << "\n";
    cin >> TAB;
    
    if (TAB >= 1 && TAB <=10)
        {
            system("cls");
            cout << "\nTabuada do: " << TAB << "\n";
            for (i=0; i<=10; i++)
                {
                    cout << TAB << " X " << i << " = " << i*TAB << "\n";
                }

            cout << endl;
        }
    else
        {
            cout << "\nValor Invalido!" << "\n";
        }

    cout << endl;
}