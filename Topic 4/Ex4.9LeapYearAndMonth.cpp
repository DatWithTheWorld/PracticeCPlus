#include<iostream>
using namespace std;
int main(){
	int nam;
	cout << "Nhap vao nam = ";
	cin >> nam;
	if ((nam%400==0)||(nam%4==0&&nam%100!=0)){
		cout << "Nam "<< nam<<" la nam nhuan"<<endl;
		int thang;
	cout << "Nhap vao thang = ";
	cin >> thang;
	if (1<thang && thang<12){
		if(thang==1||thang==3||thang==5||thang==7||thang==8||thang==10||thang==12){
			cout << "Thang "<< thang<< " co 31 ngay";
		}
		if(thang==2){
			cout << "Thang "<<thang << " co 29 ngay";
		}
		if(thang==4||thang==6||thang==9||thang==9||thang==11){
			cout << "Thang "<<thang<< " co 30 ngay";
		}
	}else{
		cout << "Thang khong hop le";
	}
	}else{
		cout << "Nam "<<nam<<" khong phai la nam nhuan"<<endl;
		int thang;
	cout << "Nhap vao thang = ";
	cin >> thang;
	if (1<thang && thang<12){
		if(thang==1||thang==3||thang==5||thang==7||thang==8||thang==10||thang==12){
			cout << "Thang "<< thang<< " co 31 ngay";
		}
		if(thang==2){
			cout << "Thang "<<thang << " co 28 ngay";
		}
		if(thang==4||thang==6||thang==9||thang==9||thang==11){
			cout << "Thang "<<thang<< " co 30 ngay";
		}
	}else{
		cout << "Thang khong hop le";
	}
	}
	
	return 0;
	}
