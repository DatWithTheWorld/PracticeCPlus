#include<iostream>
#include<cmath>

using namespace std;
int main(){
	int a,b,c;
	cin >> a >> b >> c;
	if (a==0){
		if(b==0){
			if(c==0){
				cout << "Vo so nghiem";
			}else{
				cout << "Vo nghiem";
			}
		}else{
			cout << "nghiem =" << -c/b;
		}
	}else{
		int del = pow(b,2) - 4*a*c;
		float sdel = sqrt(del);
		if (del<0){
			cout << "Vo nghiem";
		}else if(del==0){
		cout << "Nghiem = " << -b/(2*a);
		}else{
			cout << "Nghiem 1: " << (-b+sdel)/(2*a);
			cout << "Nghiem 2: " << (-b-sdel)/(2*a);
		}
		
	}
	return 0;
	}
