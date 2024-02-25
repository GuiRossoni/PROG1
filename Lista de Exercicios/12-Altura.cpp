#include<iostream>

using namespace std;

int main()
{
    system("cls"); //Para limpar o terminal =)

    float altura;

    cout << "informe abaixo a sua altura" << "\n";
    cout << "\n";
    cout << "=> ";
    cin >> altura;

    if (altura < 1.50)
        {
            cout << "\nAbaixo de um metro e meio!" << "\n";
            cout << "\n";
        }
    
    else if (altura > 1.80)
        {
            cout << "\nAcima de um metro e oitenta centimetros!" << "\n";
            cout << "\n"; 
        }

    else
        {
            cout << "\nEntre um metro e meio e um metro e oitenta centimetros!" << "\n";
            cout << "\n";
        }


    return 0;
}