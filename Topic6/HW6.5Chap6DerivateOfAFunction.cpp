#include<iostream>
#include<cmath>
using namespace std;
double derivative(double x,double y){
	
	return y*pow(x,(y-1));
}
int main(){
	double x,y;
	cin >> x;
	cin >> y;
	cout << derivative(x,y);
	return 0;
}
