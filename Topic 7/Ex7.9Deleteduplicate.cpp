#include<iostream>
#include<cmath>
using namespace std;

void nhapmang(int &n, int a[]){
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
}

void xoavitri(int a[], int &n, int vt){
	for(int i=vt +1 ;i<n;i++){
		a[i-1]=a[i];
	}
	n--;
}
void xoatrung(int a[], int &n ){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[j]==a[i]){
				xoavitri(a,n,j);
				i--;
			}
		}
	}
}

void xuatmang(int &n, int a[]){
	for(int i=0; i<n;i++){
		cout << a[i] << " ";
	}
}

int main(){
	
	int n;
	cin >> n;
	int a[n];
	nhapmang(n, a);
    xoatrung(a, n);
    xuatmang(n,a);
	return 0;
	
}
