//Criado por: Guilherme, Luiz e Danton =)

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main(void)

{
    //Variáveis para as coletas de informações sobre o funcionário
    string RA;
    string Nome;
    string Endereco;
    string CPF;
    string Bairro;
    string Cidade;
    string Numero;
    int Dia, Mes, Ano;
   
    //Variáveis constantes para os valores base dos salários.
    const int BaseTemp = 1800; //Salário Temporário
    const int BaseEsta = 1320; //Salário Estagiário
    const int BaseEfet = 3120; //Salário Efetivo
    
    //Variáveis para opções de case e multiplicadores dos calculos de salário.
    int Opcao, OpcaoTipoFuncionario, DiasDeTrabalho, HoraExtra;

    //Variáveis para as operações de calculo dos salários
    const float ValorHE = 0.55; //Cálculo de adicional por hora extra (55%)
    const float ValorINSS1 = 0.09; //Alíquota INSS de 9% para faixa salárial de R$: 1302,01 até R$: 2571,29
    const float ValorINSS2 = 0.12; //Alíquota INSS de 12% para faixa salárial de R$: 2.571,30 até R$: 3.856,94
    const float ValorIRPF = 0.075; //Alíquota IR de 7,5% para base de R$ 1.903,99 a R$ 2.826,65

    //Primeiro menu para a autenticação através do RA.
    system("cls");
    cout << "=================================================" << endl;
    cout << "ACESSO PERMITIDO APENAS PARA ALUNOS DA CAMPO REAL" << endl;
    cout << "INSIRA SEU RA: "; 
    getline(cin, RA);
    cout << "=================================================" << endl;
    
    //
    if (RA == "2023116572" || RA == "2022114143" || RA == "2022114273") //Reconhecimento dos RAs para liberar o acesso.
        {
            do //Loop de funcionamento do cadastro
                {   
                    //Primeiro Switch com duas opções, 1 para executar o cadasrtro e 0 para parar o programa.
                    cout << "\nDigite abaixo: [1] Para realizar um novo cadastro e [0] para Sair\n";
                    cout << "\n=> ";
                    cin >> Opcao;

                    switch (Opcao) //Inicio primeiro switch
                        {
                    
                            case 1:

                            system("cls");
                        
                            //INFORMAÇÕES FUNCIONÁRIO

                            cout << "\nCadastro de Funcionario" << "\n";

                            cin.ignore(); //Utilizado para ignorar o falso reconhecimento de um espaço como um enter
                            
                            cout << "\nNome: ";
                            getline(cin, Nome);

                            cout << "\nEndereco: ";
                            getline(cin, Endereco);

                            cout << "\nNumero: ";
                            getline(cin, Numero);

                            cout << "\nBairro: ";
                            getline(cin, Bairro);
                            
                            cout << "\nCidade: ";
                            getline(cin, Cidade);

                            cout << "\nCPF: ";
                            getline(cin, CPF);

                            cout << "\nData de Admissao" << "\n";
                            
                            cout << "\nDia: ";
                            cin >> Dia;

                            cout << "Mes: ";
                            cin >> Mes;

                            cout << "Ano: ";
                            cin >> Ano;
                            
                            //Segundo switch utilizado para expecificar o tipo de cadastro de funcionario com as opções 1, 2 e 3.
                            cout << "\nInforme abaixo numero correspondente ao tipo de cadastro para este funcionario " << endl;
                            cout << "[1] Temporario, [2] Estagiario e [3] Efetivo.";
                            cout << "\n=> ";
                            cin >> OpcaoTipoFuncionario;

                                    //Variáveis utilizadas para os calculos dos salários
                                    float SalarioC;
                                    float SalarioT;
                                    float SalarioHoraExtra;
                                    float SalarioDiasTrabalho;
                                    float SalarioINSS;
                                    float SalarioIRPF;
                                    float SalarioH;

                                    switch (OpcaoTipoFuncionario) //Segundo switch utilizado para os tipos de funcionáios                                        
                                        {

                                            case 1: //Case para o Cálculo e saída de informações para funcionario temporario

                                                cout << "\nQuantos dias foram trabalhados? ";
                                                cin >> DiasDeTrabalho;

                                                //Calculo salario Temporario
                                                SalarioC = (BaseTemp / 20);
                                                SalarioDiasTrabalho = (DiasDeTrabalho * SalarioC);
                                                SalarioT = SalarioDiasTrabalho - (SalarioDiasTrabalho*ValorINSS1);
        
                                                //Saída para as informações
                                                system("cls");
                                                cout << "\n================================================" << "\n";
                                                cout << "\nCalculo de pagamento para funcionario temporario" << "\n";
                                                cout << "\nNome: " << Nome << ", " << "CPF: " << CPF << "\n";
                                                cout << "\nEndereco: " << Endereco << ", " << " Numero: " << Numero << "\n";
                                                cout << "\nBairro: " << Bairro << ", " << " Cidade: " << Cidade << "\n";
                                                cout << "\nAdmissao em: " << Dia << "/" << Mes << "/" << Ano << "\n";
                                                cout << "\n================================================" << "\n";

                                                cout << "\nSalario base: R$ " << BaseTemp << ", Dias trabalhados: " << 
                                                DiasDeTrabalho << ", Desconto INSS (9%): R$ " << (SalarioDiasTrabalho*ValorINSS1) << "\n";
                                                
                                                cout << "\nSalario Total: R$ " << SalarioT << endl;

                                                cout << "\n================================================" << "\n";
                                                cout << "Valores para auditoria" << "\n";
                                                cout << "Valor por dia trabalhado (base /20): R$ " << SalarioC << "\n";
                                                cout << "Valor do salario antes do desconto do INSS: R$ " << SalarioDiasTrabalho << "\n";

                                                break;
                                            
                                            case 2: //Case para o Cálculo e saída de informações para funcionario Estágiario

                                                cout << "\nQuantos dias foram trabalhados? ";
                                                cin >> DiasDeTrabalho;

                                                //Calculo salario Estagiario
                                                SalarioC = (BaseEsta / 20);
                                                SalarioDiasTrabalho = (SalarioC * DiasDeTrabalho);
                                                SalarioT = SalarioDiasTrabalho;

                                                //Saída para as informações
                                                system("cls");
                                                cout << "\n================================================" << "\n";
                                                cout << "\nCalculo de pagamento para funcionario estagiario" << "\n";
                                                cout << "\nNome: " << Nome << ", " << "CPF: " << CPF << "\n";
                                                cout << "\nEndereco: " << Endereco << ", " << " Numero: " << Numero << "\n";
                                                cout << "\nBairro: " << Bairro << ", " << " Cidade: " << Cidade << "\n";
                                                cout << "\nAdmissao em: " << Dia << "/" << Mes << "/" << Ano << "\n";
                                                cout << "\n================================================" << "\n";

                                                cout << "\nSalario base: R$ " << BaseEsta << ", Dias trabalhados: " << 
                                                DiasDeTrabalho << "\n";
                                                
                                                cout << "\nSalario Total: R$ " << SalarioT << endl;

                                                cout << "\n================================================" << "\n";
                                                cout << "Valores para auditoria" << "\n";
                                                cout << "Valor por dia trabalhado (base /20): R$ " << SalarioC << "\n";

                                                break;

                                            case 3: //Case para o Cálculo e saída de informações para funcionario Efetivo

                                                cout << "\nQuantos dias foram trabalhados? ";
                                                cin >> DiasDeTrabalho;

                                                cout << "\nQuantas horas extras foram trabalhadas? ";
                                                cin >> HoraExtra;

                                                //Calculo salario Efetivo
                                                SalarioC = BaseEfet / 20;
                                                SalarioH = BaseEfet / 160;
                                                SalarioDiasTrabalho = SalarioC * DiasDeTrabalho;
                                                SalarioHoraExtra = HoraExtra*SalarioH+((HoraExtra*SalarioH)*ValorHE);
                                                SalarioT = SalarioDiasTrabalho + SalarioHoraExtra;
                                                SalarioINSS = SalarioT - (SalarioT*ValorINSS2);
                                                SalarioIRPF = SalarioINSS - (SalarioINSS*ValorIRPF);

                                                //Saída para as informações
                                                system("cls");
                                                cout << "\n==========================================================" << "\n";
                                                cout << "\nCalculo de pagamento para funcionario efetivo" << "\n";
                                                cout << "\nNome: " << Nome << ", " << "CPF: " << CPF << "\n";
                                                cout << "\nEndereco: " << Endereco << ", " << " Numero: " << Numero << "\n";
                                                cout << "\nBairro: " << Bairro << ", " << " Cidade: " << Cidade << "\n";
                                                cout << "\nAdmissao em: " << Dia << "/" << Mes << "/" << Ano << "\n";
                                                cout << "\n==========================================================" << "\n";

                                                cout << "\nSalario base: R$ " << BaseEfet << ", Dias trabalhados: " << 
                                                DiasDeTrabalho << "\nDesconto INSS (12%): R$ " << (SalarioDiasTrabalho*ValorINSS2) << 
                                                ", Desconto de IR (7.5%): R$ " << (SalarioDiasTrabalho*ValorIRPF) << "\n";
                                                cout << "Total de horas extras: " << HoraExtra << " horas, Valor redebido pelas HE: R$ " << SalarioHoraExtra << "\n";
                                                
                                                cout << "\nSalario Total: R$ " << SalarioIRPF << endl;

                                                cout << "\n==========================================================" << "\n";
                                                cout << "Valores para auditoria" << "\n";
                                                cout << "Valor por dia trabalhado (base /20): R$ " << SalarioC << "\n";
                                                cout << "Valor do salario antes do desconto do INSS: R$ " << SalarioDiasTrabalho << "\n";
                                                cout << "Valor do salario antes do desconto do IR: R$ " << SalarioINSS << "\n";

                                        }
                        }

                }while (Opcao != 0);//Finaliza o loop em conjunto com a opção 0 do primeiro switch case.

                    {
                        cout << "\nObrigao por usar nosso sistema!" << "\n";
                        cout << "\n";
                    }
        
        }
    else //Função em resposta ao IF que verifica se o RA informado está correto.
        {
            cout<<"ACESSO NEGADO!!!!";
        }

}


