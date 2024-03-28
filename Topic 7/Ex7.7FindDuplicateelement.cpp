#include<iostream>
#include<cmath>
using namespace std;

void nhapmang(int n, int a[]){
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
}
void xoavitri(int arr[], int &daimang, int vt){
	for(int i=vt +1 ;i<daimang;i++){
		arr[i-1]=arr[i];
	}
	daimang--;
}
void xoatrung(int arr[], int &daimang ){
	for(int i=0;i<daimang-1;i++){
		for(int j=i+1;j<daimang;j++){
			if(arr[j]==arr[i]){
				xoavitri(arr,daimang,j);
				i--;
			}
		}
	}
}
void checknum(int n, int a[]){
	int mang[100],count=0;
for(int i=0;i<n-1;i++){
	for(int j=i+1;j<n;j++){
		if(a[i]==a[j]){
			mang[count]=a[i];
			++count;
		}
	}
}
xoatrung(mang,count);
for(int z=0;z<count;z++){
cout << mang[z]<< " ";
}
}
void xuatmang(int length, int arr[]){
	for(int i=0;i<length;i++){
		cout << arr[i]<< " ";
	}
}
int main(){
	
	int n;
	cin >> n;
	int a[n];
	nhapmang(n, a);
  checknum(n, a);




	return 0;
	
}
