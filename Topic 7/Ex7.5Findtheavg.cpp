#include<iostream>
#include<cmath>
using namespace std;

void nhapmang(int n, int a[]){
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
}
int findmax(int n,int a[]){
	int max=a[0];
	for(int i=0; i<n;i++){
		if(a[i]>max){
			max=a[i];
		}
	}
	return max;
}
int findmin(int n, int a[]){
	int min=a[0];
	for(int i=0;i<n;i++){
		if(a[i]<min){
			min=a[i];
		}
	}
	return min;
}
double avge(int n, int a[]){
	double result=(double)(findmax(n,a)+findmin(n,a))/2;
return result;
}

void xuatmang(int n, int a[]){
	for(int i=0;i<n;i++){
		cout << a[i]<< " ";
	}
}
int main(){
	
	int n;
	cin >> n;
	int a[n];
	nhapmang(n, a);
	cout << findmax(n,a)<< endl;
	cout << findmin(n,a)<<endl;
	cout << avge(n,a);




	return 0;
	
}
