#include<iostream>
using namespace std;
int findK(int n, int s,int i){
	while(s<=n){
  	s+=i;
  	i++;
  }
  return  i-2 ;
}
int main (){
 int i=0,n,s=0;
  cout << "Enter N = ";
  cin >> n;
  if (n<=0){
  	cout << "N";
  }else{
  cout << findK(n,s,i);
}
  return 0;
}

