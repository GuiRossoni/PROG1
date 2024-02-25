#include <iostream>
#include <windows.h>

using namespace std;

int main (void)
{
    int VAnto = 0;
    int VSima = 0;
    int entrada =0;
    int Total =0;
   
    do
    {
        system("cls");
        cout << "\nAs opcoes sao: " << "\n";
        cout << "\n1 - Candidato Antonio" << "\n";
        cout << "\n2 - Candidato Simao" << "\n";
        cout << "\n3 - Fim da Votacao!" << "\n";
        cout << "\n=> ";
        cin >> entrada;

        if(entrada == 1)
        {
            cout << "\nVoto computado!" << "\n";
            cout << "\n";
            VAnto++;
            Sleep(500);
        }

        else if(entrada == 2)
        {
            cout << "\nVoto computado!" << "\n";
            cout << "\n";
            VSima++;
            Sleep(500);
        }
        else if(entrada <1 || entrada >3)
        {
            cout << "\nOpcao Invalida, repita seu voto!" << "\n";
            cout << "\n";
            Sleep(800);
        }

    }while (entrada != 3);

    system("cls");

    Total = VAnto + VSima;

    cout << "\nFim da Votacao!" << "\n";
    cout << "\nO total de votos foi: " << Total << "\n";

    if (VAnto > VSima)
        {
            cout << "\n";
            cout << "Antonio foi o vencedor com: " << VAnto << " votos contra: " << VSima << " votos de Simao!" << "\n";
            cout << "\n";
        }

    else if (VSima == VAnto)
        {
            cout << "\n";
            cout << "Empate" << "\n";
            cout << "\n";
            cout << "Ambos os candidatos obtiveram a mesma quantia de votos!" << "\n";
            cout << "\n";
        }
    else
        {
            cout << "\n";
            cout << "Simao foi o vencedor com: " << VSima << " votos contra: " << VAnto << " votos de Antonio!" << "\n";
            cout << "\n";
        }

}