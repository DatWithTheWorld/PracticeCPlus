#include<iostream>
#include<cmath>
using namespace std;

void nhapmang(int h,int w, int a[][100]){
	for(int i=0;i<h;i++){
		for(int j=0;j<w;j++){
			cin >> a[i][j];
		}
	}
}
void xuatmang(int h, int w, int a[][100]){
	for(int i=0;i<h;i++){
		for(int j=0;j<w;j++){
			cout <<"a["<<i<<"]["<<j<<"]="<<a[i][j]<< endl;
		}
	}
}
int tongptham(int n, int h, int w, int a[][100]){
	int s=0;
	for(int j=0;j<w;j++){
		s+=a[n][j];
	}
	return s;
}
int tongptcot(int m, int h, int w, int a[][100]){
	int s=0;
	for(int i=0;i<h;i++){
		s+=a[i][m];
	}
	return s;
}
int findmaxhang(int n,int h, int w, int a[][100]){
	int max = a[n][0];
	for(int j=0;j<w;j++){
		if(a[n][j]>max){
			max = a[n][j];
		}
	}
	return max;
}
int findminhang(int n,int h, int w, int a[][100]){
		int min = a[n][0];
	for(int j=0;j<w;j++){
		if(a[n][j]<min){
			min = a[n][j];
		}
	}
	return min;
}
int findmaxcot(int m,int h, int w, int a[][100]){
	int max = a[0][m];
	for(int j=0;j<h;j++){
		if(a[j][m]>max){
			max = a[j][0];
		}
	}
	return max;
}
int findmincot(int m,int h, int w, int a[][100]){
		int min = a[0][m];
	for(int j=0;j<h;j++){
		if(a[j][m]<min){
			min = a[j][m];
		}
	}
	return min;
}
int main(){
	
	int h,w;
	cout << "Hang: ";
	cin >> h;
	cout << "Cot : ";
	cin >> w;
int a[100][100];
int n;
	nhapmang(h,w, a);
	xuatmang(h,w,a);
	cout << "Hang: ";
	cin >> n;
	if(n>=0&&n<h){
	   cout <<	tongptham(n,h,w,a)<<endl;
	   cout << "Max : "<<findmaxhang(n,h,w,a)<<endl;
	   cout << "Min : "<<findminhang(n,h,w,a)<<endl;
	}
	int m;
	cout << "Cot : ";
	cin >> m;
	if(m>=0&&m<w){
		cout << tongptcot(m,h,w,a)<<endl;
		cout << "Max : "<<findmaxcot(m,h,w,a)<<endl;
	   cout << "Min : "<<findmincot(m,h,w,a)<<endl;
	}
	
	return 0;
	
}
