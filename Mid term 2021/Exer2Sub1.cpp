#include<iostream>
using namespace std;
double VNDToUSD (double VND){
     	double USD = VND/22000;
     	return USD;
}
double USDToVND(double USD){
	double VND = USD*22000;
	return VND;
}
void menuselect(){
	cout << "---------------------------------"<<endl;
	cout << "|Choice v/V to convert VND to USD|"<<endl;
	cout << "|Choice u/U to convert USD to VND|"<<endl;
	cout << "----------------------------------"<<endl;
	cout << "Choice : ";
	}
int main(){
	double VND,USD;
	char choice;
	menuselect();
	cin>>choice;
	switch(choice){
		case 'v' : 
		cout << "Enter money = ";
		cin >> VND;
		cout << VND << " VND " << " = " << VNDToUSD(VND) << " USD";
		break;
		case 'V' : 
		cout << "Enter money = ";
		cin >> VND;
		cout << VND << " VND " << " = " << VNDToUSD(VND) << " USD";
		break;
		case 'u' : 
		cout << "Enter money = ";
		cin >> USD;
		cout << USD << " USD " << " = " << USDToVND(USD) << " VND";
		break;
		case 'U' : 
		cout << "Enter money = ";
		cin >> USD;
		cout << USD<< " USD " << " = " << USDToVND(USD) << " VND";
		break;
	}
	return 0;
}

