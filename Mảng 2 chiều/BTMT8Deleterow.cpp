#include<iostream>
using namespace std;
void input(int a[][100],int m, int n){
		for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin >> a[i][j];
		}
	}
}
void output(int a[][100],int &m,int n){
		for(int i=0;i<m;i++){
			cout << endl;
		for(int j=0;j<n;j++){
			cout <<  a[i][j] << "  ";
		}
	}
}
void deleterow(int a[][100],int &m,int n,int x){
	for(int i=x-1;i<m-1;i++){
		for(int j=0;j<n;j++){
			a[i][j]=a[i+1][j];
		}
	}
	m--;
	
}
int main(){
	int m,n,x;
	cin>>m;
	cin>> n;
	int a[100][100];
	input(a,m,n);
	output(a,m,n);
	cin>>x;
	deleterow(a,m,n,x);
	output(a,m,n);
	return 0;
	
}
