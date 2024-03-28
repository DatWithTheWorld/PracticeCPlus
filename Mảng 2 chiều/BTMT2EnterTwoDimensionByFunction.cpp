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
		for(int j=0;j<n;j++){
			cout <<  a[i][j];
		}
	}
}
int main(){
	int m,n;
	cin >> m;
	cin >> n;
	int a[100][100];
   input(a,m,n);
   output(a,m,n);
	return 0;
}
