#include<iostream>
using namespace std;
class Student{
    int roll;
    string name;
    public:
    void getData(){
        cout<<"Enter roll and name:"<<endl;
        cin>>roll>>name;
    }
    void display(){
        cout<<"Roll:"<<roll<<"Name:"<<name<<endl;
    }
};
int main(){
    Student s[3];
    for(int i=0;i<3;i++){
        s[i].getData();
    }
    for(int i=0;i,3;i++){
        s[i].display();
    }
return 0;
}
