
#include <iostream>
#include <math.h>

using namespace std;
//de quy
//int Fibonacci(int n)
//{
//    if (n == 1 || n == 2)
//        return 1;
//    return Fibonacci(n - 1) + Fibonacci(n - 2);
//}
int Fibonacci(int n){

	if(n==1||n==2) return 1;
	else{
		int a=1,b=1;
		int c;
		for(int i=3;i<=n;i++){
			c=a+b;
			a=b;
			b=c;
		}
		return c;
	}
}
int main()
{
    int n;
    do{
    	cout << "Nhap n = "; cin >> n;
    	if(n<=0)cout<<"Nhap lai!(n>0)\n";
	}while(n<=0);
    cout << "So Fibonacci thu " << n << " la: " << Fibonacci(n);
    return 0;
}

