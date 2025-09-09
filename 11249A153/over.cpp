#include<iostream>
using namespace std;
class calculator{
    public:
    void add (int a,int b){
        cout<<"sum (int):"<<a+b<<endl;
    }
    void add(double a,double b){
        cout<<"sum (double):"<<a+b <<endl;
    }
    void add (int a, int b,int c){
        cout<<"sum(3ints):"<<a+b+c<<endl;
    }
};
int main(){
    calculator calc;
    calc.add (5,10);
    calc.add(3.5,2.5);
    calc.add(1,2,3);
    return 0;
}