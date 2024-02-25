#include <iostream>

using namespace std;

int main ()
{
    
    int num1 = 0;
    int num2 = 0;

    system("cls");  //Para limpar o terminal =)

    cout << "\nInforme abaixo dois valores separados por espaco:" << "\n";
    cout << "\n";
    cout << "=> ";
    cin >> num1 >> num2;

    if (num1 > num2)
        {
            cout << "\nA soma de " << num1 << " e " << num2 << " eh: " << num1 + num2 << "\n";
            cout << "\n";
        }

    else
        {
            cout << "\nA multiplicacao de " << num1 << " e " << num2 << " eh: " << num1 * num2 << "\n";
            cout << "\n";
        }



    return 0;
}