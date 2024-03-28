#include<iostream>
using namespace std;
int Tt(int a, int b){
	return a+b;
}
bool check(int x){
	if(x>0&&x<=1000000){
		return true;
	}
	return false;
}
int main(){
	int a,b;
	cin >> a;
	if(check(a)==false){
		cout << "N";
		return 0;
	}
	cin>>b;
	if(check(b)==false){
		cout << "N";
		return 0;
	}
	cout << Tt(a,b);
	return 0;
}
