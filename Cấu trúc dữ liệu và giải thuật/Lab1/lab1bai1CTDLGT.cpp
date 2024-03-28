#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
void nhap(int* a, int n){
	srand(time(NULL));
	for(int*p=a;p<a+n;p++){
		*p=rand()%10;
	}
}
void xuat(int*a , int n){
	for(int*p=a;p<a+n;p++){
		cout << *p << " ";
	}
}
void xoale(int*a,int& n){
	int i=0;
	for(int*p=a;p<a+n;p++){
		if((*p)%2==0){
			a[i++]=*p;
			
		}
	}
	n=i;
}
int main(){
	int n;
	cin>>n;
	int* a = new int[n];
	nhap(a,n);
	xuat(a,n);
	xoale(a,n);
	cout << endl;
	xuat(a,n);
return 0;
}
