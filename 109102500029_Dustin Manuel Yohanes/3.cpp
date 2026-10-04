#include <iostream>

using namespace std;

void tukarPointer(int *p1, int *p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

void tampilkanArray2D(int arr[3][3], string namaArray) {
    cout << "Isi " << namaArray << ":\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
}

void tukarPosisiArray2D(int arr1[3][3], int arr2[3][3], int baris, int kolom) {
    tukarPointer(&arr1[baris][kolom], &arr2[baris][kolom]);
}

int main() {
    int array1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int array2[3][3] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    int x = 10, y = 99;
    int *ptr1 = &x;
    int *ptr2 = &y;

    cout << "================ TAMPILAN AWAL ================\n";
    tampilkanArray2D(array1, "Array 1");
    tampilkanArray2D(array2, "Array 2");

    int b = 0, k = 2;
    cout << "--- Menukarkan isi Array 1 dan Array 2 pada posisi [" << b << "][" << k << "] ---\n\n";
    tukarPosisiArray2D(array1, array2, b, k);

    cout << "================ SETELAH PENUKARAN ARRAY ================\n";
    tampilkanArray2D(array1, "Array 1");
    tampilkanArray2D(array2, "Array 2");

    cout << "================ DEMO TUKAR POINTER ================\n";
    cout << "Nilai Sebelum Ditukar : *ptr1 = " << *ptr1 << ", *ptr2 = " << *ptr2 << endl;
    tukarPointer(ptr1, ptr2);
    cout << "Nilai Setelah Ditukar : *ptr1 = " << *ptr1 << ", *ptr2 = " << *ptr2 << endl;

    return 0;
}