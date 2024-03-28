#include<iostream>
using namespace std;
int main(){
	int n;
	cout<< "Enter N=";
	cin >> n;
	if(n>0){
		for(int i=1;i<=n;i++){
			if(n%i==0){
				cout << i << " is a divisor of " << n <<endl;
			}
		}
	}else{
		cout << "N";
	}
	return 0;
}
