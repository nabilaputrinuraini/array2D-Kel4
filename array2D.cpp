#include <iostream>
using namespace std;

void tampilkanArray(int data[][3], int baris, int kolom) {
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << data[i][j] << " ";
        }
        cout << endl;
    }
}

void tukar(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void selectionSort2D(int data[][3], int baris, int kolom) {
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {

            int minBaris = i;
            int minKolom = j;

            for (int x = i; x < baris; x++) {
                int yStart = (x == i) ? j + 1 : 0; 

                for (int y = yStart; y < kolom; y++) {
                    if (data[x][y] < data[minBaris][minKolom]) {
                        minBaris = x;
                        minKolom = y;
                    }
                }
            }

            tukar(data[i][j], data[minBaris][minKolom]);
        }
    }
}

int main() {
    int data[2][3] = {
        {4, 7, 8},
        {2, 6, 5}
    };

    int baris = 2;
    int kolom = 3;

    cout << "Array sebelum diurutkan:\n";
    tampilkanArray(data, baris, kolom);

    selectionSort2D(data, baris, kolom);

    cout << "\nArray setelah diurutkan (Selection Sort):\n";
    tampilkanArray(data, baris, kolom);

    return 0;
}
