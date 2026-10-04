#include <iostream>
#include <string>

using namespace std;

struct Mahasiswa {
    string nama;
    string nim;
    float uts;
    float uas;
    float tugas;
    float nilai_akhir;
};

float hitungNilaiAkhir(float uts, float uas, float tugas) {
    return (0.3 * uts) + (0.4 * uas) + (0.3 * tugas);
}

int main() {
    const int MAX = 10;
    Mahasiswa mhs[MAX];
    int n;

    cout << "Masukkan jumlah mahasiswa (max 10): ";
    cin >> n;

    if (n > MAX) {
        cout << "Jumlah melebihi batas maksimum (10)." << endl;
        return 1;
    }

    for (int i = 0; i < n; i++) {
        cout << "\n--- Data Mahasiswa ke-" << i + 1 << " ---" << endl;
        cin.ignore(); 
        cout << "Nama        : ";
        getline(cin, mhs[i].nama);
        cout << "NIM         : ";
        cin >> mhs[i].nim;
        cout << "Nilai UTS   : ";
        cin >> mhs[i].uts;
        cout << "Nilai UAS   : ";
        cin >> mhs[i].uas;
        cout << "Nilai Tugas : ";
        cin >> mhs[i].tugas;

        mhs[i].nilai_akhir = hitungNilaiAkhir(mhs[i].uts, mhs[i].uas, mhs[i].tugas);
    }

    cout << "\n================ DATA MAHASISWA ================\n";
    for (int i = 0; i < n; i++) {
        cout << "Mahasiswa " << i + 1 << ":" << endl;
        cout << "Nama        : " << mhs[i].nama << endl;
        cout << "NIM         : " << mhs[i].nim << endl;
        cout << "Nilai UTS   : " << mhs[i].uts << endl;
        cout << "Nilai UAS   : " << mhs[i].uas << endl;
        cout << "Nilai Tugas : " << mhs[i].tugas << endl;
        cout << "Nilai Akhir : " << mhs[i].nilai_akhir << endl;
        cout << "------------------------------------------------\n";
    }

    return 0;
}