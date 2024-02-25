#include<iostream>

using namespace std;

int main()
{
    system("cls"); //Para limpar o terminal =)

    float ValorProduto = 0;
    
    cout << "\nInforme abaixo o valor do produto: " << "\n";
    cout << "\n";
    cout << "R$: ";
    cin >> ValorProduto;
    
    if (ValorProduto < 100)
    {
        cout << "\nValor Ajustado em 10 por cento: R$ " << ((ValorProduto*0.10) + ValorProduto ) << "\n";
        cout << "\n";
    }
    else
    {
        cout << "\nValor ajustado em 20 por cento: R$ " << ((ValorProduto*0.20) + ValorProduto ) << "\n";
        cout << "\n";
    }


    return 0;
}