#include <iostream>

using namespace std;

int main()
{
    system("cls");
    int cont = 10;
    int result = 0;

    cout << "Contando: " << cont << "\n";

    cont = cont + 1;
    cout << "Contando: " << cont << "\n";

    cont++;
    cout << "Contando: " << cont << "\n";

    ++cont;
    cout << "Contando: " << cont << "\n";

    result = ++cont;
    cout << "Contando: " << cont << "\n";
    cout << "Resultado: " << result << "\n";

    cont = 10;
    result = 0;

    cout << "Contando: " << cont << "\n";
    result = ++cont + 10;
    cout << "Contando: " << cont << "\n";
    cout << "Resultado: " << result << "\n";

    cont = 10;
    result = 0;

    cout << "Contando: " << cont << "\n";
    result = cont++ + 10;
    cout << "Contando: " << cont << "\n";
    cout << "Resultado: " << result << "\n";





    return 0;
}