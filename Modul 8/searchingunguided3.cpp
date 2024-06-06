#include <iostream>

using namespace std;

int HitungAngka( const int array[], int size, int target) {
    int count = 0;
    
    for (int i = 0; i < size; i++) {
        if (array[i] == target) {
            count++;
        }
    }
    
    return count;
}

int main() {
    const int size = 10;
    int array[size] = {9, 4, 1, 4, 7, 10, 5, 4, 12, 4};
    int target = 4;
    
    int count = HitungAngka(array, size, target);
    
    cout << "=======================================" << endl;
    cout << "========MENGHITUNG ANGKA TARGET========" << endl;
    cout << "=======================================" << endl;
    cout << "Jumlah angka " << target <<  endl; 
    cout << "Ditemukan dalam data sebanyak: " << count << endl;
    
    return 0;
}
