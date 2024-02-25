#include <iostream>

#define TAM 10
#define TAB 9

using namespace std;

int main (void)
{
    int i = 0;

    //contagem de 1 a 10
    cout << "\nContagem de 1 a 10" << "\n";
    for (i=1; i<=TAM; i++)
        {
            cout << i << "\n";
        }

    cout << endl;

    system("pause");
    system("cls");

    //contagem de 2 em 2
    cout << "\nContagem de 2 em 2" << "\n";
    for (i=0; i<=TAM; i=i+2)
        {
            cout << i << "\n";
        }

    cout << endl;

    system("pause");
    system("cls");

    //contagem regressiva
    cout << "\nContagem regressiva" << "\n";
    for (i=TAM; i>=0; i--)
        {
            cout << i << "\n";
        }
    
    cout << endl;

    system("pause");
    system("cls");

    //tabuada do 5
    cout << "\nTabuada do 5" << "\n";
    for (i=0; i<=TAM; i++)
        {
            cout << TAB << " X " << i << " = " << i*TAB << "\n";
        }

    cout << endl;

    system("pause");
    system("cls");

    //imprimir os pares
    cout << "\nNumeros pares" << "\n";
    for (i=0; i<=TAM; i++)
        {
            if (i % 2 == 0)
            {
                cout << i << "\n";
            }
        }

    cout << endl;

    system("pause");
    system("cls");

    //imprimir os pares
    cout << "\nNumeros impares" << "\n";
    for (i=0; i<=TAM; i++)
        {
            if (i % 2 != 0)
            {
                cout << i << "\n";
            }
        }

    cout << endl;

    system("pause");
    system("cls");

    //imprimir de 5 em 5
    cout << "\n5 em 5" << "\n";
    for (i=1; i<=100; i++)
        {
            cout << i;
            if (i % 5 == 0)
            {
                cout << "\n";
            }
            else 
            {
                cout << " ";
            }
        }

    cout << endl;

    system("pause");
    system("cls");





    

}