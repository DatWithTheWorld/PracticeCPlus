#include<iostream>
#include<cmath>
using namespace std;

void nhapmang(int &n, int a[]){
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
}
void xoabk(int &n,int a[],int vt){
	for(int i=vt+1;i<n;i++){
		a[i-1]=a[i];
	}
	n--;
}
void xoatrung(int &n,int a[]){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]==a[j]){
				xoabk(n,a,j);
					i--;
			}
		
		}
	}
}
void xuat(int &n, int a[]){
	for(int i=0;i<n;i++){
		cout << a[i] << " ";
	}
}
int main(){
	
	int n;
	cin >> n;
	int a[n];
	int b[n];
	nhapmang(n, a);
	xoatrung(n,a);
	xuat(n,a);
  




	return 0;
	
}
