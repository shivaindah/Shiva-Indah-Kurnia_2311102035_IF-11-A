#include <iostream>
using namespace std;

int main()
{
    int bilangan[10];
    cout << "Data Array : ";
    for (int i = 0; i < 10; i++)
    {
        cin >> bilangan[i];
    }
    cout << "Nomor Genap : ";
    for (int i = 0; i < 10; i++)
    {
        if (bilangan[i] % 2 == 0)
        {
            cout << bilangan[i] << " ";
        }
    }
    cout << endl;
    cout << "Nomor Ganjil : ";
    for (int i = 0; i < 10; i++)
    {
        if (bilangan[i] % 2 != 0)
        {
            cout << bilangan[i] << " ";
        }
    }

    return 0;
}