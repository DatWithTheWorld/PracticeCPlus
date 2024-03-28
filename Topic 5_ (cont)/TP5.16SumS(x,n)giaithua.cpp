#include<iostream>
#include<cmath>
#include<bits/stdc++.h> 
#include<iomanip>
using namespace std;
double giaithua(double temp){
	double gt = 1;
	for (int i=1;i<temp;i++){
		gt *=i;
	}
}
double sum(int x, int n){
	double s=x;
	
	for (int i=1;i<=n;i++){
		double temp =2*i+1;
		s+=pow(x,(2*i)+1)/giaithua(temp);
	}
	cout << setprecision(2)<<fixed;
	cout << "Sum = " << s;
}
int main (){
       int x,n;
       cout << "Enter x = ";
       cin >>x ;
       cout << "Enter n = ";
       cin >> n;
       if (n>0){
       	sum(x,n);
	   }else{
	   	cout << "N";
	   }
	return 0;
}
