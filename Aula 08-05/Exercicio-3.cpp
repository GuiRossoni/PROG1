#include <iostream>

using namespace std;

int main (void)
{
    int num = 0;

    cout << "Informe um numero inteiro que esteja fora do intervalo de 23 a 47: " << "\n";
    cin >> num;

    while (num >=23 && num <=47)
    {
    cout << "Numero invalido!" << "\n";
    cout << "Informe um numero inteiro que esteja fora do intervalo de 23 a 47: " << "\n";
    cin >> num;
    }

    cout << "O numero informado estah fora do intervalo de 23 a 47, Parabens =)" "\n";

}