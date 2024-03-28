#include<iostream>
using namespace std;
int main(){
	int n;
	cout<< "Enter N=";
	cin >> n;
	if(n>0){
		int s = 0;
		for(int i=1;i<=n;i++){
			if(n%i==0){
			s+=i;
			cout << i << " is one divisor of "<< n <<endl;
			}
		}
		cout << "============================================="<<endl;
		cout << "Total of all divisor of " << n << " is "<<s;
	}else{
		cout << "N";
	}
	return 0;
}
