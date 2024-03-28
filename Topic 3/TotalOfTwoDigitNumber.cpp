#include <iostream>

using namespace std;
int main(){
   int a,b,c;
   cout <<"Input the two-digit number: "<<endl;
   cin >> a;
   b = a/10;
   c = a % 10;
   cout << "Total of twpo digits of number is: "<<b+c;
	return 0;
}
