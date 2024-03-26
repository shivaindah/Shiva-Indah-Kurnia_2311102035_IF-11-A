#include <iostream>
using namespace std;
int main()
{
    int x, y, z;
    cout << "Masukkan jumlah elemen matriks: ";
    cin >> x;
    cout << "Masukkan ukuran matriks (y z): ";
    cin >> y >> z;
    int arr[x][y][z];

    // Input elemen
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            for (int k = 0; k < z; k++)
            {
                cout << "Input Array[" << i << "][" << j << "][" << k << "] = ";
                cin >> arr[i][j][k];
            }
        }
        cout << endl;
    }
    // Output Array
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            for (int k = 0; k < z; k++)
            {
                cout << "Data Array[" << i << "][" << j << "][" << k << "] = " << arr[i][j][k] << endl;
            }
        }
    }

    cout << endl;
    // Tampilan array
    for (int i = 0; i < x; i++)
    {
        cout << "Matriks ke-" << i + 1 << ":" << endl;
        for (int j = 0; j < y; j++)
        {
            for (int k = 0; k < z; k++)
            {
                cout << arr[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}