#include<iostream>
using namespace std;
int sumdigit(int a){
	int sum=0;
	while(a){
		sum+=a%10;
		a/=10;
	}
	return sum;
}
int findMax(int n, int m){
	int max=n;
	for (int i=n,j=i+1;i<m;i++,j++){
		if (sumdigit(i)>sumdigit(j)){
			max=i;
		}
		else {
		max=j;
	}
	}
	return max;
}
int main (){
	int n,m;
	cin >> n;
	cin >> m;
	if (n>m){
		return false;
	}else
	cout << findMax(n,m);
	return 0;
}

