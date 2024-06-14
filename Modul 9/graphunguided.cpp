//Shiva Indah Kurnia, 2311102035
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int Shiva_2311102035;
    cout << "Silahkan masukkan jumlah simpul: ";
    cin >> Shiva_2311102035;

    vector<string> simpul(Shiva_2311102035);
    vector<vector<int>> busur(Shiva_2311102035, vector<int>(Shiva_2311102035, 0));

    cout << "Silahkan masukkan nama simpul " << endl;
    for (int i = 0; i < Shiva_2311102035; i++)
    {
        cout << "Simpul ke-" << (i + 1) << ": ";
        cin >> simpul[i];
    }

    cout << "Silahkan masukkan bobot antar simpul" << endl;
    for (int i = 0; i < Shiva_2311102035; i++)
    {
        for (int j = 0; j < Shiva_2311102035; j++)
        {
            cout << simpul[i] << " --> " << simpul[j] << " = ";
            cin >> busur[i][j];
        }
    }

    cout << endl;
    cout << setw(7) << " ";
    for (int i = 0; i < Shiva_2311102035; i++)
    {
        cout << setw(8) << simpul[i];
    }
    cout << endl;

    for (int i = 0; i < Shiva_2311102035; i++)
    {
        cout << setw(7) << simpul[i];
        for (int j = 0; j < Shiva_2311102035; j++)
        {
            cout << setw(8) << busur[i][j];
        }
        cout << endl;
    }
}
