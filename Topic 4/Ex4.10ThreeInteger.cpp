#include<iostream>
using namespace std;
int main(){
	long int a,b,c,d;
	cout << "Nhap a,b,c";
	cin >> a >>   b>> c;
	if ((-999999999<=a&&a<=999999999)&&(-999999999<=b&&b<=999999999)&&(-999999999<=c&&c<=999999999)){
		if (a>b){
			d=a;
			a=b;
			b=d;
		}
		if(a>c){
			d=a;
			a=c;
			c=d;
		}
		if(b>c){
			d=b;
			b=c;
			c=d;
		}
		cout << a<<b<<c;
	}else{
		cout << "Not valid";
	}

	return 0;
	}
