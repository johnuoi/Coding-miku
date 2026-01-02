#include <iostream>
#include <string>
using namespace std;

int main() {
    string kata;
    bool palindrom = true;

    cout << "Masukkan sebuah kata: ";
    cin >> kata;

    int panjang = kata.length();

    for (int i = 0; i < panjang / 2; i++) {
        if (kata[i] != kata[panjang - i - 1]) {
            palindrom = false;
            break;
        }
    }

    if (palindrom) {
        cout << "Kata tersebut adalah palindrom" << endl;
    } else {
        cout << "Kata tersebut bukan palindrom" << endl;
    }

    return 0;
}
