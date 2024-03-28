#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int a,b,c;
	cout << "Enter the first sides of triangle: ";
	cin >> a;
	cout << "Enter the second sides of triangle: ";
	cin >> b;
	cout <<  "Enter the third sides of triangle: ";
	cin >>c;
	if(a==b&&a==c){
	cout << "An equilateral(E)";
} else  if (a==b&&b!=c&&a!=c){
	cout << "an isosceles(I)";
}else if(a!=b&&a!=c&&b!=c){
	cout << "An scalene(S)";
}else if(a==0||b==0||c==0){
	cout << "Not triangle";
}
	return 0;
}
