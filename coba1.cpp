#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    if (a % b == 0 && a / b > 2) {
        cout << "VALID";
    } else {
        cout << "TIDAK";
    }

    return 0;
}