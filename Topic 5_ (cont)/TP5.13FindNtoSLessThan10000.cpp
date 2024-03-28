#include<iostream>
using namespace std;
int main (){
	int s=0;
	int i=1;
	while (s<10000)
	{
		s+=i;
		i++;
	}
	cout << i;
	return 0;
}
