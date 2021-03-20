#include <conio.h>
#include <iostream>


using namespace std;

#define MAX 500

struct queue {
  int plat[MAX];
  int depan;
  int rear;
  int count;
};

struct stack {
  int plat[MAX];
  int count;
};

void InisialisasiQueue(struct queue *q) {
  q->depan = q->rear = 0;
  q->count = 0;
}

void InisialisasiStack(struct stack *s) { s->count = 0; }

void push(int plt, struct stack *s) {
  s->count++;
  s->plat[s->count] = plt;
}

int pop(struct stack *s) {
  int plt;

  plt = s->plat[s->count];
  s->count--;
  return (plt);
}

void normalisasi_queue(int x, struct queue *q, struct stack *s) {
  do {
    q->plat[x] = q->plat[x + 1];
    x++;
  } while (x < q->rear);

  q->rear--;
  q->count--;

  do {
    q->depan--;
    q->plat[q->depan] = pop(s);
    q->count++;
  } while (s->count != 0);
}

int cek_mobil(int plt, struct queue *q) {
  int i, hasil;

  for (i = q->depan; i <= q->rear; i++) {
    if (q->plat[i] == plt) {
      hasil = i;
      break;
    } else if ((q->plat[i] != plt) && (i == q->rear)) {
      hasil = 0;
    }
  }
  return (hasil);
}

void masuk(int plt, struct queue *q) {
  if (q->rear == MAX) {
    cout << "\nAntrian Penuh ! \n" << endl;
    return;
  } else if (q->count == 0) {
    q->rear++;
    q->plat[q->rear] = plt;
    q->count++;
    q->depan++;
  } else {
    q->rear++;
    q->plat[q->rear] = plt;
    q->count++;
  }
}

void keluar(int plt, struct queue *q, struct stack *s) {
  int i, x;

  i = q->depan;
  if (q->count == 0) {
    cout << "\nAntrian Kosong !\n" << endl;
    getch();
    return;
  } else if (cek_mobil(plt, q) == 0) {
    cout << "\nPlat mobil yang anda masukkan tidak ada dalam antrian !\n"
         << endl;
    getch();
    return;
  } else if ((cek_mobil(plt, q) == q->depan) && (q->count > 1)) {
    q->depan++;
    q->count--;
    return;

  } else if ((cek_mobil(plt, q) == q->depan) && (q->count == 1))
    InisialisasiQueue(q);
  else {
    x = cek_mobil(plt, q);
    cout << "\nMobil yang keluar sementara : \n" << endl;
    for (i = q->depan; i < x; i++) {
      printf("- Mobil plat nomor %d\n", q->plat[i]);
      push(q->plat[i], s);
      q->depan++;
      q->count--;
    }
    normalisasi_queue(x, q, s);
    getch();
    return;
  }
}

void tampil(struct queue *q) {
  int i, x;
  system("cls");
  x = q->depan;
  cout << "=================================\n" << endl;
  cout << "Data antrian mobil yang parkir : \n" << endl;
  cout << "=================================\n" << endl;
  if (q->count == 0)
    cout << "\nTidak ada mobil yang sedang parkir\n" << endl;
  else {
    for (i = 1; i <= q->count; i++) {
      cout << "Mobil plat nomor " << i << q->plat[x] << endl << endl;
      x++;
    }
    cout << "\nJumlah mobil yang parkir : " << q->count << endl << endl;
  }
  cout << "\n\n*Tekan sembarang tombol untuk kembali ke pilihan*" << endl;
  getch();
  return;
}

int main() {
  struct queue q;
  struct stack s;
  int jawab;
  int plt;

  InisialisasiQueue(&q);
  InisialisasiStack(&s);

  do {
    cout << "=========================" << endl;
    cout << "PROGRAM ANTRIAN MOBIL" << endl;
    cout << "=========================" << endl;
    cout << "1. Masukkan mobil" << endl;
    cout << "2. Keluarkan mobil" << endl;
    cout << "3. Tampilkan antrian" << endl;
    cout << "4. Keluar" << endl;
    cout << "=========================" << endl;
    cout << "Pilihan anda :  ";
    cin >> jawab;
    if (jawab == 1) {
      cout << "Masukkan nomor plat mobil masuk (angka) :" ;
      cin >> plt;
      masuk(plt, &q);
      tampil(&q);
    } else if (jawab == 2) {
      cout << "Masukkan nomor plat mobil keluar (angka) :" ;
      cin >> plt;
      keluar(plt, &q, &s);
      tampil(&q);
    } else if (jawab == 3) {
      tampil(&q);
    } else if (jawab == 4)
      cout << "TERIMAKASIH TELAH MENGGUNAKAN PROGRAM INI" << endl;
    else {
      cout << "\n\nPilihan tidak valid. Silahkan ulangi!" << endl;
      getch();
    }
  } while (jawab != 4);
}