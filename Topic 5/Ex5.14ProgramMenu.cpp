#include<iostream>
#include<cmath>
using namespace std;
void isPrime(int o)
{
    
    if (o <= 1){
    	cout << "Not prime";
	}
 
    
    for (int i = 2; i < o; i++)
        if (o % i == 0){
        	cout << "Not prime";
		}else{
			cout << "It is Prime";
		}
 
}
 
void menu(){
	cout << "*************************"<<endl;
	cout << "*          MENU         *"<<endl;
	cout << "*  1.Armstrong          *"<<endl;
	cout << "*  2.Prime              *"<<endl;
	cout << "*  3.Finish             *"<<endl;
	cout << "*************************"<<endl;
	cout << "Choose(1,2,3): "; 
}
int main()
{ 
	
	while(true){
int choose;


	menu();
	cin >> choose;
	switch (choose){
		case 1: int m, n, i, num, digit, sum, count;

  cout << "Enter first number: ";
  cin >> m;

  cout << "Enter second number: ";
  cin >> n;

  
  cout << "Armstrong numbers between " << m << " and " << n << " are: " << endl;
 
  for(i = m; i <= n; i++) {
   count = 0;
    num = i;

    // count the number of digits in num and i
    while(num > 0) {
      ++count;
      num /= 10;
    }
 
    // initialize sum to 0
    sum = 0;

    // store i in num again    
    num = i;
        
    // get sum of power of all digits of i
    while(num > 0) {
      digit = num % 10;
      sum = sum + pow(digit, count);
      num /= 10;
    }

    // if sum is equal to i, then it is Armstrong
    if(sum == i) {
      cout << i << ", ";
    }
  }
  cout << endl;
  break;
  case 2: int o;
  cout << "Enter the number: ";
  cin >> o;
  isPrime(o);
  cout << endl;
  break;
  case 3: char biennhap;
		cout << "Do you want to finish(c,k)? ";
		cin >> biennhap;
		switch (biennhap){
			case 'c':
			cout << "See you again !";
			break;
			case 'k':break;
		}
		cout << endl;
}
}
return 0;
}
