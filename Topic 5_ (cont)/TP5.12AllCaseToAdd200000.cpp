#include<iostream>
using namespace std;
int main (){
	for (int i=0;i<=200;i++){
		for(int j=0;j<=100;j++){
			for(int k=0;k<=40;k++){
				if (i*1000+j*2000+k*5000==200000){
					cout << i << " ," << j << " ," << k<<endl;
				}
			}
			
		}
	}
	return 0;
}
