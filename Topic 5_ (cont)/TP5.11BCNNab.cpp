#include<iostream>
using namespace std;
int main (){
	int a,b;

		do {
		cout << "Enter a = ";
		cin >> a;
		if (a<0){
			cout << "Enter a > 0 "<<endl;
		}
	} while (a<=0);
		do {
		cout << "Enter b = ";
		cin >> b;
		if (b<0){
			cout << "Enter b > 0 "<< endl;
		}
	} while (b<=0);
	int c =a;
	int d = b;
	while (a!=b){
		if (a>b){
			a-=b;
		}else{
			b-=a;
		}
	}
	cout << "BCNN of " << c <<" and "<<d <<" is : "<<(c*d)/a;
	return 0;
}
