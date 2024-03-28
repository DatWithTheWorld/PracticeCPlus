#include<iostream>
#include<vector>
#include<string>
#include<fstream>
using namespace std;
struct Student {
	string name;
	int day;
	int month;
	int year;
	double mathmark;
	double physicmark;
	double languagemark;
    Student	*next;
};
void input(Student *s){
	
	getline(cin,s->name);
	cin >> s->day;
	cin>> s->month;
	cin>> s->year;
	cin>> s->mathmark;
	cin >> s->physicmark;
	cin>> s->languagemark;
}
void output(Student *ptr){
	for(Student *s=ptr;s!=NULL;s=s->next){
		cout << "name    :"<<s->name << endl;
		cout << "day     :"<<s->day<<endl;
		cout<<  "month   :"<<s->month<<endl;
		cout<<  "year    :"<<s->year<<endl;
		cout<<  "math    :"<<s->mathmark<<endl;
		cout << "physic  :"<<s->physicmark<<endl;
		cout << "language:"<<s->languagemark<<endl;
	}
}
void add(Student *&ptr){
	Student *s = new Student;
	input(s);
	s->next=ptr;
	ptr = s;
}
void countstdbyyear(Student *ptr){
	int y;
	cin >> y;
	int temp=0;
	bool check = false;
	for(Student *s =ptr;s!=NULL;s=s->next){
		if(s->year==y){
			temp++;
			check=true;
		}
	}
	if(check){
		cout << "Number of students have year = "<< y<<" is "<<temp <<endl;
	}else{
		cout << "NOT FOUND";
	}
}
int checkstd(Student *ptr){
	string name;
    getline(cin,name);
    int j=0;
    for(Student *s = ptr;s!=NULL;s=s->next){
    	if(s->name==name){
    		j= 1;
		}
	}
	return j;
}
void deletestd(Student *ptr){
	string name;
	getline(cin,name);
	Student *prev =NULL, *curr = ptr;
	while(curr!=NULL&& curr->name!=name){
		prev=curr;
		curr = curr->next;
	}
	if(curr==NULL){
		cout << "Nothing"<<endl;
		
	}else if(prev==NULL){
		ptr=curr->next;
	}else{
		prev->next=curr->next;
	}
	delete curr;
	cout << "STD"<< name <<"Delete" << endl;
	
}
void stdmax(Student *ptr){
	double high = 0;
	Student *std = NULL;
	for(Student *s = ptr;s!=NULL;s=s->next){
		double avg = (s->mathmark+s->languagemark+s->physicmark)/3;
		if(avg>high){
			high=avg;
			std=s;
		}else if(avg==high){
			Student *newstd = new Student;
			*newstd = *s;
			newstd->next=std;
			std=newstd;
		}
	}
	for(Student *s = std;s!=NULL;s=s->next){
		cout << s->name;
	}
}
void lesthanfive(Student *ptr){
	for(Student *s = ptr;s!=NULL;s=s->next){
		if(s->mathmark<5){
		cout << "name    :"<<s->name << endl;
		cout << "day     :"<<s->day<<endl;
		cout<<  "month   :"<<s->month<<endl;
		cout<<  "year    :"<<s->year<<endl;
		cout<<  "math    :"<<s->mathmark<<endl;
		cout << "physic  :"<<s->physicmark<<endl;
		cout << "language:"<<s->languagemark<<endl;
		}
	}
}
void menu(){
	cout << "---------------Menu-------------"<<endl;
	cout << "1.Input n student               "<<endl;
	cout << "2.Print out the std list        "<<endl;
	cout << "3.Add a new std to the list"<<endl;
	cout<<  "4.Count the std in a given year of birth"<<endl;
	cout <<"5.Check std by name"<<endl;
	cout<<"6.Delete std by name"<<endl;
	cout<<"7.Find std have biggest avg"<<endl;
	cout << "8.Std have math less than 5"<<endl;
	cout<<"9.Write to txt"<<endl;
	cout <<"0.Exit"<<endl;
}
void writefile(Student *ptr){
	ofstream outfile("Student.txt");
	
	for(Student *s = ptr;s!=NULL;s=s->next){
		outfile<<s->name<<s->day<<s->month<<s->year<<s->mathmark<<s->physicmark<<s->languagemark;
	}
	outfile.close();
}
int main(){
	Student *ptr = NULL;
	

	while(true){
		menu();
		int choose;
	cin >> choose;
	cin.ignore();
	if(choose==0){
		return false;
	}
	   switch(choose){
		case 1: int n;
		cin >> n;
		cin.ignore();
		for(int i=0;i<n;i++){
			add(ptr);
		}
		break;
		case 2:output(ptr);break;
		case 3: add(ptr);break;
		case 4: countstdbyyear(ptr);break;
		case 5: if(checkstd(ptr)==1) cout << "Valid"<<endl;break;
		case 6 : deletestd(ptr);break;
		case 7:stdmax(ptr);break;
		case 8:lesthanfive(ptr);break;
		case 9:writefile(ptr);
		case 0:break;
		default: break;
	}
}
	
	return 0;
}
