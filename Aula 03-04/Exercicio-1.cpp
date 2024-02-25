#include <iostream>

using namespace std;

int main ()

{

int opcao;
int num1;
int num2;

    do 
    {
    cout << "=====>CALCULADORA<=====" << "\n";
    cout << "\n";
    cout << "informe abaixo a operacao que deseja realizar: " << "\n";
    cout << "\n[1]Soma" << "\n[2]Subtracao" << "\n[3]Multiplicacao" << "\n[4]Divisao" << "\n[0]Sair";
    cout << "\n";
    cout << "\n=> ";
    cin >> opcao; 
    
    if (opcao > 0 && opcao < 5)
        {
            cout << "\nInforme os dois valores separados por espaco para a realizacao da operacao" << "\n";
            cout << "\n";
            cout << "=> ";
            cin >> num1 >> num2;

            switch(opcao) 
            {
        case 5:
            cout << "\nSaindo...\n" << endl; 
            break;
        case 1:
            cout << "\nSoma: \n" << num1 + num2 << endl;
            break;
        case 2:
            cout << "\nSubtracao: \n" << num1 - num2 << endl;
            break;
        case 3:
            cout << "\nMultiplicacao: \n" << num1 * num2 << endl;
            break;
        case 4:
            while(num2 == 0) 
                {
                cout << "\nNao existe divisao por zero!\nDigite outro valor: ";
                cin >> num2;
                }
            cout << "\nDivisao: \n"<< num1 / num2 << endl;
            break;
        default:
            cout << "\nOpcao inválida.\nDigite outra opcao: " << endl;
            }
        }
    }while(opcao != 0); 

}