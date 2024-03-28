#include<iostream>
#include<fstream>
using namespace std;
int main(){
	fstream FileOut;
	fstream FileIn;
	FileOut.open("c:\\users\\admin\\desktop\\5.6PrintAllTheNaturalNumberResult.txt",ios_base::out);
		FileIn.open("c:\\users\\admin\\desktop\\5.6PrintAllTheNaturalNumber.txt",ios_base::in);
		int n;
	FileIn >> n;
	for(int i=n;i>0;i--){
		FileOut << i << " ";
	}


	FileIn.close();
	FileOut.close();
return 0;
}
