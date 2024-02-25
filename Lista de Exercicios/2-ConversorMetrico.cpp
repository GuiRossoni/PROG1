#include<iostream>

using namespace std;

int main()
{
    system("cls"); //Para limpar o terminal =)

    float metro;
    float decimetro;
    float centimetro;
    float milimetro;

    cout << "\nInforme abaixo um valor em metros para ser convertido" << "\n";
    cout << "\n";
    cout << "=> ";
    cin >> metro;

    decimetro = metro * 10;

    centimetro = metro * 100;

    milimetro = metro * 1000;

    cout << "\nO valor convertido de " << metro << " metros eh:" << "\n";

    cout << "\n " << decimetro << " decimetros" << "\n";

    cout << "\n " << centimetro << " centimetros" << "\n";

    cout << "\n " << milimetro << " milimetros" << "\n";

    cout << "\n";

    return 0;
}