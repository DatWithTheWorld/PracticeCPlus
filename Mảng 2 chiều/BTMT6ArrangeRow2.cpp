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
void sxh2(int a[][100],int m, int n){
	int m1[100];
	int i=0;
	for(int j=0;j<n;j++){
		m1[i]=a[1][j];
		i++;
	}
	for(int z=0;z<i-1;z++){
	   for(int k=z+1;k<i;k++){
	   	if(m1[z]<m1[k]){
	   		int temp = m1[z];
	   		m1[z]=m1[k];
	   		m1[k]=temp;
		   }
	   }
	}
	for(int j=0;j<n;j++){
		a[1][j]=m1[j];
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
   sxh2(a,m,n);
   output(a,m,n);
	return 0;
}
