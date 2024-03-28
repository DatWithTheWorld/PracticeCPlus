#include<iostream>
#include<cmath>
#include<bits/stdc++.h> 
#include<iomanip>
using namespace std;
int main (){
       int n;
       cout << "Enter n = ";
       cin >> n;
       int i=0;
       int check = 0;
       if (n>0){
        while (n!=0){
        	int temp = n%10;
        
        	if (temp%2!=0){
        		cout << temp << ", ";
        		check = 1;
			}
			i++;
			n/=10;
		}
		if(check == 0){
			cout << "No";
			}
	   }
	   else{
	   	cout << "N";
	   }
	return 0;
}
