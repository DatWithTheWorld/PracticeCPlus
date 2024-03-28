#include<iostream>
using namespace std;
bool checkprime(int i){
	if(i==2){
		return true;
	}
if(i<2){
	return false;
}
int dem=0;
	for(int j=2;j<i;j++){
		if(i%j==0){
			dem++;
		}
	}
	if(dem){
		return false;
	}else return true;
}
void nhapmang(int n, int a[]){
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
}
int tongnt(int n,int a[]){
	int s=0;
	for(int i=0;i<n;i++){
		if(checkprime(a[i])==true){
			s+=a[i];
		}
	}
	return s;
}
void xuatmang(int n, int a[]){
	for(int i=0;i<n;i++){
		cout << a[i]<<endl;
	}
}
int main(){
	
	int n;
	do{
		cin >> n;
		if(n<=0||n>=50){
			cout << "Enter n :";
		}
	}while(n<=0||n>=50);
	int a[n];
	nhapmang(n, a);
	
	xuatmang(n, a);

	cout << tongnt(n,a);
	return 0;
	
}
