#include<iostream>
#include<cmath>
#include<bits/stdc++.h> 
#include<iomanip>
#include<string>
using namespace std;
int main(){
	string name,namect,namesc,job,animal,thucung,tuoi;
	cout << "Nhap vao ten :";
	getline(cin,name);
	cout << "Nhap vao tuoi: ";
     getline(cin,tuoi);
     cout << "Nhap vao ten thanh pho: ";
     getline(cin,namect);
     cout << "Nhap vao ten cua truong : ";
     getline(cin,namesc);
     cout << "Nhap vao ten nghe : ";
     getline(cin,job);
     cout << "Nhap vao ten dong vat : ";
     getline(cin,animal);
     cout << "Nhap vao ten thu cung: ";
     getline(cin,thucung);
     cout << "There once was a person named "<< name << " who lived in " << namect << ". At the age of  "<<tuoi<< " ,"<<name<<" went to college at "<< namesc;


   return 0;
}

