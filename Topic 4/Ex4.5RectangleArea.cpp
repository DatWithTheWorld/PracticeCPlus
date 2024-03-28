#include<iostream>
using namespace std;
int main(){
	int a,b,c,d;
	cout << "Enter length of first rectangle   = ";
	cin >> a;
	cout << "Enter length of second rectangle  = ";
	cin >> b;
	cout << "Enter width of first rectangle   = ";
	cin >> c;
	cout << "Enter width of second rectangle = ";
	cin >>d;
	if(a*c>b*d){
		cout <<"The first rectangle has the greater area";
		}else if(a*c<b*d){
		cout<< "The second rectangle has the greater are";
	}else {
		cout << "Same area";
	}
		return 0;
}
