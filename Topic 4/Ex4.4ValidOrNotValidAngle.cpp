#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cout << "Enter first angle   = ";
	cin >> a;
	cout << "Enter second angle  = ";
	cin >> b;
	cout << "Enter third angle   = ";
	cin >> c;
	if(a+b+c==180){
		cout <<"Three angles are valid";
		}else
		cout<< "Three angles are not valid";
	}
		return 0;
}
