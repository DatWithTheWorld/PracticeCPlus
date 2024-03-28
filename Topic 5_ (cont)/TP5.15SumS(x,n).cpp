#include<iostream>
#include<cmath>
#include<bits/stdc++.h> 
#include<iomanip>
using namespace std;
double sum(int x, int n){
	double s=0;
	int temp = 0;
	for (int i=1;i<=n;i++){
		temp+=i;
		s+=(pow(-1,i)*(pow(x,i)))/(temp);
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
