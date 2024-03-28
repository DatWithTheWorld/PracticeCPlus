#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Student {
    string name;
    string class_;
    float mMath;
    float mPhysical;
};
void them(vector<Student>& students) {
    Student student;
    getline(cin,student.name);
    getline(cin,student.class_);
    cin>>student.mMath;
    cin>>student.mPhysical;
    students.push_back(student);
    
}
void timtheoten(vector<Student>& students) {
	
	string name;
    getline(cin, name);
    
    bool found = false;
    for(int i=0;i<students.size();i++){
        if (students.at(i).name == name) {
            cout << "Name: " << students.at(i).name << endl;
            cout << "Class: " << students.at(i).class_ << endl;
            cout << "Math score: " << students.at(i).mMath << endl;
            cout << "Physical score: " << students.at(i).mPhysical << endl;
            found = true;
            break;
        }
    
}
    if (!found) {
        cout << "Khong co ten nay" << endl;
    }
}
void timvasua(vector<Student>& students) {
    string name;
    getline(cin, name);

    bool found = false;
    for(int i=0;i<students.size();i++){
        if (students.at(i).name == name) {
            getline(cin, students.at(i).class_);
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Khong co ten nay" << endl;
    }
}

int main() {
    vector<Student> students;
    char choice;

    do {
        cout << endl << "Menu:" << endl;
        cout << "1. Add a new student" << endl;
        cout << "2. Search a student by name" << endl;
        cout << "3. Search a student by name and edit class of the student" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();  // ignore newline character

        switch (choice) {
            case '1':
                them(students);
                break;
            case '2':
               timtheoten(students);
                break;
            case '3':
                timvasua(students);
                break;
            case '4':
                break;
            default:
                cout << "Invalid choice." << endl;
                break;
        }
    } while (choice != '4');

    return 0;
}
