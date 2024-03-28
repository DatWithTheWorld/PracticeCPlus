#include<iostream>
#include<iomanip>
using namespace std;
double CToF (double C){
     	double F = (C*(9/5))+32;
     	return F;
}
double FToC(double F){
	double a=(double)(F-32);
	double C=a*5/9;

	return C;
}
void menuselect(){
	cout << "--------------------------------------------------------------"<<endl;
	cout << "|Choice c/C to convert Temperature from Fahrenheit to Celsius|"<<endl;
	cout << "|Choice f/F to convert Temperature from Celius to Fahrenheit |"<<endl;
	cout << "--------------------------------------------------------------"<<endl;
	cout << "Choice : ";
	}
int main(){
	double C,F;
	char choice;
	menuselect();
	cin>>choice;
	switch(choice){
		case 'c' : 
		cout << "Enter temperature = ";
		cin >> F;
		cout << F << " F " << " = " << setprecision(2)<<fixed<<FToC(F) << " C";
		break;
		case 'C' : 
		cout << "Enter temperature = ";
		cin >> F;
		cout << F << " F " << " = " << setprecision(2)<<fixed<<FToC(F)<< " C";
		break;
		case 'f' : 
		cout << "Enter temperature = ";
		cin >> C;
		cout << C << " C " << " = " << CToF(C) << " F";
		break;
		case 'F' : 
		cout << "Enter temperature = ";
		cin >> C;
		cout << C << " C " << " = " << CToF(C) << " F";
		break;
	}
	return 0;
}

