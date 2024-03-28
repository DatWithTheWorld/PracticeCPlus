#include<iostream>
using namespace std;
void input(int a[][100],int m, int n){
		for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin >> a[i][j];
		}
	}
}
void output(int a[][100],int m,int n){
		for(int i=0;i<m;i++){
			cout << endl;
		for(int j=0;j<n;j++){
			cout <<  a[i][j] << "  ";
		}
	}
}
void tonghaimang(int a[][100],int b[][100],int c[][100],int m, int n){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			c[i][j]=a[i][j]+b[i][j];
		}
	}
}
int main(){
	int m,n;
	cin >> m;
	cin >> n;
	int a[100][100];
	int b[100][100];
	int c[100][100];
   input(a,m,n);
   output(a,m,n);
   cout << endl;
   input(b,m,n);
   output(b,m,n);
   tonghaimang(a,b,c,m,n);
   cout << endl;
   output(c,m,n);
	return 0;
}
