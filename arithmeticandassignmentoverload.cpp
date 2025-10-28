#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int marks;

public:
   
    Student(string n = "", int m = 0) {
        name = n;
        marks = m;
    }

   
    Student operator+(const Student& s) {
        Student temp;
        temp.name = name + " & " + s.name; 
        temp.marks = marks + s.marks;      
        return temp;
    }

    Student& operator=(const Student& s) {
        if (this != &s) {
            name = s.name;
            marks = s.marks;
        }
        return *this;
    }

    
    void display() {
        cout << "Name: " << name << ", Marks: " << marks << endl;
    }
};

int main() {
    Student s1("Sneha", 85);
    Student s2("Kiran", 90);
    Student s3;

    cout << "Original Students:" << endl;
    s1.display();
    s2.display();

   
    s3 = s1 + s2; 
    cout << "\nAfter adding marks (s3 = s1 + s2):" << endl;
    s3.display();

    
    Student s4;
    s4 = s1; 
    cout << "\nAfter assignment (s4 = s1):" << endl;
    s4.display();

    return 0;
}
