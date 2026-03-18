#include <iostream>
using namespace std;

int main() {
    int x;

    cout << "Masukkan nilai x : ";
    cin >> x;

    if (x > 5 && x < 8) {
        cout << "A";
    } 
    else if (x >= 8) {
        cout << "B";
    } 
    else {
        cout << "C";
    }

    return 0;
}