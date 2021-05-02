#include <cstring>
#include <iostream>

using namespace std;

struct tree {
  string nim;
  string nama;
  string prodi;
  tree *left;
  tree *right;
};

int isEmpty(tree **root) {
  if ((*root) == NULL)
    return 1;
  else
    return 0;
}

void insertdata(tree **root, string newnim, char newnama[], char newprodi[]) {
  if (isEmpty(&(*root)) == 1) {
    tree *newitem = new tree;
    newitem->nim = newnim;
    newitem->nama = newnama;
    newitem->prodi = newprodi;
    newitem->left = NULL;
    newitem->right = NULL;
    (*root) = newitem;
    (*root)->left = NULL;
    (*root)->right = NULL;
    cout << "Data ditambahkan\n";
  } else if (newnim < (*root)->nim)
    insertdata(&(*root)->left, newnim, newnama, newprodi);
  else if (newnim > (*root)->nim)
    insertdata(&(*root)->right, newnim, newnama, newprodi);
  else if (newnim == (*root)->nim)
    cout << "Data sudah ada\n";
}

tree *searchit(tree *root, string nim) {
  if (root == NULL)
    return NULL;
  else if (nim < root->nim)
    return (searchit(root->left, nim));
  else if (nim > root->nim)
    return (searchit(root->right, nim));
  else if (nim == root->nim) {
    cout << "Data ditemukan\n";
    cout << "Nama : " << root->nama << endl;
    cout << "NIM  : " << root->nim << endl;
    cout << "Prodi: " << root->prodi << endl;
  }
  return root;
}

int main() {
  int kodeprodi, menu;
  tree *root;
  root = NULL;
  string nim;
  char prodi[100], nama[100];
  char ulang = 'y';

  while ((ulang == 'y') || (ulang == 'Y')) {
    system("clear");
    cout << "1. Masukkan Data Baru\n";
    cout << "2. Cari Data\n";
    cout << "3. Tampilkan Data\n\n";
    cout << "Masukkan pilihan anda: ";
    cin >> menu;

    switch (menu) {
    case 1: {
      cout << "Masukkan NIM: ";
      cin >> nim;
      cout << "Masukkan Nama: ";
      cin.ignore();
      cin.getline(nama, 100);
      cout << "Kode prodi: \n"
           << "1. S1 Teknik Informatika\n"
           << "2. S1 Sistem Informasi\n"
           << "3. S1 Pendidikan Teknologi Informasi\n"
           << "4. D4 Manajemen Informatika\n";
      cout << "\nMasukkan Kode Prodi (urutan angkanya): ";
      cin >> kodeprodi;
      switch (kodeprodi) {
      case 1: {
        strcpy(prodi, "S1 Teknik Informatika");
        break;
      }
      case 2: {
        strcpy(prodi, "S1 Sistem Informasi");
        break;
      }
      case 3: {
        strcpy(prodi, "S1 Pendidikan Teknologi Informasi");
        break;
      }
      case 4: {
        strcpy(prodi, "D4 Manajemen Informatika");
        break;
      }
      }
      insertdata(&root, nim, nama, prodi);
      break;
    }

    case 2: {
      cout << "Masukkan NIM: ";
      cin >> nim;
      searchit(root, nim);
      break;
    }
    }
    cout << "Apa anda ingin kembali ke menu?(y/n): ";
    cin >> ulang;
  }
}
