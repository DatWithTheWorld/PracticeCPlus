#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

typedef struct STUDENT {
    char name[30];
    char classs[10];
    float mMath;
    float mPhysical;
    float avg;
} Student;

// Function to add a new student to the list
void addStudent(Student students[], int& n) {
    cout << "Enter the name of the student: ";
    cin.ignore();
    cin.getline(students[n].name, 30);
    cout << "Enter the classs of the student: ";
    cin >> students[n].classs;
    cout << "Enter the math score of the student: ";
    cin >> students[n].mMath;
    cout << "Enter the physical score of the student: ";
    cin >> students[n].mPhysical;
    students[n].avg = (students[n].mMath + students[n].mPhysical) / 2.0;
    n++;
}

// Function to search a student by name
void searchStudentByName(Student students[], int n, char name[]) {
    bool found = false;
    for (int i = 0; i < n; i++) {
        if (strcmp(students[i].name, name) == 0) {
            cout << "Student found:" << endl;
            cout << "Name: " << students[i].name << endl;
            cout << "classs: " << students[i].classs << endl;
            cout << "Math score: " << students[i].mMath << endl;
            cout << "Physical score: " << students[i].mPhysical << endl;
            cout << "Average: " << students[i].avg << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Student not found." << endl;
    }
}

// Comparator function for sorting the list in descending order based on average
bool compareByAvg(Student a, Student b) {
    return a.avg > b.avg;
}

// Function to sort the list in descending order based on average
void sortListByAvg(Student students[], int n) {
    sort(students, students+n, compareByAvg);
}

int main() {
    const int MAX_STUDENTS = 100;
    Student students[MAX_STUDENTS];
    int n = 0;
    
    // Add new students to the list
    addStudent(students, n);
    addStudent(students, n);
    addStudent(students, n);
    
    // Search for a student by name
    char name[30];
    cout << "Enter the name of the student to search: ";
    cin.ignore();
    cin.getline(name, 30);
    searchStudentByName(students, n, name);
    
    // Sort the list in descending order based on average
    sortListByAvg(students, n);
    
    // Output the sorted list
    cout << "List of students sorted by average:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Name: " << students[i].name << endl;
        cout << "classs: " << students[i].classs << endl;
        cout << "Math score: " << students[i].mMath << endl;
        cout << "Physical score: " << students[i].mPhysical << endl;
        cout << "Average: " << students[i].avg << endl;
    }
    
    return 0;
}
