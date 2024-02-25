#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
    
    float Num1 = 0;
    float Num2 = 0;
    float RespostaA =0;
    float RespostaB =0;
    float RespostaC =0;
    float RespostaD =0;
    float RespostaE =0;

    system("cls");

    cout << "\nInforme abaixo dois valores separados por espaco:" << "\n";
    cout << "\n";
    cout << "=> ";
    cin >> Num1 >> Num2;

    RespostaA = Num1 + Num2;

    RespostaB = Num1 * pow(Num2, 2);

    RespostaC = pow(Num1, 2);

    RespostaD = sqrt(pow(Num1, 2) + pow(Num2, 2));

    RespostaE = abs(Num1);

    cout << "A) A soma dos dois numeros: " << RespostaA << "\n";
    cout << "\n";

    cout << "B) O produto do primeiro numero pelo quadrado do segundo: " << RespostaB << "\n";
    cout << "\n";

    cout << "C) O quadrado do primeiro numero: " << RespostaC << "\n";
    cout << "\n";

    cout << "D) A raiz quadrada da soma dos quadrados: " << RespostaD << "\n";
    cout << "\n";

    cout << "E) O modulo do primeiro numero: " << RespostaE << "\n";
    cout << "\n";

    return 0;
}