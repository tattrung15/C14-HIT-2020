#include<iostream>
#include<math.h>
#define MAX 200

using namespace std;

void NhapN(int &n){
    do{
        cout << "Nhap n(1<=n<=30): ";
        cin >> n;
    }while(n < 1 || n > 30);
}

void NhapMang(float a[], int n){
    for(int i = 0; i < n; i++){
        cout << "Nhap a[" << i << "] = ";
        cin >> a[i];
    }
}

void XuatMang(float a[], int n){
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
}

void XuatMangNguoc(float a[], int n){
    for(int i = n - 1; i >= 0; i--){
        cout << a[i] << " ";
    }
}

void Tinh(float a[], int n){
    int dem = 0;
    float s = 0;
    for(int i = 0; i < n; i++){
        if(a[i] < 0 && fabs(a[i]) > 10){
            s += a[i];
            dem++;
        }
    }
    cout << "\nTBC = " << s/dem;
}

void HoanDoi(float &a, float &b){
    float temp = a;
    a = b;
    b = temp;
}

void SapXep(float a[], int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = n - 1; j > i; j--){
            if(a[j - 1] <  a[j]){
                HoanDoi(a[j - 1], a[j]);
            }
        }
    }
}

int main(){
    int n;
    float a[MAX];
    NhapN(n);
    NhapMang(a, n);
    cout << "Mang vua nhap: ";
    XuatMangNguoc(a, n);
    Tinh(a, n);
    SapXep(a, n);
    cout << "\nMang sau khi sap xep: ";
    XuatMang(a, n);
    return 0;
}
