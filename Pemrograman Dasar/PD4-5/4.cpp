#include <iostream>
#include <string>

using namespace std;

int main(){
    string username, password;
    int loginAttempt = 0;

    while(loginAttempt < 5){
        cout << "Harap masukkan user name : " ;
        cin >> username;

        cout << "Harap masukkan password :  " ;
        cin >> password;

        if(username == "rizqi" && password == "123")
        {
            cout << "Selamat datang, Rizqi ! \n" <<endl;
            break;
        }
        else{
            cout << "User Name atau Password salah. Silahkan coba lagi \n" <<endl; 
            loginAttempt++;
        }
    }

    if(loginAttempt == 5){
        cout << "Terlalu banyak percobaan login ! Program akan di tutup. \n" <<endl;
        
    }

    cout << "Terima kasih \n" <<endl;

     cin.get();
    return 0;

}