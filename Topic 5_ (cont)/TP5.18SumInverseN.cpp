#include<iostream>
#include<cmath>
#include<bits/stdc++.h> 
#include<iomanip>
using namespace std;
int main (){
       double n;
       cout << "Enter n = ";
       cin >> n;
       if (n>=0){
       	double s=0;
        for(int i=1;i<=n;i++){
        	s+=(double)1/i;
		}
		cout <<setprecision(2)<<fixed;
		cout << "Sum = "<< s;
	   }else{
	   	cout << "N";
	   }
	return 0;
}
