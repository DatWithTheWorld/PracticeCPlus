#include <bits/stdc++.h>

using namespace std;

struct Node {
    int data;
    Node *next;
};

Node *head = NULL;

bool isset(int x){
    Node *curr = head;
    while(curr!=NULL){
        if(curr->data == x)
            return true;
        curr = curr->next;
    }
    return false;
}

bool subset(){
    Node *curr = head;
    while(curr!=NULL){
        if(!isset(curr->data))
            return false;
        curr = curr->next;
    }
    return true;
}

void insert(int x){
    if(isset(x))
        return;
    Node *temp = new Node;
    temp->data = x;
    temp->next = head;
    head = temp;
}

void display(){
    Node *curr = head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr = curr->next;
    }
}

void unionSets(Node *set1, Node *set2){
    while(set1!=NULL){
        insert(set1->data);
        set1 = set1->next;
    }
    while(set2!=NULL){
        insert(set2->data);
        set2 = set2->next;
    }
}

void intersectionSets(Node *set1, Node *set2){
    while(set1!=NULL){
        if(isset(set1->data))
            cout<<set1->data<<" ";
        set1 = set1->next;
    }
}

int main(){

    insert(1);
    insert(2);
    insert(3);

    cout<<"Set: ";
    display();
    cout<<"\n";

    if(isset(2))
        cout<<"2 is in set\n";
    else
        cout<<"2 is not in set\n";

    Node *otherSet = NULL;
    insert(3);
    insert(4);
    insert(5);

    cout<<"Other set: ";
    display();
    cout<<"\n";

    if(subset())
        cout<<"This is a subset\n";
    else
        cout<<"This is not a subset\n";

    cout<<"Union of sets: ";
    unionSets(head,otherSet);
    display();
    cout<<"\n";

    cout<<"Intersection of sets: ";
    intersectionSets(head,otherSet);

    return 0;
}

