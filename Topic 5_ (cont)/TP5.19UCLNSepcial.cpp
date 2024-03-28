#include<iostream>
using namespace std;
int main(){
	int n;
	do{
	
	cout << "Enter N = ";
	cin >> n;
	if (n<0){
		cout << "Enter N > 0 = ";
	}
}while(n<0);
int i=1;
while( i<n){
	int s = 0;
	for (int j=1;j<i;j++){
		if (i%j==0){
			s+=j;
		}
	}
	if (s==i){
	cout << s << endl;
}
	i++;
}
return 0;
}
