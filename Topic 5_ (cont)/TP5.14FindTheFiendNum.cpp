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
	int sa = 0;
	int sb=0;
	for(int i=1;i<=a;i++){
		if (a%i==0){
			sa+=i;
		}
	}
	for(int j=1;j<=b;j++){
		if(b%j==0){
			sb+=j;
		}
	}
	if (sa==sb){
		cout << "Yes";
	}else cout << "No";
	return 0;
}
