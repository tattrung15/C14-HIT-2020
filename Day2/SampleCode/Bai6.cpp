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

void KiemTra(float a[], int n){
    int dem = 0;
    float x;
    cout << "Nhap so thuc x: ";
    cin >> x;
    for(int i = 0; i < n; i++){
        if(a[i] == x){
            dem++;
            cout << "Vi tri so "<< x << " xuat hien: " << i + 1 << endl;
        }
    }
    if(dem == 0){
        cout << "So " << x << " khong xuat hien trong mang";
    } else {
        cout << "So " << x << " xuat hien " << dem << " lan";
    }
}

void XoaPT(float a[], int &n){
    int k;
    do{
        cout << "\nNhap k(1<=k<=" << n <<"): ";
        cin >> k;
    }while(k < 1 || k > n);
    for(int i = k; i < n; i++){
        a[i - 1] = a[i];
    }
    n--;
}

int main(){
    int n;
    float a[MAX];
    NhapN(n);
    NhapMang(a, n);
    KiemTra(a, n);
    XoaPT(a, n);
    cout << "Mang sau khi xoa: ";
    XuatMang(a, n);
    return 0;
}
