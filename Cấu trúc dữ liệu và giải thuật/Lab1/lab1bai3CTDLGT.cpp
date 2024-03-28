#include <iostream>

using namespace std;

int gcd(int a, int b);
int lcm(int a, int b);

int main() {
    int a, b;
    cin >> a >> b;

    cout << "GCD of " << a << " and " << b << " is " << gcd(a, b) << endl;
    cout << "LCM of " << a << " and " << b << " is " << lcm(a, b) << endl;

    return 0;
}

int gcd(int a, int b) {
    if (b == 0||a==0) {
        return a+b;
    } 
    if(a==b){
    	return a;
	}
	if(a>b){
        return gcd(a-b, b);
    }
    if(b>a){
    	return gcd(a,b-a);
	}
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}
