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
void tonghangchan(int a[][100],int m, int n){
	for(int i=0;i<m;i++){
		int s=0;
		if((i+1)%2==0){
		for(int j=0;j<n;j++){
			s+=a[i][j];
		}
		cout << " H "<< i+1 << " s = " << s << endl; 
	}
	
	}
}
void lncot(int a[][100],int m, int n){
	for(int j=0;j<n;j++){
		int max=0;
		for(int i=0;i<m;i++){
			if(a[i][j]>max){
				max=a[i][j];
			}
		}
		cout << " c " << j+1 << " max = " << max << endl;
	}
}
int main(){
	int m,n;
	cin >> m;
	cin >> n;
	int a[100][100];
   input(a,m,n);
   output(a,m,n);
   tonghangchan(a,m,n);
   lncot(a,m,n);
	return 0;
}
