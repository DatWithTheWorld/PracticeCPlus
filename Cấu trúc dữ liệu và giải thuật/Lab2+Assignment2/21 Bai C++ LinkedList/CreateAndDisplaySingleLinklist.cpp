#include<iostream>
using namespace std;
struct node{
	int num;
	node *next;
};
void add(node *&st){
	node *s = new node;
	cin >> s->num;
	s->next=st;
	st=s;
	
}
void output(node *st){
	for(node *s=st;s!=NULL;s=s->next){
		cout << s->num << endl;
	}
}
int main(){
	node *st =NULL;
	int n;
		cin >> n;
		cin.ignore();
		for(int i=0;i<n;i++){
			add(st);
		}
		output(st);
return 0;
}
