#include <iostream>

using namespace std;

int main (void)
{
    int i = 0;

    cout << "\nNumeros pares de 1 a 100" << "\n";
    for (i=1; i<=100; i++)
        {
            if (i % 2 == 0)
            {
                cout << i << "\n";
            }
        }

    cout << endl;
}