#include <iostream>

using namespace std;

int main() {
  char ulang = 'Y';
  while (ulang == 'Y' || ulang == 'y') {

    struct data {
      char nama[20];
      long long int nim;
      int tugas;
      int uts;
      int uas;
      int partisipasi;
      int cal;
      int no;
      int tot;
    } mahasiswa[100];

    int x, i;
    cout << "=========Rekap Nilai=========" << endl;
    cout << "Masukan Jumlah Mahasiswa : ";
    cin >> i;
    for (x = 0; x < i; x++) {
      cout << endl;
      cout << "input mahasiswa ke           : ";
      cin >> mahasiswa[x].no;
      cout << "Masukan Nama Mahasiswa       : ";
      cin >> mahasiswa[x].nama;
      cout << "Masukan NIM Mahasiswa        : ";
      cin >> mahasiswa[x].nim;
      cout << "Masukan Nilai Tugas          : ";
      cin >> mahasiswa[x].tugas;
      cout << "Masukan Nilai Partisipasi    : ";
      cin >> mahasiswa[x].partisipasi;
      cout << "Masukan Nilai UTS            : ";
      cin >> mahasiswa[x].uts;
      cout << "Masukan Nilai UAS            : ";
      cin >> mahasiswa[x].uas;

      mahasiswa[x].tot = (mahasiswa[x].tugas * 0.3) +
                         (mahasiswa[x].partisipasi * 0.2) +
                         (mahasiswa[x].uts * 0.2) + (mahasiswa[x].uas * 0.3);
      cout << "Nilai Akhir                  : " << mahasiswa[x].tot << endl;
    }

    for (x = 0; x < i; x++) {
      cout << endl;
      cout << "Mahasiswa ke     : " << mahasiswa[x].no << endl;
      cout << "Nama Mahasiswa   : " << mahasiswa[x].nama << endl;
      cout << "Nim Mahasiswa    : " << mahasiswa[x].nim << endl;
      cout << "Nilai Tugas      : " << mahasiswa[x].tugas << endl;
      cout << "Nilai UTS        : " << mahasiswa[x].uts << endl;
      cout << "Nilai UAS        : " << mahasiswa[x].uas << endl;
      cout << "Nilai Akhir      : " << mahasiswa[x].tot << endl;
    }
    cout << endl;
    cout << "Gunakan Lagi Program? Y/N : ";
    cin >> ulang;
  }
}
