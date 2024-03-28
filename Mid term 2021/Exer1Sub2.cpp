##include<iostream>
#include<cmath>
using namespace std;
double cal(int n){
	double s=0;
	for (int i=1;i<=n;i++){
		double a = (2*i+1);
		double b = (2*i+2)
		s+= a/b;
	}
	return s;
}
void checkn(int n){
	if (n<0){
		cout << "N";
	}
}
void display(int n){
   	cout << cal(n);
}
int main(){
	int n;
	cin >> n;
	checkn(n);
	cal(n);
	display(n);
	return 0;
}
