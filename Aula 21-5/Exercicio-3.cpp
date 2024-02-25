#include <iostream>
#include <vector>

using namespace std;

int main(void) 
{

    vector<int> Vetor(10);

    int ValorReferencia;

    cout << "\nDigite abaixo 10 números inteiros:" << "\n";

    //captura dos valores
    for (int i = 0; i < 10; i++) 
    {
        cout << "\nNumero " << i + 1 << ": ";
        cin >> Vetor[i];
    }

    cout << "\nDigite abaixo um valor de referencia: " << "\n" "\n";
    cin >> ValorReferencia;

    //Letra A
    cout << "\nA) Os numeros maiores que " << ValorReferencia << " sao: " << "\n" "\n";

    for (int i = 0; i < 10; i++) 
    {
        if (Vetor[i] > ValorReferencia) 
        {
            cout << Vetor[i] << " ";
        }
    }

    cout << "\n";

    //Letra B
    int Menores = 0;

    for (int i = 0; i < 10; i++) 
    {
        if (Vetor[i] < ValorReferencia) 
        {
            Menores++;
        }
    }

    cout << "\nB) A quantidade de numeros menores que " << ValorReferencia << " presentes no vetor sao: " << Menores << "\n";

    //Letra C
    int ContReferencia = 0;
    for (int i = 0; i < 10; i++) 
    {
        if (Vetor[i] == ValorReferencia) 
        {
            ContReferencia++;
        }
    }
    cout << "\nC) Quantidade de vezes que " << ValorReferencia << " aparece no vetor eh: " << ContReferencia << "\n" "\n";

}
