#include <iostream>
#include<math.h>
using namespace std;
int main(){
   double x,y,s,p;
   cout << "Input x and y =";
   cin >> x >> y;
   p=x*y;
   s=x+y;
   cout << "P= "<< x*y <<endl;
   cout << "S= "<< x+y<<endl;
   cout << "Q= " << s*2 +p*(s*x)*(p+y)<<endl;
     
	return 0;
}
