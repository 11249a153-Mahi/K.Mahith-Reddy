#include<iostream>
using namespace std;
class number{
    int value;
    public:
    number(int v=0):value (v){}
    void display(){
        cout<<"Value:"<<value<<endl;
    }
    number add (number n){
        return number (value +n.value);
    }
};
int main(){
    number n1(10),n2(20),n3;
    n3=n1.add(n2);
    n3.display();
    return 0;
}