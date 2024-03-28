// Ma De 09
#include<iostream>
#include<algorithm>
using namespace std;

void quickSort(int a[], int pre, int next){
	int p= a[(pre+next)/2];
	int i=pre;
	int j=next;
	while(i<j){
		while(a[i]<p){
			i++;
		}
		while(a[j]>p){
			j--;
		}
		if(i<=j){
			int temp=a[i];
			a[i]=a[j];
			a[j]= temp;
			i++;
			j--;
		}
	}
	if(i<next){
		quickSort(a,i,next);
	}
	if(pre<j){
		quickSort(a,pre,j);
	}
}

void nhapmang(int n, int arr[]){
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
}
void xuatmang(int n, int arr[]){
	for(int i=0;i<n;i++){
		cout << arr[i] << " ";
	}
}
int main(){
	int n,low,high;
	int arr[n];
	cin >> n;
	nhapmang(n,arr);
	
	xuatmang(n,arr);
	quickSort(arr,0,n-1);
	cout << endl;
	xuatmang(n,arr);
	return 0;
}
