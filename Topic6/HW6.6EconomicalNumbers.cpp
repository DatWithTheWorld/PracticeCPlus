#include<iostream>
using namespace std;
int demchuso(int n){
	int count = 0;
	while(n!=0){
		int temp = n%10;
		n/=10;
		count++;
	}
return count;
}
int ab(int n){
	int dem;
	int demchu = demchuso(n);
	int counti=0;
    int countdem=0;
    int a[n];
   
    for(int i = 2; i <= n; i++){
        dem = 0;
        while(n % i == 0){
            ++dem;
            n /= i;
            for (int j=0;j<dem;j++){
			a[j]=i;	
        }
        }
        for (int j=0;j<dem;j++){
			if(a[j]!=a[j+1]){
				counti += demchuso(i);
			}
			}
        
       if(dem!=0){
          
           
            if(dem > 1) {
            countdem+=demchuso(dem);
            }
            
        }
}
cout << endl;

	if(counti+countdem==demchu){
			return 1;
		}else
		if(counti+countdem<demchu){
			return 2;
		}
		else{
		 return 3;
	}
}
int main(){
	int n;
	cin >>n;
	cout << ab(n);
	return 0;
}
