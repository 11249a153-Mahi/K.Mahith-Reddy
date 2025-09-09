#include<iostream>
using namespace std;
class Demo{
    
    public:
    int x;
    Demo(){
        x=0;
        cout<<"Default constructor\n:"<<endl;
    }
    Demo(int val){
        x =val;
        cout<<"parameterized constructor\n:"<<endl;
    }
    Demo(const Demo &d){
        x=d.x;
        cout<<"copy constructor\n:";
    }
    ~Demo(){
        cout<<"Destructor called\n:";
    }
    void show(){
        cout<<"value:"<<x<<endl;
    }
};
int main(){
    Demo d1;
    Demo d2(100);
    Demo d3=d2;
    d1.show();
    d2.show();
    d3.show();
    return 0;
}