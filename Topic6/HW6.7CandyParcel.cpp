#include<iostream>
using namespace std;
int CandyParcel(int nSmall, int nBig, int FN){
	if (nSmall*2+nBig*5==FN){
		return nSmall;
	}
	else return -1;
}
int main(){
	int nSmall,nBig,FN;
	cin >> nSmall;
	cin >> nBig;
	cin >> FN;
	cout << CandyParcel(nSmall,nBig,FN);
	return 0;
}
