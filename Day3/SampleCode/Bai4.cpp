#include <iostream>
#include <string.h>

using namespace std;

int main(){
    int n;
    do{
        cout << "Nhap n: ";
        cin >> n;
    }while(n <= 0);
    char sv[n][50];
    for(int i = 0; i < n; i++){
        cout << "Nhap ho ten sv thu "<< (i + 1) << ": ";
        fflush(stdin);
        gets(sv[i]);
    }
    char str[50];
    cout << "Nhap chuoi str: ";
    cin >> str;
    cout << "----------------------" << endl;
    for(int i = 0; i < n; i++){
        if(strstr(sv[i], str) != NULL){
            cout << sv[i] << endl;
        }
    }
    return 0;
}
