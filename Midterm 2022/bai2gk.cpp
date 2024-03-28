#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cin >> a >> b >> c;
	if(a<b){
		int temp = a;
		a=b;
		b=temp;
	}
	if(b<c){
		int tam = c;
		c=b;
		b=tam;
	}
		if(a<b){
		int temp1 = a;
		a=b;
		b=temp1;
	}
	cout << a << " "<< b << " " << c;
	return 0;
}
