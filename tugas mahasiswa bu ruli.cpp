#include <iostream>
using namespace std;

struct Siswa {
    string nama;
    int umur;
    string jurusan;
    int hari, bulan, tahun;
    float uas, uts, tugas, nilaiAkhir;
};

int nomorSiswa = 0;

void inputData(Siswa &s) {
    cout << "======= INPUT DATA SISWA KE-" << nomorSiswa + 1 << " =======" << endl;
    cout << "Masukkan Nama         : ";
    cin >> s.nama;
    cout << "Masukkan Umur         : ";
    cin >> s.umur;
    cout << "Masukkan Jurusan      : ";
    cin >> s.jurusan;
    cout << "Masukkan Tanggal Lahir: ";
    cin >> s.hari;
    cout << "Masukkan Bulan Lahir  : ";
    cin >> s.bulan;
    cout << "Masukkan Tahun Lahir  : ";
    cin >> s.tahun;
    cout << "Masukkan Nilai UAS    : ";
    cin >> s.uas;
    cout << "Masukkan Nilai UTS    : ";
    cin >> s.uts;
    cout << "Masukkan Nilai TUGAS  : ";
    cin >> s.tugas;
    cout << endl;
}

void hitungNilaiAkhir(Siswa &s) {
    s.nilaiAkhir = (s.uas * 0.4) + (s.uts * 0.35) + (s.tugas * 0.25);
}

void tampilkanData(Siswa s) {
    cout << "<<<===================================================>>>" << endl;
    cout << "           HASIL DATA SISWA KE-" << nomorSiswa + 1 << endl;
    cout << "<<<===================================================>>>" << endl;
    cout << "Nama          : " << s.nama << endl;
    cout << "Umur          : " << s.umur << endl;
    cout << "Jurusan       : " << s.jurusan << endl;
    cout << "Tanggal Lahir : " << s.hari << "-" << s.bulan << "-" << s.tahun << endl;

    cout << "\n>>> NILAI <<<" << endl;
    cout << "Nilai UAS   : " << s.uas << endl;
    cout << "Nilai UTS   : " << s.uts << endl;
    cout << "Nilai TUGAS : " << s.tugas << endl;

    cout << "\n>>> BOBOT NILAI AKHIR <<<" << endl;
    cout << "UAS 40% : " << s.uas * 0.4 << endl;
    cout << "UTS 35% : " << s.uts * 0.35 << endl;
    cout << "TUGAS 25%: " << s.tugas * 0.25 << endl;
    cout << "Nilai akhir yaitu : " << s.nilaiAkhir << endl;
    cout << "\n-----------------------------------------------------" << endl;
}

int main() {
    int n;
    cout << "Masukkan Jumlah Pelajar : ";
    cin >> n;
    cout << endl;

    Siswa siswa[n];

    for (nomorSiswa = 0; nomorSiswa < n; nomorSiswa++) {
        inputData(siswa[nomorSiswa]);
        hitungNilaiAkhir(siswa[nomorSiswa]);
    }

    cout << "*****************************************************" << endl;

    for (nomorSiswa = 0; nomorSiswa < n; nomorSiswa++) {
        tampilkanData(siswa[nomorSiswa]);
    }
}
