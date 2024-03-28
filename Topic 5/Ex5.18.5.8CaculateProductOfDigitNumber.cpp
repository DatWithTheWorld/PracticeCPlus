#include<iostream>
#include<fstream>
using namespace std;
int main(){
	fstream FileOut;
	fstream FileIn;
	FileOut.open("c:\\users\\admin\\desktop\\CaculateProductOfDigitNumberResult.txt",ios_base::out);
		FileIn.open("c:\\users\\admin\\desktop\\CaculateProductOfDigitNumber.txt",ios_base::in);
		int product =1;
	int n;
	FileIn >> n;
	while(n!=0){
	product = product*(n%10);
	n = n/10;	
	}
	FileOut << "Product is : "<<product;
	FileIn.close();
	FileOut.close();
return 0;
}
