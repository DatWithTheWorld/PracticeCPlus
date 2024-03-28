#include <iostream>
#include <string>
using namespace std;
int main(){
	string ab;
	cout << "Input the string : ";
	getline(cin, ab);
	cout << "The length of string is : "<< ab.length();
	return 0;
}
