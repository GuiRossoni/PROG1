#include <iostream>

using namespace std;

int main ()

{

int mes;

    system("cls"); // Limpa terminal =)

    cout << "\nInforme um numero inteiro de 1 a 12 para verificar a correspondencia com um mes do ano: " << "\n";
    cout << "\n";
    cout << "=> ";
    cin >> mes;

    switch (mes)
    {
        case 1:
        cout << "\n Janeiro" << "\n";
        cout << "\n";
        break;
        
        case 2:
        cout << "\n Fevereiro" << "\n";
        cout << "\n";
        break;

        case 3:
        cout << "\n Marco" << "\n";
        cout << "\n";
        break;

        case 4:
        cout << "\n Abril" << "\n";
        cout << "\n";
        break;

        case 5:
        cout << "\n Maio" << "\n";
        cout << "\n";
        break;

        case 6:
        cout << "\n Junho" << "\n";
        cout << "\n";
        break;

        case 7:
        cout << "\n Julho" << "\n";
        cout << "\n";
        break;

        case 8:
        cout << "\n Agosto" << "\n";
        cout << "\n";
        break;

        case 9:
        cout << "\n Setembro" << "\n";
        cout << "\n";
        break;

        case 10:
        cout << "\n Outubro" << "\n";
        cout << "\n";
        break;

        case 11:
        cout << "\n Novembro" << "\n";
        cout << "\n";
        break;

        case 12:
        cout << "\n Dezembro" << "\n";
        cout << "\n";
        break;

        default:
        cout << "\n Numero invalido" << "\n";
        cout << "\n";
        break;
    }

    return 0;
}
