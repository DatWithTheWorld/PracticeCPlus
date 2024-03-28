#include <iostream>
#include<cmath>
using namespace std;

void check(int n){
	if(n<0){
		cout << " N ";
	}
} 
void show(int n){
	while(n!=0){
		int temp = n%10;
		if ((sqrt(temp))*(sqrt(temp))==temp ){
			cout << temp;
		}
		n/=10;
	}
}
int main(){
	int n;
	cin >> n;
   check(n);
   if (n>0){
   	show(n);
   }else cout << " N ";
	
    return 0;
}
