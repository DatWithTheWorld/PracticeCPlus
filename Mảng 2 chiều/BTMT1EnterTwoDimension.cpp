#include<iostream>
using namespace std;

int main(){
	int m,n;
	cin >> m;
	cin >> n;
	int a[m][n];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin >> a[i][j];
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout <<  a[i][j];
		}
	}
	return 0;
}
