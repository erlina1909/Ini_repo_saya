#include <iostream>
using namespace std;

int cariMin(int arr[], int n) {
    int min = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] < min) min = arr[i];
    return min;
}

int cariMax(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > max) max = arr[i];
    return max;
}

void hitungRata(int arr[], int n) {
    float total = 0;
    for (int i = 0; i < n; i++)
        total += arr[i];
    cout << "Rata-rata: " << total / n << endl;
}

int main() {
    int arrA[] = {11, 8, 5, 7, 12, 26, 3, 54, 33, 55};
    int n = 10, pilih;

    do {
        cout << "\n--- Menu Array ---\n";
        cout << "1. Tampilkan isi array\n";
        cout << "2. Cari nilai maksimum\n";
        cout << "3. Cari nilai minimum\n";
        cout << "4. Hitung rata-rata\n";
        cout << "5. Keluar\n";
        cout << "Pilih: ";
        cin >> pilih;

        switch (pilih) {
        case 1:
            for (int i = 0; i < n; i++) cout << arrA[i] << " ";
            cout << endl;
            break;
        case 2:
            cout << "Nilai maksimum: " << cariMax(arrA, n) << endl;
            break;
        case 3:
            cout << "Nilai minimum: " << cariMin(arrA, n) << endl;
            break;
        case 4:
            hitungRata(arrA, n);
            break;
        case 5:
            cout << "Selesai.\n";
            break;
        default:
            cout << "Pilihan tidak valid!\n";
        }
    } while (pilih != 5);

    return 0;
}
