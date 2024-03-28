 #include<iostream>
 using namespace std;
 int main(){
 	int n;
 	cin>>n;
 	int a[n];
 	int b[n];
 	for(int i=0;i<n;i++){
 		cin >> a[i];
	 }
	 int s=0;
	 for(int i=0;i<n;i++){
	 	s+=a[i];
	 	b[i]=s;
	 }
	 for(int i=0;i<n;i++){
	 	cout <<  b[i]<< " ";
	 }
 	
 	return 0;
 }
