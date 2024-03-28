#include<iostream>
using namespace std;
int main(){
	int n;
	do {
		cout << "Enter N = ";
		cin >> n;
		if (n<0){
			cout << "Enter N > 0 = ";
		}
	}while (n<0);
int temp = n;
int count =1;
int i;
int max=1;
do {
	i = n%10;
	if (i==max){
		count++;
	}
	if (i>max){
		max = i;
		
	}
}while(n/=10);
cout << max << " - " << count ;
return 0;
}
