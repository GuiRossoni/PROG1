#include<iostream>

using namespace std;

int main ()
{
    int num;
    const int min = 10;
    const int max = 100;

    cout << "Informe um número entre " << min << " e " << max << ": ";
    cin >> num;

    if (num >= min)
    {
        cout << "\n =========== IF 1 =========== " << "\n";
        cout << num << " eh maior ou igual que " << min << "\n";

        int dif (num - min);
        cout << num << " eh " << dif << " maior que " << min << "\n";
    }

    if (num <= max)
    {
        cout << "\n =========== IF 2 =========== " << "\n";
        cout << num << " eh menor ou igual que " << max << "\n";

        int dif (max - num);
        cout << num << " eh " << dif << " maior que " << max << "\n";
    }

        if (num <= max && num >= min)
    {
        cout << "\n =========== IF 3 =========== " << "\n";
        cout << num << " esta na faixa " << "\n";
        cout << num << " isso significa que IF 1 e IF 2 vao aparecer no display " << "\n";
       
    }
    
       if (num == max || num == min)
    {
        cout << "\n =========== IF 4 =========== " << "\n";
        cout << num << " esta no limite " << "\n";
       
    }

    

    return 0;
}