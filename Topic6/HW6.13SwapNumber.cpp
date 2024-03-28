#include<iostream>
using namespace std;
void swapnum(int *a,int *b){
	int temp = *a;
	*a=*b;
	*b=temp;
	cout << "A = "<<*a<<endl;
	cout << "B = "<<*b<<endl;
}
int main(){
	int a,b;
	cout << "A = ";
	cin >> a;
	cout << "B = ";
	cin >>b;
	swapnum(&a,&b);
	return 0;
}
