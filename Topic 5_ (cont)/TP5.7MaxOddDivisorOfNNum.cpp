#include<iostream>
using namespace std;
int main(){
	int n;
	cout<< "Enter N=";
	cin >> n;
	if(n>0){
	int max = 0;
		for(int i=1;i<=n;i++){
			if(n%i==0){
		    if(i%2!=0){
      			if (i>max){
      				max = i;
					  }
				  }
			}
		}
		cout <<  "The max odd divisor of "<<n<< " is : "<<max;
	}else{
		cout << "N";
	}
	return 0;
}
