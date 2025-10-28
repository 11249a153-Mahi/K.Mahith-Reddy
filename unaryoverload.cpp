#include <iostream>
using namespace std;

class Counter {
private:
    int value;

public:
    Counter(int v) : value(v) {}

  
    void operator++() {
        ++value; 
    }

    // Display value
    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Counter c1(5);

    cout << "Before increment: ";
    c1.display();

    ++c1; 

    cout << "After increment: ";
    c1.display();

    return 0;
}
