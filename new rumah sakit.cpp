#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int pasien[101];
    int prefix[101];

    // Input jumlah pasien per hari
    for (int i = 1; i <= N; i++) {
        cin >> pasien[i];
    }

    // Prefix sum
    prefix[0] = 0;
    for (int i = 1; i <= N; i++) {
        prefix[i] = prefix[i - 1] + pasien[i];
    }

int Q;
cin >> Q;

// Proses setiap periode
    for (int i = 1; i <= Q; i++) {
        int X, Y;
        cin >> X >> Y;

        int total = prefix[Y] - prefix[X - 1];
        cout << total << endl;
    }

    return 0;
}
