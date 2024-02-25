#include <iostream>
#include <vector>
#include <limits> //Usado para gerar um ponto de referencia de maior e menor para a comparacao dos valores

using namespace std;

int main(void) 
{
    vector <int> Vetor(20);

    cout << "\nDigite abaixo os " << 20 << " valores inteiros: " << "\n";

    //camtura dos valores
    for (int i = 0; i < 20; i++) 
    {
        cout << "\nValor " << i + 1 << ": ";
        cin >> Vetor[i];
    }

    int Menor = numeric_limits<int>::max(); //seta o maior valor possivel na variavel 2147483647
    int Maior = numeric_limits<int>::min(); //seta o menor valor possivel na variavel -2147483648
    
    int PosMenor = 0;
    int PosMaior = 0;

    //encontra a posicao do menor e do maior valor
    for (int i = 0; i < 20; i++) 
    {
        if (Vetor[i] < Menor) 
        {
            Menor = Vetor[i];
            PosMenor = i;
        }

        if (Vetor[i] > Maior) 
        {
            Maior = Vetor[i];
            PosMaior = i;
        }
    }

    //Resultados exercicio 1

    cout << "\nO menor valor informado eh: " << Menor << "\n";
    
    cout << "\nA Posicao do menor valor informado eh: " << (PosMenor +1) << "\n";
    
    cout << "\nO maior Valor informado eh: " << Maior << "\n";
    
    cout << "\nA posicao do maior valor informado eh: " << (PosMaior +1) << "\n";

    //Resultados exercicio 2

    cout << "\nExercicio 2" << "\n";

    cout << "\nValores pares digitados: " << "\n" "\n";

    for (int i = 0; i < 20; i++)
        {
            if (Vetor[i] % 2 == 0)
            {
                cout << Vetor[i] << " ";
            }
        }
        cout << "\n";

    cout << "\n";

    cout << "Valores impares digitados: " << "\n" "\n";

    for (int i = 0; i < 20; i++)
        {
            if (Vetor[i] % 2 != 0)
            {
                cout << Vetor[i] << " ";
            }
        }
        cout << "\n" "\n";
  
}
