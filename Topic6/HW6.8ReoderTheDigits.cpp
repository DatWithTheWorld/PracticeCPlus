#include<iostream>
using namespace std;
void hamtangdan(int n){
	int a[4];
	int i=0;
while(n!=0){
	int temp = n%10;

		a[i]=temp;
	   i++;
	n/=10;
}

for(int i=0;i<4;i++){
	for(int j=i+1;j<4;j++){
		if(a[i]>a[j]){
			int templ = a[i];
			a[i]=a[j];
			a[j]=templ;
		}
	}
}
for(int i=0;i<4;i++){
	cout << a[i] << " - ";
}	

}
void giamdan(int n){
	int a[4];
	int i=0;
while(n!=0){
	int temp = n%10;

		a[i]=temp;
	   i++;
	n/=10;
}

for(int i=0;i<4;i++){
	for(int j=i+1;j<4;j++){
		if(a[i]<a[j]){
			int templ = a[i];
			a[i]=a[j];
			a[j]=templ;
		}
	}
}
for(int i=0;i<4;i++){
	cout << a[i] << " - ";
}	

}
int main(){
	int n;
	cin >> n;
	if (n>=1000&&n<=9999){
		hamtangdan(n);
		cout << endl;
		giamdan(n);
	}
	return 0;
}
