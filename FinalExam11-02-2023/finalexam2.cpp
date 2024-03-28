#include<iostream>
using namespace std;
int main(){
	int a[10];
	int b[10];
	int count=0;
	for(int i=0;i<10;i++){
		cin >> a[i];
	}
	int n=10;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]==a[j]){
				if(a[i]>0){
			b[count]=a[i];
			count++;
		}
		}
		}
	}
	for(int j=0;j<count;j++){
	for(int i=0;i<n;i++){
		if(a[i]==b[j]){
				a[i]=0;
			}
		}
	}
if(count==0){
	cout << "N";
}else{

	for(int i=0;i<10;i++){
		cout << a[i] << " ";
	}
}
	return 0;
}
