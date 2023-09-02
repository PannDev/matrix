#include <bits/stdc++.h>
using namespace std;
#define PannDev ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


int main() { PannDev system("clear");
    int banyakMatrix, baris, kolom;

    cout << "Ada berapa matrix? ";
    cin >> banyakMatrix;
    cout << "Baik saya buatkan sebanyak " << banyakMatrix << " matrix.\n\n";

    //! array dinamis
    double*** dinamisMatrix = new double**[banyakMatrix];

    cout << "ada berapa baris? ";
    cin >> baris;
    cout << "ada berapa kolom? ";
    cin >> kolom;
    cout << endl;

    //? cin >> dinamisMatrix[baris][kolom]
    for (int k = 0; k < banyakMatrix; k++) {
        dinamisMatrix[k] = new double*[baris];
        cout << "Matrix " << char('A' + k) << ":" << endl;

        for (int i = 0; i < baris; i++) {
            dinamisMatrix[k][i] = new double[kolom];

            for (int j = 0; j < kolom; j++) {
                cout << "Masukkan elemen " << i + 1 << "," << j + 1 << ": ";
                cin >> dinamisMatrix[k][i][j];
            }

        }
        cout << "\n";
    }

    // matrix biasa
    for (int k = 0; k < banyakMatrix; k++) {
        cout << "Matriks " << char('A' + k) << " :" << endl;
        for (int i = 0; i < baris; i++) {
            for (int j = 0; j < kolom; j++) {
                cout << dinamisMatrix[k][i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    // transpose
    cout << endl;
    for (int k = 0; k < banyakMatrix; k++) {
        cout << "Transpose dari Matriks " << char('A' + k) << " :" << endl;
        for (int j = 0; j < kolom; j++) {
            for (int i = 0; i < baris; i++) {
                cout << dinamisMatrix[k][i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}