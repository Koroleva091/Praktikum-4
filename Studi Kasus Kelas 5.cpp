#include <iostream>            
using namespace std;         
int main() {                     
    int num;                     
    cout << "Masukkan sebuah angka: "; 
    cin >> num;                  
    cout << "Faktor-faktor dari " << num << " adalah: ";
    for (int i = 1; i <= num; ++i) {
        if (num % i == 0) {
            cout << i << " ";
        }
    }
    return 0;           
}