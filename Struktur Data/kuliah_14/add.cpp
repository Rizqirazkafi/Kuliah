#include "iostream"

using namespace std;

typedef struct Tree{
    int data;
    Tree *left;
    Tree *right;
};

int main(){
    Tree *pohon;
    pohon = NULL;
    int isEmpty(Tree *pohon){
        if(pohon == NULL)
            return 1;
        else return 0;
    }
}