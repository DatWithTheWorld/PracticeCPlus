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
		cout << endl;
	}
}

int lncot(int a[][100],int m, int n){
			int max=0;
	for(int j=0;j<n;j++){
	for(int i=0;i<m;i++){
			if(a[i][j]>max){
				max=a[i][j];
			}
	}
	}
	return max;
}
int nn(int a[][100],int m, int n){
	int min=a[m-1][n-1];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(a[i][j]<min){
				min=a[i][j];
			}
		}
	}
	return min;
}
int main(){
	int m,n;
	cin >> m;
	cin >> n;
	int a[100][100];
   input(a,m,n);
   output(a,m,n);
   cout << " max = "<<lncot(a,m,n) << endl;;
 cout << " min = "<<nn(a,m,n);
	return 0;
}
