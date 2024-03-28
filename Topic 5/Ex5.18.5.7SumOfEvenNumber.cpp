#include<iostream>
#include<fstream>
using namespace std;
int main(){
	fstream FileOut;
	fstream FileIn;
	FileOut.open("c:\\users\\admin\\desktop\\SumOfEvenNumberResult.txt",ios_base::out);
		FileIn.open("c:\\users\\admin\\desktop\\SumOfEvenNumber.txt",ios_base::in);
		int product =1;
int n;
	int s=0;
	FileIn >> n;
	for(int i=1;i<=n;i++){
		if(i%2==0){
		s+=i;
		}
	}
	FileOut << "Total = " << s;
	FileIn.close();
	FileOut.close();
return 0;
}
