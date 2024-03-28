#include<iostream>
using namespace std;
int checknt(int a){
	int dem=0;
	if(a==2){
		return 1;
	}else{
		if(a==1){
		return 0;
	}else{
	
	for(int i=2;i<a;i++){
		if(a%i==0){
			dem++;
		}
	}
	if(dem!=0){
		return 0;
	}else{
		return 1;
	}
}
}

}
int main(){
	int n;
	cin >> n;
	if(n<=0){
		cout << "N";
	}else{
		int a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		for(int i=0;i<n;i++){
			if(checknt(a[i])==1){
				a[i]=0;
			}
		}
		for(int i=0;i<n;i++){
			cout << a[i] << " ";
		}
		
	}
	return 0;
}
