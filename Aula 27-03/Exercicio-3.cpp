#include <iostream>

using namespace std;

int Idade = 0;
bool Consentimento;
bool SegVal;
bool Criminal;

int main()
{
    cout << "\n*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*" << "\n";
    cout << "\nCandidatura para Motorista" << "\n";
    cout << "\nInforme a sua Idade: " << "\n";
    cout << "\n";
    cin >> Idade;

    if (Idade > 16 and Idade <= 17)
    {
        cout << "\n Voce possui o consentimento dos seus pais para essa candidatura?" << "\n";
        cout << "\nResponda 1 para sim e 0 para nao" << "\n";
        cin >> Consentimento;
            if (Consentimento == 1)
            {
                cout << "\n Idade valida e com consentimento, prossiga com o cadastro" << "\n";
            }
            else
            {
                cout << "\n Sem consentimento nao eh possivel realizar o cadastro" << "\n";
                return 0;
            }
    }
    else
    {
        cout << "\n Idade valida prossiga com o cadastro" << "\n";
    }
    
    cout << "\nSeu numero de Seguranca eh valido?" << "\n";
    cout << "\nResponda 1 para sim e 0 para nao" << "\n";
    cin >> SegVal;

    if (SegVal == 1)
    {
        cout << "\nNumero de seguranca social valido prossiga com o cadastro" << "\n";
    }
    else
    {
        cout << "\nNumero de seguranca social invalido!" << "\n";
        return 0;
 
    }

    cout << "\nVoce possui antecedentes criminais? " << "\n";
    cout << "\nResponda 1 para sim e 0 para nao" << "\n";
    cin >> Criminal;

    if (Criminal == 1)
    {
        cout << "\nNao eh possivel se cadastrar possuindo antecedentes criminais" << "\n";
    }
    else
    {
        cout << "\nCadastro realizado com sucesso, aguarde o retorno" << "\n";
    }
    return 0;
}