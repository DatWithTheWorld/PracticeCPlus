#include<iostream>
#include<cmath>

using namespace std;
int main(){
	int a,b;
	cout << "Enter money in $ = ";
	cin >> a;
	cout << "======================="<<endl;
	cout << "|1.Euro.              |"<<endl;
	cout << "|2.Japanese Yen.      |"<<endl;
	cout << "|3.British Pound.     |"<<endl;
	cout << "|4.Vietnamese Dong.   |"<<endl;
	cout << "|0.Exit.              |"<<endl;
	cout << "======================="<<endl ;
	cout << "Choose: ";
	cin >> b;
	switch(b)
	{
			case 1:cout << a << " Dollar to Euro is " <<a*1.02 ;break;
			case 2:cout << a << " Dollar to Japanese Yen is " <<a*147.86 ;break;
			case 3:cout << a << " Dollar to British Pound is " <<a*0.89 ;break;
			case 4:cout << a << " Dollar to Vietnamese Dong is " <<a*24.86 ;break;
			case 5: break;
		}
	return 0;
	}
