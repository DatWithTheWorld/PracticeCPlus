#include<iostream>
#include<cmath>
using namespace std;

void nhapmang(int &n, int a[]){
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
}
void nhanmang(int n,int a[],int b[],int c[]){
	
	for(int i=0;i<n;i++){
		c[i]=a[i]*b[i];
	}
	
	for(int i=0;i<n;i++){
		cout << c[i] << " ";
	}
}
int main(){
	
	int n;
	cin >> n;
	int a[n];
	int b[n];
	int c[n];
	nhapmang(n, a);
	nhapmang(n,b);
	nhanmang(n,a,b,c);
	return 0;
	
}
