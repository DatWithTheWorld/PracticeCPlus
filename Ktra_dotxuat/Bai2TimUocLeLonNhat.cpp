	#include<iostream>

int findMax(int n,int max){
	for(int i=1;i<n;i++){
  		if(n%i==0){
  			if (i%2!=0){
  			if(i>max){
  				max = i;
			  }
		  }
	  }
	  }
	  return max;
}
using namespace std;

int main()
{
    int n, max = 0;
     cout<<"Enter N =  ";
    cin>>n;
  if (n>0){
  	cout << findMax(n,max);
  }else{
  	cout << "N";
  }
 
   return 0;
}

