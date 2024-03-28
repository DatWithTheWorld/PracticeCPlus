#include<iostream>
using namespace std;
int main(){
int n;
cin >> n;
int i=0;
int count=0;
if (n>=0){
	int max=0;
	while(n!=0){
		int temp = n%10;
		if(temp>max){
			max=temp;
		}
		n/=10;
}
cout << max;

}else cout << "N";
	return 0;
}
