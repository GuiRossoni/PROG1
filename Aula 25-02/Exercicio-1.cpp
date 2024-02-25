#include <iostream>
#include <string>

using namespace std;

int main(void) {

    string matriz [5] [2];


    for (int i = 0; i < 5; i++) 
    {
        //coleta dos nomes e CPF's
        cout << "\nInforme o nome de numero: " << i << "\n";
        cin >> matriz[i][0];
        cout << "\nInforme abaixo o CPF de numero: " << i << "\n";
        cin >> matriz[i][1];
    }

    system("cls");

    //saida dos dados coletados
    cout << "\nDados armazenados na Matriz: " << endl;
    cout << endl;
    
    for (int i = 0; i < 5; i++) 
    {
        cout << "Nome: " << matriz[i][0] << endl;
        cout << "CPF: " << matriz[i][1] << endl;
        cout << endl;
    }

}