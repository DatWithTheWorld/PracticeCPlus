#include<iostream>
#include<fstream>
using namespace std;
int main(){
	fstream FileIn;
	FileIn.open("c:\\users\\admin\\desktop\\5.4_CaculateTheVauleOfTheExpression.txt",ios_base::in);
	if(FileIn.fail()==true){
		cout << "File creation failed";
		return 0;
	}
	else {
		int n;
	int s=0;
	FileIn >> n;
	for (int i=1;i<=n;i++){
		s=s+(i*i);
	}
	cout << "The total is: "<< s;
	FileIn.close();
}
return 0;
}
