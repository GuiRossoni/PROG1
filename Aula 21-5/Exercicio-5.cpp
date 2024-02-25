#include<iostream>
#include<vector>

using namespace std;

int main(){
    // vector <char> vogais; //vazia
    // vector <char> vogais(5); // 5 elementos iniciando em 0
    vector<char> vogais{'a', 'e', 'i', 'o', 'u'}; // atribuindo valores aos elementos

    cout<<vogais[0]<<endl;
    cout<<vogais[4]<<endl;

    //vector <int> pontuacao (3) // 3 elementos inciados em 0
    //vector <int> pontuacao (3, 100); // 3 elementos iniciados em 100
    vector <int> pontuacao {100,98,89};
    cout<<"pontuacoes usando sintax de matriz: "<<endl;
    cout<<pontuacao[0]<<endl;
    cout<<pontuacao[1]<<endl;
    cout<<pontuacao[2]<<endl;

    cout<<"\nPontuacao usando sintax vetorial"<<endl;
    cout<<pontuacao.at(0)<<endl;
    cout<<pontuacao.at(1)<<endl;
    cout<<pontuacao.at(2)<<endl;
    cout<<"existem "<<pontuacao.size()<<" pontuacoes no vetor"<<endl; // size retorna o tamanho do vetor

    cout<<"\nDigite 3 pontuações";
    cin>> pontuacao.at(0);
    cin>> pontuacao.at(1);
    cin>> pontuacao.at(2);

    cout<<"\nAtualização de pontuacao"<<endl;
    cout<<pontuacao.at(0)<<endl;
    cout<<pontuacao.at(1)<<endl;
    cout<<pontuacao.at(2)<<endl;

    cout<<"\n Digite uma pontuacao para add ao vetor"<<endl;
    int pontuacao_add{0};
    cin>>pontuacao_add;

    pontuacao.push_back(pontuacao_add);

    cout<<"insira mais uma pontuação de teste para add ao vetor"<<endl;
    cin>>pontuacao_add;
    pontuacao.push_back(pontuacao_add);

    cout<<"as pontuacoes agora sao: "<<endl;
    cout<<pontuacao.at(0)<<endl;
    cout<<pontuacao.at(1)<<endl;
    cout<<pontuacao.at(2)<<endl;
    cout<<pontuacao.at(3)<<endl;
    cout<<pontuacao.at(4)<<endl;

    cout<<"existem "<<pontuacao.size()<<" pontuacoes no vetor"<<endl;



    // criação de um vetor com tamanho definido pelo usuario utilizando for
    cout<<"======================================================================"<<endl;
    vector<int> numeros;
    int tamanho;

    cout << "Digite o tamanho do vetor: ";
    cin >> tamanho;

    cout << "Digite os elementos do vetor:" <<endl;
    for (int i = 0; i < tamanho; i++) {
        int elemento;
        cin >> elemento;
        numeros.push_back(elemento);
    }

    cout << "O vetor inserido foi:";
    for (int i = 0; i < tamanho; i++) {
        cout << " " << numeros.at(i); // numero[i]
    }
    cout << endl;

    // soma e media de elementos do vetor

    int soma{0};
    int media{0};
    int i{0};

    for (i=0; i < tamanho; i++){ //numeros.size() sendo utilizado como criterio de parada no for estava apresentando um bug
        soma += numeros.at(i);
    }
    cout<<"A soma dos elementos do vetor eh: "<<soma<<endl;
    media = soma/numeros.size(); // outra opção valida
    cout<<"a media dos valores do vetor eh: "<<media<<endl;


return 0;

}