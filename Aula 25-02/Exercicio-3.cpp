#include <iostream>


using namespace std;

int main (void)
{
    // matriz/vetor[5] [0] [1] [2] [3] [4]

    //char vogais [5] {'a', 'e', 'i', 'o', 'u'};
    //cout << "A primeira vogal eh: " << vogais[0] << "\n";
    //cout << "A ultima vogal eh: " << vogais[4] << "\n";

    //double temperatura [] {90.1, 89.8, 77.5, 81.6};
    //cout << "A primeira temperatura eh: " << temperatura [0] << "\n";
    
    //temperatura [0] = 100.7;
    //cout << "A primeira temperatura eh: " << temperatura [0] << "\n";

    //int pont [5] {100, 90, 80, 70, 60};
    //cout << "Primeira pont: " << pont [0] << endl;
    //cout << "Segunda pont: " << pont [1] << endl;
    //cout << "Terceira pont: " << pont [2] << endl;
    //cout << "Quarta pont: " << pont [3] << endl;
    //cout << "Quinta pont: " << pont [4] << endl;

//     for (int i = 0; i <5; i++)
//     {
//         cout << pont [i] << " " << "\n";
//     }

//     cout << "Informe 5 pontuacoes: " << endl;
   
// for (int i = 0; i <5; i++)
//     {
//         cin >> pont [i];
//     }

//     //cin >> pont[0];
//     //cin >> pont[1];
//     //cin >> pont[2];
//     //cin >> pont[3];
//     //cin >> pont[4];

//     cout << "Primeira pont: " << pont [0] << endl;
//     cout << "Segunda pont: " << pont [1] << endl;
//     cout << "Terceira pont: " << pont [2] << endl;
//     cout << "Quarta pont: " << pont [3] << endl;
//     cout << "Quinta pont: " << pont [4] << endl;

// Declarar uma matriz 3x2

//int matriz [2] [3];
// 3 linhas e 2 colunas matriz[linhas] [colunas]
// matriz [i] [j]


// matriz [0] [0] = 1;
// matriz [0] [1] = 2;
// matriz [0] [2] = 3;
// matriz [1] [0] = 4;
// matriz [1] [1] = 5;
// matriz [1] [2] = 6;


//int matriz
// {
//        {1,2,3},
//        {4,5,6}
// }

// for (int i = 0; i<2; i++)
//     {
//         for(int j = 0; j<3; j++)
//         {
//             cout << matriz [i][j] << " ";
//         }
//         cout << endl;
//     }

int matriz [3] [3];
int i, j, soma = 0, soma_diagonal = 0;

cout << "informe os numeros da matriz: " << "\n";

for (i = 0; i < 3; i++)
{
    for(j = 0; j < 3; j++) 
    {
        cout << "\n Matriz [" << i <<  "] [" << j << "] = ";
        cin >> matriz[i][j];
        soma = soma + matriz[i] [j];
    }

}

for (i = 0; i < 3; i++)
{
    for(j = 0; j < 3; j++) 
    {
        cout << " " << matriz [i] [j];
    }
    cout << endl;
}

cout << "A soma dos valores da matriz eh: " << soma << "\n";
soma_diagonal = matriz [0][0] + matriz [1][1] + matriz [2][2];
cout << "A soma da diagonal eh: " << soma_diagonal << "\n";






}