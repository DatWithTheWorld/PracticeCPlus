#include<iostream>
using namespace std;
int main()
{
int tong = 0, n;
int a = 0;
int b = 1;
cout << "Enter the nth value: ";
cin >> n;
cout << "Fibonacci series: ";
while(tong	 <= n)
{
cout << tong  << ", ";
a = b; 
b = tong;
tong = a + b; 
}
return 0;
}
