#include<iostream>
using namespace std;
int main(){
	int BAI[7],XE[5]={1,1,1,1,1};
	for(int i=0;i<7;i++){
		cin >>  BAI[i];
	}
	int count=0;
	for(int i=0;i<7;i++){
		if(BAI[i]==0){
			BAI[i]=1;
			count++;
			}
	}

	if(count==0){
		return 0;
	}else{
			if(count > 5){
		return 0;
	}
			for(int i=0;i<count;i++){
		XE[i]=0;
	
	
	}
}
	for(int i=0;i<7;i++){
		cout << BAI[i] << " ";
	}
	cout << endl;
	for(int i=0;i<5;i++){
		cout << XE[i] << " ";
	}
	return 0;
}
