#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    void setData(string n, int a) {
        name = n;
        age = a;
    }

    void displayData() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};


class Student : public Person {
private:
    int marks;

public:
    void setMarks(int m) {
        marks = m;
    }

    void displayStudent() {
        displayData();
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s1;

    s1.setData("Sneha", 20); 
    s1.setMarks(95);          

    cout << "Student Details:" << endl;
    s1.displayStudent();

    return 0;
}
