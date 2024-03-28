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
		int count=0;
		int temp = n%10;
		if (temp == 0|| temp==1){
			count++;
		}
		
		for(int i=2;i<temp;i++){
			if(temp%i==0){
				count++;
			}
		}
		if(count==0){
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
