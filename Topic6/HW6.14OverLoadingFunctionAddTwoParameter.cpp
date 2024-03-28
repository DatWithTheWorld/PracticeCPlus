#include<iostream>
using namespace std;
void add(int x,int y){
	cout << "Sum int:"<<x+y<<endl;
}
void add(float a, float b){
	cout << "Sum float: "<<a+b<<endl;
}
void add(double m, double n){
	cout << "Sum double: "<<m+n<<endl;
}
int main(){
	int x,y;
	float a,b;
	double m,n;
	cout << "x=";
	cin >> x;
	cout << "y=";
	cin  >> y;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	cout << "m=";
	cin>>m;
	cout << "n=";
	cin >> n;
	add(x,y);
	add(a,b);
	add(m,n);
	return 0;
}
