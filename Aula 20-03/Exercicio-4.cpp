#include <iostream>

using namespace std;

int main()
{
    int Temperatura;
    int Vento;
    const int TempMin = 15;
    const int VentMax = 40;

    system("cls");

    bool VestirCasaco = 0;

    cout << "*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*" << "\n";
    cout << "\n E agora levoa blusa?" << "\n";
    cout << "\n Qual eh a velocidade do vento e a temperatura hoje? (me responda separando com espaco!)" << endl;
    cout << "\n";
    cin >> Temperatura >> Vento;

    VestirCasaco = (Temperatura <= TempMin) || (Vento >= VentMax);
    
    if (VestirCasaco == 1)
        {
            cout << "\n Voce vai precisar do casaco hoje!" << "\n";
        }
    
    else 
        {
            cout << "\n Nao precisa levar o casaco hoje!" << "\n";
        }

    return 0;
}