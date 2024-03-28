#include<iostream>
#include<fstream>
using namespace std;
int main(){
	fstream FileOut;
	FileOut.open("c:\\users\\admin\\desktop\\5.5_ASCIICodeAndCharacter.txt",ios_base::out);
	
		int i;
	char ascii;
	for(i=48;i<=127;i++){
		ascii = i;
		FileOut << "ASCII value of "<<ascii <<" is "<< i << "\t"<<endl;
	
	

}
	FileOut.close();
return 0;
}
