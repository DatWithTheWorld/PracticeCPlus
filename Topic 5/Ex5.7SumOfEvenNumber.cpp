#include<iostream>

using namespace std;
int main(){
	int n;
	int s=0;
	cout << "Enter the number N = ";
	cin >> n;
	for(int i=1;i<=n;i++){
		if(i%2==0){
		s+=i;
		}
	}
	cout << "Total = " << s;
return 0;
}
