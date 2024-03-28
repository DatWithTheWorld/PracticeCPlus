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
void doichohang(int a[][100],int m,int n,int x,int y){
	int m1[100],m2[100];
	int i=0,dem=0;
	for(int j=0;j<n;j++){
		m1[i]=a[x-1][j];
		i++;
	}
	for(int j=0;j<n;j++){
		m2[dem]=a[y-1][j];
	dem++;
	}
	for(int j=0;j<n;j++){
		a[x-1][j]=m2[j];
	}
	for(int j=0;j<n;j++){
		a[y-1][j]=m1[j];
	}
	
}
void doichocot(int a[][100],int m,int n,int x,int y){
	int m1[100],m2[100];
	int j=0,dem=0;
	for(int i=0;i<m;i++){
		m1[j]=a[i][x-1];
		j++;
	}
	for(int i=0;i<m;i++){
		m2[dem]=a[i][y-1];
	dem++;
	}
	for(int i=0;i<n;i++){
		a[i][x-1]=m2[i];
	}
	for(int i=0;i<n;i++){
		a[i][y-1]=m1[i];
	}
	
}
int main(){
	int m,n;
	cin >> m;
	cin >> n;
	int a[100][100];
   input(a,m,n);
   output(a,m,n);
   cout << endl;
   int x,y;
   cin >> x;
   cin >> y;
   doichohang(a,m,n,x,y);
   output(a,m,n);
   cout << endl;
   int k,z;
   cin >> k;
   cin >> z;
   doichocot(a,n,n,k,z);
   output(a,m,n);
	return 0;

