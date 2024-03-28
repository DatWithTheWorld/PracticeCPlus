	#include<iostream>


using namespace std;

int main (){
 int i=0,n,s=0;
  cout << "Enter N = ";
  cin >> n;
  if (n<=0){
  	cout << "N";
  }else{
  while(s<=n){
  	s+=i;
  	i++;
  }
  cout << i-2 << endl;
}
  return 0;
}

