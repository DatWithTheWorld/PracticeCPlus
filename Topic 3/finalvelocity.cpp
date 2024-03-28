#include <iostream>

using namespace std;
int main(){
    double a,t,v0,v;
	cout << "Input the acceleration : ";
	cin >> a;
	cout << "Input the time: ";
	cin >> t;
	cout << "Input initial velocity: ";
	cin >> v0;
	v = v0 + a*t;
	cout << "Final velocity : "<< v;
	return 0;
}
