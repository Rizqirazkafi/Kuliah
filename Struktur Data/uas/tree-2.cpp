#include <iostream>
#include <cstring>
using namespace std;

struct tree
{
    string nim;
    string nama;
    string prodi;
    tree *left;
    tree *right;
};

tree *pohon=NULL;

void insertdata(tree **root,string newnim,char newnama[],char newprodi[])
{
    if((*root)==NULL){
        tree *newitem;
        newitem=new tree;
        newitem->nim=newnim;
        newitem->nama=newnama;
        newitem->prodi=newprodi;
        newitem->left=NULL;
        newitem->right=NULL;
        (*root)=newitem;
		(*root)->left=NULL;
		(*root)->right=NULL;
		cout<<"Data ditambahkan\n";
    }
    else if(newnim<(*root)->nim) insertdata(&(*root)->left,newnim,newnama,newprodi);
    else if(newnim>(*root)->nim) insertdata(&(*root)->right,newnim,newnama,newprodi);
    else if(newnim==(*root)->nim) cout<<"Data sudah ada\n";
}

void searchit(tree **root,string cari){
	if((*root)==NULL) cout<<"Data tidak ada\n";
	else if(cari<(*root)->nim) return (searchit(&(*root)->left,cari));
	else if(cari>(*root)->nim) return (searchit(&(*root)->right,cari));
	else if(cari==(*root)->nim){
        cout<<"Data ditemukan\n";
        cout<<"Nama : "<<(*root)->nama<<endl;
        cout<<"NIM  : "<<(*root)->nim<<endl;
        cout<<"Prodi: "<<(*root)->prodi<<endl;
	}
}

void preorder(tree *root)
{
    if(root!=NULL){
        cout<<"Nama : "<<root->nama<<endl;
        cout<<"NIM  : "<<root->nim<<endl;
        cout<<"Prodi: "<<root->prodi<<endl<<endl;
        preorder(root->left);
        preorder(root->right);
    }
}

void inorder(tree *root)
{
    if(root!=NULL){
        inorder(root->left);
        cout<<"Nama : "<<root->nama<<endl;
        cout<<"NIM  : "<<root->nim<<endl;
        cout<<"Prodi: "<<root->prodi<<endl<<endl;
        inorder(root->right);
    }
}

void postorder(tree *root)
{
    if(root!=NULL){
        postorder(root->left);
        postorder(root->right);
        cout<<"Nama : "<<root->nama<<endl;
        cout<<"NIM  : "<<root->nim<<endl;
        cout<<"Prodi: "<<root->prodi<<endl<<endl;
    }
}

int countit(tree *root)
{
    if(root==NULL) return 0;
    else return countit(root->left)+countit(root->right)+1;
}

int height(tree *root)
{
    if(root==NULL) return -1;
    else{
        int u=height(root->left);
        int v=height(root->right);
        if(u>v) return u+1;
        else return v+1;
    }
}

void deletedata(tree **root, string del)
{
    tree *cur;
    tree *parent;
    cur=(*root);
    bool flag=false;

    while(cur!=NULL){
        if(cur->nim==del){
            flag=true;
            break;
        }
        else{
            parent=cur;
            if(del>cur->nim) cur=cur->right;
            else cur=cur->left;
        }
    }

    if(!flag){
        cout<<"Data tidak ada\n";
        return;
    }

    if(height(pohon)==0){
        if(cur->left==NULL && cur->right==NULL){
            (*root)=NULL;
            return;
        }
    }
    else if(height(pohon)>0){
        if(cur->left==NULL && cur->right==NULL){
            if(parent->left==cur){
                parent->left=NULL;
                delete cur;
            }
            else{
                parent->right=NULL;
                delete cur;
            }
            return;
        }
        if((cur->left==NULL && cur->right!=NULL)||(cur->left!=NULL && cur->right==NULL)){
            if(cur->left==NULL && cur->right!=NULL){
                if(parent->left==cur){
                    parent->left=cur->right;
                    delete cur;
                }
                else{
                    parent->right=cur->right;
                    delete cur;
                }
            }
            else{
                if(parent->left==cur){
                    parent->left=cur->left;
                    delete cur;
                }
                else{
                    parent->right=cur->left;
                    delete cur;
                }
            }
            return;
        }
        if(cur->left!=NULL && cur->right!=NULL){
            tree *temp;
            temp=cur->right;

            if((temp->left==NULL)&&(temp->right==NULL)){
                cur=temp;
                delete temp;
                cur->right=NULL;
            }
            else{
                if((cur->right)->left!=NULL){
                    tree *temp2;
                    tree *temp3;
                    temp3=cur->right;
                    temp2=(cur->right)->left;

                    while(temp2->left!=NULL){
                        temp3=temp2;
                        temp2=temp2->left;
                    }

                    cur->nim=temp2->nim;
                    delete temp2;
                    temp3->left=NULL;
                }
                else{
                    tree *tmp;
                    tmp=cur->right;
                    cur->nim=tmp->nim;
                    cur->right=tmp->right;
                    delete tmp;
                }
            }
            return;
        }
    }
}

int main()
{
    int kodeprodi,menu;
    string nim,cari,del;
    char prodi[100],nama[100];
    char ulang='y';

    while((ulang=='y')||(ulang=='Y')){
        // system("cls");
        system("clear");
        cout<<"1. Masukkan Data Baru\n";
        cout<<"2. Cari Data\n";
        cout<<"3. Tampilkan Pre-Order\n";
        cout<<"4. Tampilkan In-Order\n";
        cout<<"5. Tampilkan Post-Order\n";
        cout<<"6. Hapus Data\n";
        cout<<"Masukkan pilihan anda: ";
        cin>>menu;
        cout<<endl;

        switch(menu)
        {
            case 1:{
            cout<<"Masukkan NIM: ";
            cin>>nim;
            cout<<"Masukkan Nama: ";
            cin.ignore();
            cin.getline(nama,100);
            cout<<"Kode prodi: \n"<<"1. S1 Teknik Informatika\n"<<"2. S1 Sistem Informasi\n"<<"3. S1 Pendidikan Teknologi Informasi\n"<<"4. D4 Manajemen Informatika\n";
            cout<<"\nMasukkan Kode Prodi (urutan angkanya): ";
            cin>>kodeprodi;
            switch(kodeprodi)
            {
                case 1:{
                strcpy(prodi,"S1 Teknik Informatika");
                break;
                }
                case 2:{
                strcpy(prodi,"S1 Sistem Informasi");
                break;
                }
                case 3:{
                strcpy(prodi,"S1 Pendidikan Teknologi Informasi");
                break;
                }
                case 4:{
                strcpy(prodi,"D4 Manajemen Informatika");
                break;
                }
            }
            insertdata(&pohon,nim,nama,prodi);
            break;
            }

            case 2:{
            if(pohon!=NULL){
                cout<<"Masukkan NIM: ";
                cin>>cari;
                searchit(&pohon,cari);
            }
            else{
                cout<<"Masih kosong\n";
            }
            break;
            }

            case 3:{
            if(pohon!=NULL){
                preorder(pohon);
            }
            else{
                cout<<"Masih kosong\n";
            }
            break;
            }

            case 4:{
            if(pohon!=NULL){
                inorder(pohon);
            }
            else{
                cout<<"Masih kosong\n";
            }
            break;
            }

            case 5:{
            if(pohon!=NULL){
                postorder(pohon);
            }
            else{
                cout<<"Masih kosong\n";
            }
            break;
            }

            case 6:{
            if(pohon!=NULL){
                cout<<"Masukkan NIM: ";
                cin>>del;
                deletedata(&pohon,del);
                cout<<"Data terhapus\n";
            }
            else{
                cout<<"Masih kosong\n";
            }
            break;
            }
        }
    cout<<"Apa anda ingin kembali ke menu?(y/n): ";
    cin>>ulang;
    }
}
