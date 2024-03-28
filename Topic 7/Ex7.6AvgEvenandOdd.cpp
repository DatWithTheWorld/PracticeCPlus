#include<iostream>
#include<cmath>
using namespace std;
bool checknum(int i){
	if(i%2==0){
		return true;
	}else return false;
}
void nhapmang(int n, int a[]){
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
}
void cgd(int n, int a[]){
	int seven = 0;
	int sodd = 0;
	int counteven=0;
	int countodd=0;
	for (int i=0;i<n;i++){
		if(checknum(a[i])==true){
			counteven++;
			seven+=a[i];
		}else{
			countodd++;
			sodd+=a[i];
		}
	}
	cout << (double)seven/counteven<<endl;
	cout << (double)sodd/countodd;
}

void xuatmang(int n, int a[]){
	for(int i=0;i<n;i++){
		cout << a[i]<< " ";
	}
}
int main(){
	
	int n;
	cin >> n;
	int a[n];
	nhapmang(n, a);
	cout << endl;
	cgd(n,a);




	return 0;
	
}
