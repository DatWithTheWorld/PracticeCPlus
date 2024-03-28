#include<iostream>
using namespace std;
int main(){
	int day,month,year;
	cout << "Enter days   = ";
	cin >> day;
	cout << "Enter months = ";
	cin >> month;
	cout << "Enter years  = ";
	cin >> year;
	if(day*month==year){
		cout <<"The date is magic";
		}else{
		cout<< "The date is not magic";
	}
		return 0;
}
