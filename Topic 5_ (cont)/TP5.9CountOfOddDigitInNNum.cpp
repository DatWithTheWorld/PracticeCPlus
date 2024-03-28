	#include<iostream>


using namespace std;

int main (){
 int i=0,n,count =0;
  cout << "Enter N = ";
  cin >> n;
  if (n<=0){
  	cout << "N";
  }else{
  while(n!=0){
  int temp = n%10;
  if(temp%2!=0){
  	count++;
	  }
  n/10;
  }
  cout << "Total of odd digit in "<<n<< " is"<<count << endl;
}
  return 0;
}

