//Criado por: Danton, Guilherme e Luiz.

#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <limits>

using namespace std;

int main(void)

{
    //Variaveis para armazenamento de dados

    string RA;
    string Nome;
    string Endereco;
    double CPF;
    string Bairro;
    string Cidade;
    int Numero;
    int Dia;
    int Mes; 
    int Ano;

    //Vetores para armazenamento de dados e amostra de relatorio
    vector <string> vetorNome;
    vector <string> vetorEndereco;
    vector <double> vetorCPF;
    vector <string> vetorBairro;
    vector <string> vetorCidade;
    vector <int> vetorNumero;
    vector <int> vetorDia;
    vector <int> vetorMes; 
    vector <int> vetorAno;

    vector <string> FuncionarioEfetivo;
    vector <string> FuncionarioTemporario;
    vector <string> FuncionarioEstagiario;

    vector <float> SalarioEfetivo;
    vector <float> SalarioTemporario;
    vector <float> SalarioEstagiario;
    
    float totalSalarios(0);

    float TotalSalarioEF(0);
    float TotalSalarioTE(0);
    float TotalSalarioES(0);

    float TotalSalarioEF2(0);
    float TotalSalarioTE2(0);
    float TotalSalarioES2(0);

    int idcadastro(-1);
    char segundatentativa;
    int mudanca(0);

    //Variaveis constantes para os valores base dos salarios.
    const int BaseTemp = 1800; //Salario Temporario
    const int BaseEsta = 1320; //Salario Estagiario
    const int BaseEfet = 3120; //Salario Efetivo
    
    //Variaveis para opcoes de case e multiplicadores dos calculos de salario.
    int Opcao, OpcaoTipoFuncionario, DiasDeTrabalho, HoraExtra;

    //Variaveis para as operacoes de calculo dos salarios
    const float ValorHE = 0.55; //Calculo de adicional por hora extra (55%)
    const float ValorINSS1 = 0.09; //Aliquota INSS de 9% para faixa salarial de R$: 1302,01 ate R$: 2571,29
    const float ValorINSS2 = 0.12; //Aliquota INSS de 12% para faixa salarial de R$: 2.571,30 ate R$: 3.856,94
    const float ValorIRPF = 0.075; //Aliquota IR de 7,5% para base de R$ 1.903,99 a R$ 2.826,65

    //Primeiro menu para a autenticacao atraves do RA.
    system("cls");
    cout << "=================================================" << endl;
    cout << "ACESSO PERMITIDO APENAS PARA ALUNOS DA CAMPO REAL" << endl;
    cout << "INSIRA SEU RA: "; 
    getline(cin, RA);
    cout << "=================================================" << endl;

    if (RA == "2023116572" || RA == "2022114143" || RA == "2022114273") //Reconhecimento dos RAs para liberar o acesso.
        {
            do //Loop de funcionamento do cadastro
                {   
                    //Primeiro Switch com duas opcoes, 1 para executar o cadasrtro e 0 para parar o programa.
                    
                    
                    cout << "\nEscolha o que deseja realizar:\n[1] Para realizar um novo cadastro\n[2] Para editar um cadastro\n[3] Exibir relatorio geral\n[0] Para Sair\n";
                    cout << "\n=> ";
                    cin >> Opcao;

                    switch (Opcao) //Inicio primeiro switch
                        {
                    
                            case 1:

                            system("cls");
                        
                            //INFORMACOES FUNCIONARIO

                            cout << "\nCadastro de Funcionario" << "\n";

                            cin.ignore(); //Utilizado para ignorar o falso reconhecimento de um espaco como um enter
                            
                            cout << "\nNome: ";
                            do
                                {
                                    getline(cin, Nome);
                                    if (Nome.empty()) //Verificacao de nome vazio
                                        {
                                            cout << "\nNome invalido, digite novamente: ";
                                        }
                                } while (Nome.empty());
                            
                            vetorNome.push_back(Nome);

                            cout << "\nEndereco: ";
                            do
                                {
                                    getline(cin, Endereco);
                                    if (Endereco.empty()) //Verificacao de endereco vazio
                                        {
                                            cout << "\nEndereco invalido, digite novamente: ";
                                        }
                                } while (Endereco.empty());
                            
                            vetorEndereco.push_back(Endereco);

                            cout << "\nNumero: ";
                            do 
                                {
                                    cin >> ws >> Numero;
                                    if (cin.fail() || Numero <= 0) //Verificacao de numero vazio
                                        {
                                            cin.clear();
                                            cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                            cout << "\nNumero invalido, digite novamente: ";
                                        }
                                } while (Numero <= 0);

                            vetorNumero.push_back(Numero);

                            cout << "\nBairro: ";
                            cin.ignore();
                            do
                                {
                                    getline(cin, Bairro);
                                    if (Bairro.empty()) //Verificacao de bairro vazio
                                        {
                                            cout << "\nBairro invalido, digite novamente: ";
                                        }
                                } while (Bairro.empty());

                            vetorBairro.push_back(Bairro);
                            
                            cout << "\nCidade: ";
                            do
                                {
                                    getline(cin, Cidade);
                                    if (Cidade.empty()) //Verificacao de cidade vazio
                                        {
                                            cout << "\nCidade invalida, digite novamente: ";
                                        }
                                } while (Cidade.empty());
                            
                            vetorCidade.push_back(Cidade);

                            cout << "\nCPF: ";
                            do
                                {
                                    cin >> CPF;
                                    if (cin.fail() || CPF <= 0) //Verificacao de CPF vazio
                                        {
                                            cin.clear();
                                            cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                            cout << "\nCPF invalido, digite novamente: ";
                                        }
                                } while (CPF <= 0);
                            
                            vetorCPF.push_back(CPF);

                            cout << "\nData de Admissao" << "\n";
                            
                            cout << "\nDia: ";
                            do
                                {
                                    cin >> Dia;
                                    if (cin.fail() || Dia <= 0 || Dia > 31) //Verificacao dos dias
                                        {
                                            cin.clear();
                                            cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                            cout << "\nDia invalido, digite novamente (de 1 a 31): ";
                                        }
                                } while (Dia <= 0 || Dia > 31);

                            vetorDia.push_back(Dia);

                            cout << "Mes: ";
                            do
                                {
                                    cin >> Mes;
                                    if (cin.fail() || Mes <= 0 || Mes > 12) //Verificacao dos meses
                                        {
                                            cin.clear();
                                            cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                            cout << "\nMes invalido, digite novamente (de 1 a 12): ";
                                        }
                                } while (Mes <= 0 || Mes > 12);

                            vetorMes.push_back(Mes);

                            cout << "Ano: ";
                            do
                                {
                                    cin >> Ano;
                                    if (cin.fail() || Ano <= 1900 || Ano > 2023) //Verificacao dos anos
                                        {
                                            cin.clear();
                                            cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                            cout << "\nAno invalido, digite novamente (de 1901 a 2023): ";
                                        }
                                } while (Ano <= 1900 || Ano > 2023);

                            vetorAno.push_back(Ano);
                            
                            //Segundo switch utilizado para expecificar o tipo de cadastro de funcionario com as opcoes 1, 2 e 3.
                            cout << "\nInforme abaixo numero correspondente ao tipo de cadastro para este funcionario " << endl;
                            cout << "[1] Temporario, [2] Estagiario e [3] Efetivo.";
                            cout << "\n=> ";
                            cin >> OpcaoTipoFuncionario;

                                    //Variaveis utilizadas para os calculos dos salarios
                                    float SalarioC;
                                    float SalarioT;
                                    float SalarioHoraExtra;
                                    float SalarioDiasTrabalho;
                                    float SalarioINSS;
                                    float SalarioIRPF;
                                    float SalarioH;

                                    switch (OpcaoTipoFuncionario) //Segundo switch utilizado para os tipos de funcionarios                                        
                                        {

                                            case 1: //Case para o Calculo e saida de informacoes para funcionario temporario

                                                FuncionarioTemporario.push_back("x");
                                                
                                                cout << "\nQuantos dias foram trabalhados? ";
                                                do     
                                                    {
                                                        cin >> DiasDeTrabalho;
                                                        if (cin.fail() || DiasDeTrabalho <= 0 || DiasDeTrabalho > 20) //Verificacao de dias de trabalho vazio
                                                            {
                                                                cin.clear();
                                                                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                                                cout << "\nQuantidade de dias invalida, digite novamente (Maximo 20 dias): ";

                                                            }
                                                    } while (DiasDeTrabalho <= 0 || DiasDeTrabalho > 20);

                                                //Calculo salario Temporario
                                                SalarioC = (BaseTemp / 20);
                                                SalarioDiasTrabalho = (DiasDeTrabalho * SalarioC);
                                                SalarioT = SalarioDiasTrabalho - (SalarioDiasTrabalho*ValorINSS1);
        
                                                //Saida para as informacoes
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
                                                cout << "================================================" << "\n\n";

                                                SalarioTemporario.push_back(SalarioT);

                                                break;
                                            
                                            case 2: //Case para o Calculo e saida de informacoes para funcionario Estagiario

                                                FuncionarioEstagiario.push_back("x");

                                                cout << "\nQuantos dias foram trabalhados? ";
                                                do
                                                    {
                                                        cin >> DiasDeTrabalho;
                                                        if (cin.fail() || DiasDeTrabalho <= 0 || DiasDeTrabalho > 20) //Verificacao de dias de trabalho vazio
                                                            {
                                                                cin.clear();
                                                                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                                                cout << "\nQuantidade de dias invalida, digite novamente (Maximo 20 dias): ";
                                                            }
                                                    } while (DiasDeTrabalho <= 0 || DiasDeTrabalho > 20);

                                                //Calculo salario Estagiario
                                                SalarioC = (BaseEsta / 20);
                                                SalarioDiasTrabalho = (SalarioC * DiasDeTrabalho);
                                                SalarioT = SalarioDiasTrabalho;

                                                //Saida para as informacoes
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
                                                cout << "================================================" << "\n\n";

                                                SalarioEstagiario.push_back(SalarioT);

                                                break;

                                            case 3: //Case para o Calculo e saida de informacoes para funcionario Efetivo

                                                FuncionarioEfetivo.push_back("x");

                                                cout << "\nQuantos dias foram trabalhados? ";
                                                do
                                                    {
                                                        cin >> DiasDeTrabalho;
                                                        if (cin.fail() || DiasDeTrabalho <= 0 || DiasDeTrabalho > 20) //Verificacao de dias de trabalho vazio
                                                            {
                                                                cin.clear();
                                                                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                                                cout << "\nQuantidade de dias invalida, digite novamente (Maximo 20 dias): ";
                                                            }
                                                    } while (DiasDeTrabalho <= 0 || DiasDeTrabalho > 20);

                                                cout << "\nQuantas horas extras foram trabalhadas? ";
                                                do    
                                                    {    
                                                        cin >> HoraExtra;
                                                        if (cin.fail() || HoraExtra < 0 || HoraExtra > 999999) //Verificacao de horas extras vazio
                                                            {
                                                                cin.clear();
                                                                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                                                cout << "\nQuantidade de horas extras invalida, digite novamente: ";
                                                            }
                                                    } while (HoraExtra < 0 || HoraExtra > 999999);

                                                //Calculo salario Efetivo
                                                SalarioC = BaseEfet / 20;
                                                SalarioH = BaseEfet / 160;
                                                SalarioDiasTrabalho = SalarioC * DiasDeTrabalho;
                                                SalarioHoraExtra = HoraExtra*SalarioH+((HoraExtra*SalarioH)*ValorHE);
                                                SalarioT = SalarioDiasTrabalho + SalarioHoraExtra;
                                                SalarioINSS = SalarioT - (SalarioT*ValorINSS2);
                                                SalarioIRPF = SalarioINSS - (SalarioINSS*ValorIRPF);

                                                //Saida para as informacoes
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
                                                cout << "================================================" << "\n\n";

                                                SalarioEfetivo.push_back(SalarioIRPF);

                                                break;

                                            case 0:

                                                break;

                                             default:
                                                
                                                cout << "\nOpcao invalida!" << endl;

                                                break;  

                                        }

                            break;

                            
                            //EDICAO DE CADASTRO
                            case 2:

                                if (vetorNome.size() == 0)
                                {
                                    system("cls");
                                    cout << "\n+ ERRO + \nO sistema nao apresenta cadastros realizados!\n\n";
                                }
                                
                                else
                                    {
                                        cout << "Digite o nome do cadastrado: ";
                                        cin.ignore();
                                        do
                                            {
                                                getline(cin, Nome);
                                                if (Nome.empty()) //Verificacao de nome vazio
                                                    {
                                                        cout << "\nNome invalido, digite novamente: ";
                                                    }
                                            } while (Nome.empty());

                                        for (size_t i = 0 ; i < vetorNome.size(); i++)
                                            {
                                                if (vetorNome[i] == Nome)
                                                {
                                                    idcadastro = i;
                                                }
                                            }

                                        if (idcadastro < 0)
                                            {
                                                cout << "\n\nCadastro nao encontrado!\nDeseja tentar novamente? [S / N]\n";
                                                cout << "=> ";
                                                cin >> segundatentativa;
                                                
                                                if (segundatentativa == 'S' || segundatentativa == 's')
                                                {
                                                    cout << "Digite o CPF cadastrado: ";
                                                    cin.ignore();
                                                    do
                                                        {
                                                            cin >> CPF;
                                                            if (cin.fail() || CPF <= 0) //Verificacao de CPF vazio
                                                                {
                                                                    cin.clear();
                                                                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                                                    cout << "\nCPF invalido, digite novamente: ";
                                                                }
                                                        } while (CPF <= 0);

                                                    for (size_t i = 0; i < vetorCPF.size(); i++)
                                                    {
                                                        if (vetorCPF[i] == CPF)
                                                        {
                                                            idcadastro = i;
                                                        }
                                                    }
                                                    
                                                    if (idcadastro < 0)
                                                    {
                                                        cout << "\nInfelimente nao foi possivel achar um cadastro com os dados fornecidos.\n";
                                                    }
                                                    else
                                                    {
                                                        system ("cls");

                                                        cout << "[1] Nome:" << vetorNome[idcadastro];
                                                        cout << "\n[2] Endereco: " << vetorEndereco[idcadastro];
                                                        cout << "\n[3] Bairro: " << vetorBairro[idcadastro];
                                                        cout << "\n[4] CPF: " << vetorCPF[idcadastro];
                                                        cout << "\n[5] Cidade: " << vetorCidade[idcadastro];
                                                        cout << "\n[6] Numero: " << vetorNumero[idcadastro];
                                                
                                                        cout << "\n\nData de admissao:";
                                                        cout << "\n[7] Dia: " << vetorDia[idcadastro];
                                                        cout << "\n[8] Mes: " << vetorMes[idcadastro];
                                                        cout << "\n[9] Ano: "<< vetorAno[idcadastro];

                                                        cout << "\n\nDigite o numero do dado para ser modificado: ";
                                                        cin >> mudanca;

                                                        switch (mudanca)
                                                        {
                                                            case 1: 
                                                                cout << "\nDigite o novo nome: ";
                                                                cin.ignore();
                                                                do
                                                                    {
                                                                        getline(cin, vetorNome[idcadastro]);
                                                                        if (vetorNome[idcadastro].empty()) //Verificacao de nome vazio
                                                                            {
                                                                                cout << "\nNome invalido, digite novamente: ";
                                                                            }
                                                                    } while (vetorNome[idcadastro].empty());
                                                                
                                                                break;

                                                            case 2: 
                                                                cout << "\nDigite o novo endereco: ";
                                                                cin.ignore();
                                                                do 
                                                                    {
                                                                        getline(cin, vetorEndereco[idcadastro]);
                                                                        if (vetorEndereco[idcadastro].empty()) //Verificacao de endereco vazio
                                                                            {
                                                                                cout << "\nEndereco invalido, digite novamente: ";
                                                                            }
                                                                    } while (vetorEndereco[idcadastro].empty());

                                                                break;

                                                            case 3: 
                                                                cout << "\nDigite o novo bairro: ";
                                                                cin.ignore();
                                                                do 
                                                                    {
                                                                        getline(cin, vetorBairro[idcadastro]);
                                                                        if (vetorBairro[idcadastro].empty()) //Verificacao de bairro vazio
                                                                            {
                                                                                cout << "\nBairro invalido, digite novamente: ";
                                                                            }
                                                                    } while (vetorBairro[idcadastro].empty());

                                                                break;

                                                            case 4: 
                                                                cout << "\nDigite o novo CPF: ";
                                                                cin.ignore();
                                                                do
                                                                    {
                                                                        cin >> vetorCPF[idcadastro];
                                                                        if (cin.fail() || vetorCPF[idcadastro] <= 0) //Verificacao de CPF
                                                                            {
                                                                                cin.clear();
                                                                                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                                                                cout << "\nCPF invalido, digite novamente: ";
                                                                            }
                                                                    } while (vetorCPF[idcadastro] <= 0);

                                                                break;

                                                            case 5: 
                                                                cout << "\nDigite a nova cidade: ";
                                                                cin.ignore();
                                                                do
                                                                    {
                                                                        getline(cin, vetorCidade[idcadastro]);
                                                                        if (vetorCidade[idcadastro].empty()) //Verificacao de cidade vazio
                                                                            {
                                                                                cout << "\nCidade invalida, digite novamente: ";
                                                                            }
                                                                    } while (vetorCidade[idcadastro].empty());

                                                                break;

                                                            case 6: 
                                                                cout << "\nDigite o novo numero: ";
                                                                cin.ignore();
                                                                do 
                                                                    {
                                                                        cin >> vetorNumero[idcadastro];
                                                                        if (cin.fail() || vetorNumero[idcadastro] <= 0) //Verificacao de numero vazio
                                                                            {
                                                                                cin.clear();
                                                                                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                                                                cout << "\nNumero invalido, digite novamente: ";
                                                                            }
                                                                    } while (vetorNumero[idcadastro] <= 0);

                                                                break;

                                                            case 7: 
                                                                cout << "\nDigite o novo dia de admissao: ";
                                                                cin.ignore();
                                                                do 
                                                                    {
                                                                        cin >> vetorDia[idcadastro];
                                                                        if (cin.fail() || vetorDia[idcadastro] <= 0 || vetorDia[idcadastro] > 31) //Verificacao de dia
                                                                            {
                                                                                cin.clear();
                                                                                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                                                                cout << "\nDia invalido, digite novamente (de 1 a 31): ";
                                                                            }
                                                                    } while (vetorDia[idcadastro] <= 0 || vetorDia[idcadastro] > 31);

                                                                break;

                                                            case 8: 
                                                                cout << "\nDigite o novo mes de admissao: ";
                                                                cin.ignore();
                                                                do 
                                                                    {
                                                                        cin >> vetorMes[idcadastro];
                                                                        if (cin.fail() || vetorMes[idcadastro] <= 0 || vetorMes[idcadastro] > 12) //Verificacao de mes
                                                                            {
                                                                                cin.clear();
                                                                                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                                                                cout << "\nMes invalido, digite novamente (de 1 a 12): ";
                                                                            }
                                                                    } while (vetorMes[idcadastro] <= 0 || vetorMes[idcadastro] > 12);

                                                                break;

                                                            case 9: 
                                                                cout << "\nDigite o novo ano de admissao: ";
                                                                cin.ignore();
                                                                do 
                                                                    {
                                                                        cin >> vetorAno[idcadastro];
                                                                        if (cin.fail() || vetorAno[idcadastro] <= 1900 || vetorAno[idcadastro] > 2023) //Verificacao de ano
                                                                            {
                                                                                cin.clear();
                                                                                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                                                                cout << "\nAno invalido, digite novamente (de 1901 a 2023): ";
                                                                            }
                                                                    } while (vetorAno[idcadastro] <= 1900 || vetorAno[idcadastro] > 2023);

                                                                break;

                                                            case 0:
                                                                break;

                                                            default:
                                                                cout << "\nOpcao invalida! ";
                                                                break;
                                                        }

                                                        cout << "\nDado modificado com sucesso!\n";
                                                    }
                                                }
                                                else 
                                                    
                                                    {
                                                        cout << "\nEspero que tenha solucionado o problema!\n";
                                                    }

                                            }

                                        else 

                                            {
                                                system ("cls");

                                                cout << "[1] Nome:" << vetorNome[idcadastro];
                                                cout << "\n[2] Endereco: " << vetorEndereco[idcadastro];
                                                cout << "\n[3] Bairro: " << vetorBairro[idcadastro];
                                                cout << "\n[4] CPF: " << vetorCPF[idcadastro];
                                                cout << "\n[5] Cidade: " << vetorCidade[idcadastro];
                                                cout << "\n[6] Numero: " << vetorNumero[idcadastro];
                                                
                                                cout << "\n\nData de admissao:";
                                                cout << "\n[7] Dia: " << vetorDia[idcadastro];
                                                cout << "\n[8] Mes: " << vetorMes[idcadastro];
                                                cout << "\n[9] Ano: "<< vetorAno[idcadastro];

                                                cout << "\n\nDigite o numero do dado para ser modificado: ";
                                                cin >> mudanca;

                                                switch (mudanca)
                                                {
                                                    case 1: 
                                                        cout << "\nDigite o novo nome: ";
                                                        cin.ignore();
                                                        do
                                                            {
                                                                getline(cin, vetorNome[idcadastro]);
                                                                if (vetorNome[idcadastro].empty()) //Verificacao de nome vazio
                                                                {
                                                                    cout << "\nNome invalido, digite novamente: ";
                                                                }
                                                        } while (vetorNome[idcadastro].empty());
                                                        
                                                        break;

                                                    case 2: 
                                                        cout << "\nDigite o novo endereco: ";
                                                        cin.ignore();
                                                        do 
                                                            {
                                                                getline(cin, vetorEndereco[idcadastro]);
                                                                if (vetorEndereco[idcadastro].empty()) //Verificacao de endereco vazio
                                                                    {
                                                                        cout << "\nEndereco invalido, digite novamente: ";
                                                                    }
                                                            } while (vetorEndereco[idcadastro].empty());

                                                        break;

                                                    case 3: 
                                                        cout << "\nDigite o novo bairro: ";
                                                        cin.ignore();
                                                        do 
                                                            {
                                                                getline(cin, vetorBairro[idcadastro]);
                                                                if (vetorBairro[idcadastro].empty()) //Verificacao de bairro vazio
                                                                    {
                                                                        cout << "\nBairro invalido, digite novamente: ";
                                                                    }
                                                            } while (vetorBairro[idcadastro].empty());

                                                        break;

                                                    case 4: 
                                                        cout << "\nDigite o novo CPF: ";
                                                        cin.ignore();
                                                        do
                                                            {
                                                                cin >> vetorCPF[idcadastro];
                                                                if (cin.fail() || vetorCPF[idcadastro] <= 0) //Verificacao de CPF vazio
                                                                    {
                                                                        cin.clear();
                                                                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                                                        cout << "\nCPF invalido, digite novamente: ";
                                                                    }
                                                            } while (vetorCPF[idcadastro] <= 0);

                                                        break;

                                                    case 5: 
                                                        cout << "\nDigite a nova cidade: ";
                                                        cin.ignore();
                                                        do
                                                            {
                                                                getline(cin, vetorCidade[idcadastro]);
                                                                if (vetorCidade[idcadastro].empty()) //Verificacao de cidade vazio
                                                                    {
                                                                        cout << "\nCidade invalida, digite novamente: ";
                                                                    }
                                                            } while (vetorCidade[idcadastro].empty());

                                                            break;

                                                    case 6: 
                                                        cout << "\nDigite o novo numero: ";
                                                        cin.ignore();
                                                        do 
                                                            {
                                                                cin >> vetorNumero[idcadastro];
                                                                if (cin.fail() || vetorNumero[idcadastro] <= 0) //Verificacao de numero vazio
                                                                    {
                                                                        cin.clear();
                                                                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                                                        cout << "\nNumero invalido, digite novamente: ";
                                                                    }
                                                            } while (vetorNumero[idcadastro] <= 0);

                                                        break;

                                                    case 7: 
                                                        cout << "\nDigite o novo dia de admissao: ";
                                                        cin.ignore();
                                                        do 
                                                            {
                                                                cin >> vetorDia[idcadastro];
                                                                if (cin.fail() || vetorDia[idcadastro] <= 0 || vetorDia[idcadastro] > 31) //Verificacao de dia
                                                                    {
                                                                        cin.clear();
                                                                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                                                        cout << "\nDia invalido, digite novamente (de 1 a 31): ";
                                                                    }
                                                            } while (vetorDia[idcadastro] <= 0 || vetorDia[idcadastro] > 31);

                                                        break;

                                                    case 8: 
                                                        cout << "\nDigite o novo mes de admissao: ";
                                                        cin.ignore();
                                                        do 
                                                            {
                                                                cin >> vetorMes[idcadastro];
                                                                if (cin.fail() || vetorMes[idcadastro] <= 0 || vetorMes[idcadastro] > 12) //Verificacao de mes
                                                                    {
                                                                        cin.clear();
                                                                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                                                        cout << "\nMes invalido, digite novamente (de 1 a 12): ";
                                                                    }
                                                            } while (vetorMes[idcadastro] <= 0 || vetorMes[idcadastro] > 12);

                                                        break;

                                                    case 9: 
                                                        cout << "\nDigite o novo ano de admissao: ";
                                                        cin.ignore();
                                                        do 
                                                            {
                                                                cin >> vetorAno[idcadastro];
                                                                if (cin.fail() || vetorAno[idcadastro] <= 1900 || vetorAno[idcadastro] > 2023) //Verificacao de ano
                                                                    {
                                                                        cin.clear();
                                                                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                                                        cout << "\nAno invalido, digite novamente (de 1901 a 2023): ";
                                                                    }
                                                            } while (vetorAno[idcadastro] <= 1900 || vetorAno[idcadastro] > 2023);

                                                        break;

                                                    case 0:
                                                        break;
                                                    
                                                    default:
                                                        cout << "\nOpcao invalida! ";
                                                        break;
                                                }

                                                cout << "\nDado modificado com sucesso!\n";
                                            }
                                    
                                    }
                                
                                break;
                            
                            //RELATORIOS
                            case 3:
                                
                                system("cls");
                                
                                if (vetorNome.size() == 0)
                                {
                                    system("cls");
                                    
                                    cout << "+ E R R O +";
                                    cout << "\nRelatorio indisponivel pois nao existe cadastros realizados!\n\n";

                                }

                                else
                                    {
                                        cout << "+ CADASTROS +" << "\n";

                                        cout << "\nTotal de cadastros realizados: " << vetorNome.size() << " cadastros" << "\n";
                                        cout << "\nFuncionarios efetivos: " << FuncionarioEfetivo.size();
                                        cout << "\nFuncionarios temporarios: " << FuncionarioTemporario.size();
                                        cout << "\nFuncionarios estagiarios: " << FuncionarioEstagiario.size() << "\n";                                 
                                    
                                        cout << "\n\n+ TOTAL SALARIAL +" << "\n";
                                        
                                        cout << "\nEfetivos: ";
                                            for (size_t i =0; i < FuncionarioEfetivo.size(); i++)
                                                {
                                                    TotalSalarioEF += SalarioEfetivo[i];
                                                }
                                                TotalSalarioEF2 = TotalSalarioEF;
                                            cout << TotalSalarioEF << "\n";

                                        cout << "\nTemporarios: ";
                                            for (size_t i =0; i < FuncionarioTemporario.size(); i++)
                                                {
                                                    TotalSalarioTE += SalarioTemporario[i];
                                                }
                                                TotalSalarioTE2 = TotalSalarioTE;
                                            cout << TotalSalarioTE << "\n";

                                        cout << "\nEstagiarios: ";
                                            for (size_t i =0; i < SalarioEstagiario.size(); i++)
                                                {
                                                    TotalSalarioES += SalarioEstagiario[i];
                                                }
                                                TotalSalarioES2 = TotalSalarioES;
                                            cout << TotalSalarioES << "\n";

                                        cout << "\n+ MEDIA DE SALARIOS +" << "\n";
                                        
                                        cout << "\nEfetivos: ";

                                            cout << (TotalSalarioEF2 / FuncionarioEfetivo.size()) << "\n";
                                        
                                        cout << "\nTemporarios: ";

                                            cout << (TotalSalarioTE2 / FuncionarioTemporario.size()) << "\n";

                                        cout << "\nEstagiarios: ";

                                            cout << (TotalSalarioES2 / FuncionarioEstagiario.size()) << "\n";

                                        cout << "\nTotal da folha Salarial: ";

                                            totalSalarios = TotalSalarioEF2 + TotalSalarioTE2 + TotalSalarioES2;

                                            cout << totalSalarios << "\n";

                                    }

                                break;
                            
                            case 0:

                                break;
                            
                            default:

                                system("cls");
                                cout << "\nOpcao invalida!\n" << endl;
                                break;

                            idcadastro = -1;

                        }

                }   while (Opcao != 0);//Finaliza o loop em conjunto com a opcao 0 do primeiro switch case.
                    
                    {
                        system("cls");
                        cout << "\nObrigado por usar nosso sistema!" << "\n";
                        cout << "\n";
                    }
        
        }

    else //Funcao em resposta ao IF que verifica se o RA informado esta correto.
        
        {
            cout<<"ACESSO NEGADO!!!!";
        }

}