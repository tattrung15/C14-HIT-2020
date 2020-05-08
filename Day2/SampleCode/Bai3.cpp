#include <iostream>
#include <math.h>

using namespace std;

void nhap(int &n){
    do{
        cout << "Nhap n(n>10): ";
        cin >> n;
    }while(n<=10);
}

void snt(int n){
    int j = 2;
    bool check = true;
    for (int i=2; i<=sqrt(n); i++){
        if(n%i==0)
            check = false;
        break;
    }

    if(check) cout << "I love you 3000";
    else {
        bool oper = false;
        while(n>1){
            while(n > 1 && n%j==0){
                if(!oper) oper = true;
                else {
                    cout << "x";
                }
                cout << j;
                n/=j;
            }
            j++;
        }
    }
}

int main(){
    int n;
    nhap(n);
    snt(n);
}
