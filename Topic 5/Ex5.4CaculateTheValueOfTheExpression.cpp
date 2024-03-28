#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n;
	int s=0;
	cout << "Enter number N: ";
	cin >> n;
	for (int i=1;i<=n;i++){
		s=s+(i*i);
	}
	cout << "The total is: "<< s;
return 0;
}
