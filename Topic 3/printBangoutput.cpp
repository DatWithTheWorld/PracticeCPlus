#include <iostream>

using namespace std;
int main(){
    int x,y;
	cout << "Input x:  ";
	cin >> x;
	cout << "Input y: ";
	cin >> y;
	cout << "Gia tri " << x << " Gia tri " << y << " Bieu thuc " << " Ket qua"<<endl;
	cout <<"  "<< x << "|" << "      "<<y <<"|"<< "         A="<<y<<"+3"<< "    1   |A="<<y+3<<endl;
	cout <<"  "<< x << "|" << "      "<<y <<"|"<< "         B="<<y<<"-2"<< "       |B="<<y-2<<endl;
	cout <<"  "<< x << "|" << "      "<<y <<"|"<< "         C="<<y<<"*5"<< "       |C="<<y*5<<endl;
	cout <<"  "<<x << "|" <<  "      "<<y <<"|"<< "         D="<<x<<"/"<<y<< "      |D="<<x/y<<endl;
	cout <<"  "<< x << "|" << "      "<<y <<"|"<< "         E="<<x<<"%"<<y<< "      |E="<<x%y<<endl;
     
	return 0;
}
