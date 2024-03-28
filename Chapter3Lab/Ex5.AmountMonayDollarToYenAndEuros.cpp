#include<iostream>
#include<cmath>
#include<bits/stdc++.h> 
#include<iomanip>
using namespace std;
int main(){
	float tien;
	const float YEN_PER_DOLLAR = 98.93, EUROS_PER_DOLLAR = 0.74;
	cout << "Input the number of dollar:  ";
	cin >> tien;
	cout <<setprecision(2)<<fixed;
	cout << "Dollar =  " << tien<<endl;
	cout << "Yen    =  " << tien*YEN_PER_DOLLAR<<endl;
	cout << "EUROS  =  " << tien*EUROS_PER_DOLLAR<<endl;
   return 0;
}

