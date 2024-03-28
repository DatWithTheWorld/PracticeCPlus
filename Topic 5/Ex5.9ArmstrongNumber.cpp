#include<iostream>
#include<cmath>
using namespace std;

int main() {

  int m, n, i, num, digit, sum, count;

  cout << "Enter first number: ";
  cin >> m;

  cout << "Enter second number: ";
  cin >> n;

  
  cout << "Armstrong numbers between " << m << " and " << n << " are: " << endl;
 
  for(i = m; i <= n; i++) {
   count = 0;
    num = i;
    while(num > 0) {
      ++count;
      num /= 10;
    }
    sum = 0;    
    num = i;
    while(num > 0) {
      digit = num % 10;
      sum = sum + pow(digit, count);
      num /= 10;
    }
    if(sum == i) {
      cout << i << ", ";
    }
  }

  return 0;
}

