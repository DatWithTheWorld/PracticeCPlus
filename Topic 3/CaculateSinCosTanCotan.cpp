#include <iostream>
#include<math.h>
using namespace std;
int main(){
   double x;
   cout << "Input degree of an angle =";
   cin >> x;
   double d = x*3.14/180;
   cout << "Sin = "<< sin(d)<< endl;
   cout << "Cos = "<< cos(d)<<endl;
   cout << "Tan = "<< tan(d)<<endl;
   cout << "Cotan = "<< atan(d)<<endl;
   
     
	return 0;
}
