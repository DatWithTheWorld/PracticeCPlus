#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
double Area(double *radius){
	double s = pow(*radius,2)*M_PI;
  return s;
}
int main(){
	double radius;
	cin >> radius;
	cout << setprecision(1)<<fixed<< Area(&radius);
	return 0;
}
