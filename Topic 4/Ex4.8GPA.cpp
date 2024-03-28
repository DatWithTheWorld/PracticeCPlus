#include<iostream>
#include<cmath>
using namespace std;
int main(){
	float quiz, midterm, finalscores;
	float GPA;
	cout << "Enter quiz mark: ";
	cin >> quiz;
	cout << "Enter mid-term mark: ";
	cin >> midterm;
	cout << "Enter finalsocores: ";
	cin >> finalscores;
	GPA = 0.2*quiz+0.3*midterm+0.5*finalscores;
	if (GPA<4.0){
		cout << "Grade F";
	}else if(GPA >=4.0 && GPA<5.5){
		cout << "Grade D";
	}else if(GPA >=5.5 && GPA<7.0){
		cout << "Grade C";
	}else if(GPA >=7.0&&GPA<8.5){
		cout << "Grade B";
	}else if(GPA>=8.5){
		cout << "Grade A";
	}
	return 0;
}
