#include<iostream>
using namespace std;
 struct node{
 	int num;
 	int coeff;
 	struct node *next;
 };
 void add(node **ptr,int n,int c){
 	node *newnode = new node;
 	newnode->num=n;
 	newnode->coeff=c;
 	newnode->next=NULL;
 	if(*ptr==NULL){
 		*ptr = newnode;
 		return;
	 }
	 node *prev = NULL;
	 node *curr = *ptr;
	 while(curr!=NULL&&curr->coeff>c){
	 	prev = curr;
	 	curr = curr->next;
	 }
	 if (curr != NULL && curr->coeff == c) {
        curr->num += n;
        delete newnode;
    }else {
        newnode->next = curr;
        if (prev != NULL) {
            prev->next = newnode;
        } else {
            *ptr = newnode;
        }
    }
 }
 void out(node *ptr) {
    if (ptr == NULL) {
        cout << "Empty polynomial" << endl;
        return;
    }

    node *curr = ptr;
    while (curr != NULL) {
        if (curr != ptr && curr->num > 0) {
            cout << "+ ";
        }
        cout << curr->num << "x^" << curr->coeff << " ";
        curr = curr->next;
    }
    cout << endl;
}


void add_poly(node *poly1, node *poly2)
{
    while (poly1 && poly2)
    {
        if (poly1->num > poly2->num)
        {
            cout << poly1->coeff << "x^" << poly1->num << " + ";
            poly1 = poly1->next;
        }
        else if (poly1->num < poly2->num)
        {
            cout << poly2->coeff << "x^" << poly2->num << " + ";
            poly2 = poly2->next;
        }
        else
        {
            cout << poly1->coeff + poly2->coeff << "x^" << poly1->num << " + ";
            poly1 = poly1->next;
            poly2 = poly2->next;
        }
    }
    while (poly1 || poly2)
    {
        if (poly1)
        {
            cout << poly1->coeff << "x^" << poly1->num << " + ";
            poly1 = poly1->next;
        }
        if (poly2)
        {
            cout << poly2->coeff << "x^" << poly2->num << " + ";
            poly2 = poly2->next;
        }
    }
    cout << endl;
}
void sub_poly(node *poly1, node *poly2)
{
    while (poly1 && poly2)
    {
        if (poly1->num > poly2->num)
        {
            cout << poly1->coeff << "x^" << poly1->num << " - ";
            poly1 = poly1->next;
        }
        else if (poly1->num < poly2->num)
        {
            cout << "-" << poly2->coeff << "x^" << poly2->num << " + ";
            poly2 = poly2->next;
        }
        else
        {
            cout << poly1->coeff - poly2->coeff << "x^" << poly1->num << " + ";
            poly1 = poly1->next;
            poly2 = poly2->next;
        }
    }
    while (poly1 || poly2)
    {
        if (poly1)
        {
            cout << poly1->coeff << "x^" << poly1->num << " - ";
            poly1 = poly1->next;
        }
        if (poly2)
        {
            cout << "-" << poly2->coeff << "x^" << poly2->num << " + ";
            poly2 = poly2->next;
        }
    }
    cout << endl;
}
void menu(){
	cout << "----------------------------------Menu---------------------------"<<endl;
	cout << "1.Input a polynomial and store it in a linked list               "<<endl;
	cout << "2.Print the polynomial.        "<<endl;
	cout << "3.Perform addition on two polynomials."<<endl;
	cout<<  "4.Perform subtraction on two polynomials"<<endl;
	cout <<"0.Exit"<<endl;
}

 int main(){
 	node *poly1 = NULL; node *poly2 = NULL;
 	int num1,coeff,num;
	

	while(true){
		menu();
		int choose;
	cin >> choose;
	cin.ignore();
	if(choose==0){
		return false;
	}
	   switch(choose){
		case 1: cin >> num1;
		for(int i=0;i<num1;i++){
			cin >> coeff >> num;
			add(&poly1,num,coeff);
		}
		cin >> num1;
		for(int i=0;i<num1;i++){
			cin >> coeff>> num;
			add(&poly2,num,coeff);
		}
		break;
		case 2:out(poly1);out(poly2);break;
		case 3: add_poly(poly1,poly2);break;
		case 4: sub_poly(poly1,poly2);break;
		case 0:break;
		default: break;
	}
}
	
	return 0;
 }
