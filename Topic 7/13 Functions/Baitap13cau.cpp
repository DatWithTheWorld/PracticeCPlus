#include<iostream>
using namespace std;

void nhapmang(int a[],int &n){
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
}
void inchanmang(int a[],int &n){
	for(int i=0;i<n;i++){
		if(a[i]%2==0){
			cout << a[i] << " ";
		}
	}
}
double avgchan(int a[], int &n){
	int s=0,count=0;
	for(int i=0;i<n;i++){
		if(a[i]%2==0){
			s+=a[i];
			count++;
		}
	}
	return (double)s/count;
}
bool checksont(int x){
	int dem=0;
	for(int i=2;i<x;i++){
		if(x%i==0){
			dem++;
		}
	}
	if(dem){
		return false;
	}
	if(!dem){
		return true;
	}
}
void timsonguyento(int a[], int &n){
	for (int i=0;i<n;i++){
		
		if(checksont(a[i])==true){
			cout << a[i] << " ";
		}
	}
}
void sapxeptangdan(int a[], int &n){
	 for(int i=0;i<n-1;i++){
	 	for(int j=i+1;j<n;j++){
	 	if(a[i]>a[j]){
	 		int temp = a[i];
	 		a[i]=a[j];
	 		a[j]=temp;
		 }
		}
	 }
	 for(int i=0;i<n;i++){
	 	cout << a[i] << " ";
	 }
}
void timnhohonx(int a[], int &n, int x){
	for(int i=0;i<n;i++){
		if(a[i]<x){
			cout << a[i] << " ";
		}else break;
	}
}
void timlonhonx(int a[], int &n, int x){
	for(int i=0;i<n;i++){
		if(a[i]>x){
			cout << a[i] << " ";
		}
	}
}
void congdon(int a[], int &n){
	int s=0;
	for(int i=0;i<n;i++){
		s+= a[i]+a[i-1] ;
		cout << s << " ";
	}
}
int timsolonnhat(int a[], int &n){
	int max=a[0];
	for(int i=0;i<n;i++){
		if(a[i]>max){
			max=a[i];
		}
	}
	return max;
}
int timchannhonhat(int a[], int &n){
	int min=timsolonnhat(a,n);
	for(int i=0;i<n;i++){
		if(a[i]%2==0){
			if(a[i]<min){
				min=a[i];
			}
		}
	}
	return min;
}
void thaybang0(int a[],int& n){
	for(int i=0;i<n;i++){
		if(checksont(a[i])==true){
			a[i]=0;
		}
	}
}
void xuatmang(int a[],int &n){
	for(int i=0;i<n;i++){
		cout << a[i] << " ";
	}
}
//
//
void xoavitri(int arr[], int &daimang, int vt){
	for(int i=vt +1 ;i<daimang;i++){
		arr[i-1]=arr[i];
	}
	daimang--;
}
void xoatrung(int arr[], int &daimang ){
	for(int i=0;i<daimang-1;i++){
		for(int j=i+1;j<daimang;j++){
			if(arr[j]==arr[i]){
				xoavitri(arr,daimang,j);
				i--;
			}
		}
	}
}
int  demsophantutrung(int &n, int a[]){
	int mang[100],count=0;
for(int i=0;i<n-1;i++){
	for(int j=i+1;j<n;j++){
		if(a[i]==a[j]){
			mang[count]=a[i];
			++count;
		}
	}
}

for(int z=0;z<count;z++){
cout << mang[z]<< " ";
}
return count;
}
void hienthidaytang(int a[],int &n){
	for(int i=0;i<n;i++){
		if(a[i]<a[i+1]){
			cout << a[i] << " ";
		}
	}
}
int main(){
	int n;
	cin >> n;
	int a[n];
	nhapmang(a,n);
	xuatmang(a,n);
	cout << endl;
	sapxeptangdan(a,n);
//	cout << endl;
//	xuatmang(a,n);
	cout << endl;
	cout<< "Chan mang" << endl;
	inchanmang(a,n);
	cout << endl;
	cout << "Trung binh phan tu"<< endl;
	cout << avgchan(a,n)<<endl;
	cout <<"Tim so nguyen to"<<endl;
	timsonguyento(a,n);
	cout<<"Xoatrung" << endl;
	xoatrung(a,n);
	xuatmang(a,n);
	cout <<"Tim chan nho nhat"<< endl;
	cout << timchannhonhat(a,n);
	cout << endl;
	int x;
	cin >> x;
	cout << "Tim lon hon x"<<endl;
	timlonhonx(a,n,x);
	cout << endl;
	cout<<"Hien thi day tang" << endl;
	hienthidaytang(a,n);
	cout<<"Thay bang 0" << endl;
	thaybang0(a,n);
	cout<<"Cong don" << endl;
	congdon(a,n);
	cout<<"Tim nho hon x" << endl;
	timnhohonx(a,n,x);
	
	return 0;
}

