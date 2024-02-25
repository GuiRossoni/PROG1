#include<iostream>

using namespace std;

int main ()
{
    int Nota;

    cout << "Informe a sua nota do exame (entre 10 e 100): ";
    cin >> Nota;
    char LetraNota;

    if (Nota >= 0 && Nota <= 100)
    {
        if (Nota >= 90)
        {
            LetraNota = 'A';
        }
        else if (Nota >= 80)
        {
            LetraNota = 'B';
        }
        else if (Nota >= 70)
        {
            LetraNota = 'C';
        }
        else if (Nota >= 60)
        {
            LetraNota = 'D';
        }
        else
        {
            LetraNota = 'F';
        }
    } 
    
    else
    {
        cout << "Desculpa, " << Nota << " nao esta na faixa" << "\n";
        return 0;
    }

    cout << "\nSeu conceito eh: " << LetraNota << "\n";
    if(LetraNota == 'F')
    {
        cout << "\nDesculpa voce nao foi aprovado na disciplina" << "\n"; 
    } 
    else 
    {
        cout << "\nParabens, voce foi aprovado na disciplina" << "\n";
    }

    return 0;    
}