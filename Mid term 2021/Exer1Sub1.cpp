#include<iostream>
#include<cmath>
using namespace std;
double cal(int n){
	double s=1;
	for (int i=1;i<=n;i++){
		double a = (2*i+1);
		double b = pow(a,3);
		double c = 2/b;
		s+= pow(a,c);
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
