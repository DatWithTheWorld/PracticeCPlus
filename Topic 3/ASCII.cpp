#include <iostream>
using namespace std;
int main(){
	char ch;
	cout << "Enter a charater : ";
	cin >> ch;
	cout << "Its ASCII value: "<< static_cast<int>(ch);
	return 0;
}
