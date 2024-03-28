#include<iostream>
using namespace std;
int main(){
int n;
int count=0;
do {
	cout << "Enter n = ";
	cin >> n;
	if (n<0){
		cout << "Enter N > 0 = ";
	}
}while(n<0);
	int i=100;
while (100<=i&&i<=999&&i>0){
	int temp1 = i%10;
	int temp2 = i/10;
	int temp3 = temp2%10;
	int temp4 = temp2/10;
	int s = temp1+temp3+temp4 ;
	if (s==18){
		if (temp3==(temp1+temp4)/2){
			if (i<=n){
			cout << i<< endl;
			count++;
		}
	}
	}
	i++;
}
if (!count) cout << " No ";

return 0;
}
