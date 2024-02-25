#include <iostream>

using namespace std;

int main()
{
    int Cedula;
    int Moeda;

    cout << "\nDigite o Valor em Reais: " << "\n";
    cin >> Cedula;

    cout << "\nDigite o Valor em centavos" << "\n";
    cin >> Moeda;

    cout << "\nQuantidade de Cadulas: " << "\n";
    cout << "\nCedulas de 100 reais: " << abs(Cedula/100) << "\n";
    Cedula = Cedula-100*(abs(Cedula/100));     

    cout << "\nCedulas de 50 reais: " << abs(Cedula/50) << "\n";
    Cedula = Cedula-50*(abs(Cedula/50));     

    cout << "\nCedulas de 20 reais: " << abs(Cedula/20) << "\n";
    Cedula = Cedula-20*(abs(Cedula/20));     

    cout << "\nCedulas de 10 reais: " << abs(Cedula/10) << "\n";
    Cedula = Cedula-10*(abs(Cedula/10));

    cout << "\nCedulas de 5 reais: " << abs(Cedula/5) << "\n";
    Cedula = Cedula-5*(abs(Cedula/5));     

    cout << "\nCedulas de 2 reais: " << abs(Cedula/2) << "\n";
    Cedula = Cedula-2*(abs(Cedula/2));     

    cout << "\nQuantidade de Moedas: " << "\n";

    cout << "\nMoeda de 1 Real: " << abs(Moeda/100) << "\n";
    Moeda = Moeda-100*(abs(Moeda/100)); 

    cout << "\nMoedas de 50 centavos: " << abs(Moeda/50) << "\n";
    Moeda = Moeda-50*(abs(Moeda/50)); 

    cout << "\nMoedas de 25 centavos: " << abs(Moeda/25) << "\n";
    Moeda = Moeda-25*(abs(Moeda/25));

    cout << "\nMoedas de 10 centavos: " << abs(Moeda/10) << "\n";
    Moeda = Moeda-10*(abs(Moeda/10)); 

    cout << "\nMoedas de 5 centavos: " << abs(Moeda/5) << "\n";
    Moeda = Moeda-5*(abs(Moeda/5)); 

    cout << "\nMoedas de 1 centavo: " << abs(Moeda/1) << "\n";
    Moeda = Moeda-1*(abs(Moeda/1)); 

    return 0;
}