#include<iostream>
using namespace std;
int find(int *n){
	int gt=1;
	for (int i=1;i<=*n;i++){
		gt*=i;
	}
	return gt;
}
int main(){
	int n;
	cin >> n;
	cout << find(*n);
	return 0;
}
