#include<iostream>
using namespace std;
int demchuso(int n){
	int count = 0;
	while(n!=0){
		int temp = n%10;
		n/=10;
		count++;
	}
return count;
}

void ham(int n){
	int prn = n;
	int i = demchuso(n);
	int count = 0;
	while(n!=0){
		if (n%i!=0){
		    count++;
		}
		n/=10;
	i--;
	}
	
	if(count == 0){
		cout << prn << " is Poly num";
	}else cout << "N";
	
}
int main(){
	int n;
	cin >> n;
	ham(n);
	return 0;
}
