	#include<iostream>


using namespace std;

int main()
{
    int n,i, num = 0;
     cout<<"Enter any number to print in words: ";
    cin>>n;
 
    while(n != 0)
    {
        num = (num * 10) + (n % 10);
        n /= 10;
    }
     while(num != 0)
    {
        i=num % 10;
     if (i%2!=0){
     	cout << i ;
	 }
        num = num / 10;
    }
 
   return 0;
}

