#include <iostream>

using namespace std;

int main(void) 
{
    int M [3][3];
    int pares = 0;
    int impares = 0;

    // Captura de valores e preenchimento da matriz
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            cout << "\nDigite abaixo o valor para a posicao [" << i << "][" << j << "] de nossa matriz 3x3: " "\n" "\n";
            cin >> M[i][j];

            // Verificacao se eh par ou impar.
            if (M[i][j] % 2 == 0) 
            {
                pares++;
            } 
            
            else 
            {
                impares++;
            }
        }
    }

    cout << "\n";

    system("cls");

    // Impressao da matriz
    cout << "Matriz M: " << "\n";
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            cout << M[i][j] << " ";
        }
        cout << "\n";
    }

    //resultado da quantidade de numeros pares e impares.
    cout << "\nA quantidade de numeros pares eh : " << pares << "\n";
    cout << "\nA quantidade de numeros impares eh : " << impares << "\n" "\n";

}
