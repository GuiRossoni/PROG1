#include <iostream>

using namespace std;

int main()
{

    int Fator;
    int Multiplicador;

    for (Fator = 1; Fator <= 9; Fator ++)
        { 
        cout << "\n";
        cout << "Tabuada do: " << Fator << "\n";
        cout << "\n";      
        for(Multiplicador = 1; Multiplicador <= 10; Multiplicador ++)
            {
            cout << Fator << " * " << Multiplicador << " = " << Fator * Multiplicador << "\n";
            }
        }

    return 0;
}
