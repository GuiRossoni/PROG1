#include <iostream>

using namespace std;

int main()
{
    int num1;
    int num2;

    system("cls");
    
    cout << boolalpha;
    
    // cout << "Informe dois numeros inteiros separados por espaco: ";
    // cin >> num1 >> num2;

    // cout << num1 << " > " << num2 << " : " << (num1>num2) << endl;
    // cout << num1 << " >= " << num2 << " : " << (num1>=num2) << endl; 
    // cout << num1 << " < " << num2 << " : " << (num1<num2) << endl; 
    // cout << num1 << " <= " << num2 << " : " << (num1<=num2) << endl; 

    const int maior = 20;
    const int menor = 10;

    cout << "\n Infomre um valor maior que " << maior << " ";
    cin >> num1;

    cout << num1 << " > " << maior << " eh " << (num1>maior) << endl;

    cout << "\n Infomre um valor menor ou igual que " << menor << " ";
    cin >> num2;

    cout << num2 << " <= " << maior << " eh " << (num2<=menor) << endl;

    return 0;
}