#include<iostream>
using namespace std;
bool checkprime(int i){
	if(i==2){
		return true;
	}
if(i<2){
	return false;
}
int dem=0;
	for(int j=2;j<i;j++){
		if(i%j==0){
			dem++;
		}
	}
	if(dem){
		return false;
	}else return true;
}
void nhapmang(int n, int a[]){
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
}
int findmax(int n,int a[]){
	int max=a[0];
	for(int i=0; i<n;i++){
		if(a[i]>max){
			max=a[i];
		}
	}
	return max;
}
int countmax(int n, int a[]){
   int dem=0;
   for(int i=0;i<n;i++){
   	if(findmax(n,a)==a[i]){
   		dem++;
	   }
   }
   return dem;
}
void xuatmang(int n, int a[]){
	for(int i=0;i<n;i++){
		cout << a[i]<< " ";
	}
}
int main(){
	
	int n;
	do{
		cin >> n;
		if(n<=0||n>=50){
			cout << "Enter n :";
		}
	}while(n<=0||n>=50);
	int a[n];
	nhapmang(n, a);
	
	xuatmang(n, a);
	cout<<endl;
	cout<< findmax(n,a)<<endl;
	cout<< countmax(n,a);


	return 0;
	
}
