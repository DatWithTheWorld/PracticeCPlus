#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
bool check(int n)
{
    if(n<2) return false;
    int sq = sqrt(n);
    for(int i=2;i <=sq ;i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}
void Primorial(int n){
	int mul = 1;
	int dem=1;
  for (int j=1;j<99;j++){
  	if(check(j)==true){
  		if(dem<=n){
  		dem++;
		  mul*=j;
  	}
	  }
  }
  
  	cout << mul;
  
 
}




int main(){
	int n;
	cin >> n;
	Primorial(n);
	return 0;
}
