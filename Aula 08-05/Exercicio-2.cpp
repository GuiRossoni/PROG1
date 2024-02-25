#include <iostream>

using namespace std;

int main (void)
{
    int numero = 0;
    int maior = 0;
    int i =1;
   
    while (i <= 10)
    {
        cout << "Informe o: " << i << " numero: " << "\n";
        cin >> numero;

        i++;

        if(numero > maior)
        {
            maior = numero;
        }

    }

    cout << "O maior numero eh: " << maior << "\n";

}