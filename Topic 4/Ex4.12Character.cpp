#include<iostream>
#include<string>
using namespace std;

int main(){
	char a;
	cout << "Enter a character: ";
	cin>>a;
	if((a>='a'&&a<='z')||(a>='A'&&a<='Z')){
		cout << "Alphabet(A)";
	}else if(a>='1'&&a<='9'){
		cout << "Digit(D)";
	}else{
		cout << "Special character(S)";
	}
return 0;
}

