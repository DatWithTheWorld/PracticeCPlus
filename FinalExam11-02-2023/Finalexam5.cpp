#include<iostream>
using namespace std;
int main(){
	int n,x;
	cin>>n;
	if(n<=0){
		cout << "N";
	}else{
		int a[n];
		int b[n];
		for(int i=0;i<n;i++){
			cin>> a[i];
		}
		int temp=0;
		cin >> x;
		for(int i=0;i<n;i++){
			if(a[i]>x){
				b[temp]=a[i];
				temp++;
			}
		}
	
		for(int i=0;i<temp-1;i++){
			for(int j=i+1;j<temp;j++){
				if(b[i]>b[j]){
					int d = b[i];
					b[i]=b[j];
					b[j]=d;
				}
			}
		}
		if(temp==0){
			cout << "Y";
		}else{
				for(int i=0;i<temp;i++){
			cout << b[i]  << "  ";
		}
		
	}
	}
	return 0;
}
