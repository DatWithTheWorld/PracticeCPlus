#include <iostream>
#include <cmath>
using namespace std;

int main (){
int a,b,c,d,e;
cout << "Input the number of days = ";
cin >> a;
b = a % 365;
c = a / 365;
d = b % 30;
e = b / 30;
cout << "***************************" << endl; 
cout << "Years = " << c << endl;
cout << "Months = " << e << endl;
cout << "Days = " << d << endl;
return 0;
}
