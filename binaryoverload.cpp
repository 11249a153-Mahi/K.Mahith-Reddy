#include <iostream>
using namespace std;

class Complex {
private:
    int real, imag;

public:
    Complex(int r = 0, int i = 0) {
        real = r;
        imag = i;
    }

    Complex operator+(Complex c) {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(5, 3), c2(2, 4), c3;

    c3 = c1 + c2; 

    cout << "First complex number: ";
    c1.display();

    cout << "Second complex number: ";
    c2.display();

    cout << "Result (Addition): ";
    c3.display();

    return 0;
}
