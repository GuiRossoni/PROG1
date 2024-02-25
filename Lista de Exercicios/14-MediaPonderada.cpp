#include<iostream>

using namespace std;

int main()
{
    float Nota1 = 0;
    float Nota2 = 0;
    float Nota3 = 0;
    float Media = 0;
    float Recuperacao = 0;
    float MediaFinal = 0;

    cout << "\nCalculadora de media anual ponderada" << "\n";
    cout << "\nInforme a primeira nota: ";
    cin >> Nota1;
    cout << "\n";
    cout << "\nInforme a segunda nota: ";
    cin >> Nota2;
    cout << "\n";
    cout << "\nInforme a terceira nota: ";
    cin >> Nota3;
    cout << "\n";

    Media = ((Nota1*2 + Nota2*3 + Nota3*5) / 10);

    if (Media < 4)
    {
        cout << "Sua media eh: "<< Media << ", voce esta reprovado!" << "\n";
        cout << "\n";
    }

    else if (Media >= 4 && Media < 6 )
    {
        cout << "Sua media eh: "<< Media << " voce esta em recuperacao!" << "\n";
        cout << "\n";
        cout << "\nInforme abaixo sua nota de recuperacao" << "\n";
        cout << "\n";
        cin >> Recuperacao;

        MediaFinal = ((Media + Recuperacao) /2);

        if (MediaFinal >= 5)
            {
                cout << "Media final: " << MediaFinal << " , Aprovado apos recuperacao!" << "\n";
                cout << "\n";
            }
        
        else 
            {
                cout << "Media final: " << MediaFinal << " , Reprovado apos recuperacao!" << "\n";
                cout << "\n";
            }


    }
    else
    {
        cout << "Sua media eh: "<< Media << " , voce esta Aprovado!" << "\n";
        cout << "\n";
    }
    return 0;
}