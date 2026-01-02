#include <iostream>
using namespace std;

void pindahPanekuk(int n, char dari, char bantu, char tujuan) {
    if (n == 1) {
        cout << "Pindahkan panekuk 1 dari Piring " 
             << dari << " ke Piring " << tujuan << endl;
        return;
    }

    pindahPanekuk(n - 1, dari, tujuan, bantu);
    cout << "Pindahkan panekuk " << n 
         << " dari Piring " << dari 
         << " ke Piring " << tujuan << endl;
    pindahPanekuk(n - 1, bantu, dari, tujuan);
}

int main() {
    int N;
    cout << "Masukkan jumlah panekuk: ";
    cin >> N;

    pindahPanekuk(N, 'A', 'B', 'C');

    return 0;
}
