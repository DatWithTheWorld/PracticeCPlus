#include<iostream>

using namespace std;
int main(){
	int product =1;
	int n;
	cout << "Enter the number N : ";
	cin >> n;
	while(n!=0){
	product = product*(n%10);
	n = n/10;	
	}
	cout << "Product is : "<<product;
return 0;
}
