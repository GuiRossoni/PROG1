#include <iostream>
#include <vector>

using namespace std;

int main(void) 
{

    vector<int> Vetor(5);

    cout << "\nDigite 5 valores inteiros: " << "\n";

    //captura dos valores
    for (int i = 0; i < 5; i++) 
    {
        cout << "\nValor " << i + 1 << ": ";
        cin >> Vetor[i];

    }

    // Cálculo da soma
    int Soma = 0;
    for (int i = 0; i < 5; i++) 
    {
        Soma += Vetor[i];
    }

    //Resultado
    cout << "\nA soma dos valores eh: " << Soma << "!" << "\n" "\n";

}