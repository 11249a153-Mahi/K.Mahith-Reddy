#include <iostream>
using namespace std;


class Vehicle {
protected:
    string brand;
    string model;

public:
    void setVehicleData(string b, string m) {
        brand = b;
        model = m;
    }

    void displayVehicle() {
        cout << "Brand: " << brand << ", Model: " << model << endl;
    }
};

class Engine {
protected:
    int horsepower;
    float mileage;

public:
    void setEngineData(int hp, float mil) {
        horsepower = hp;
        mileage = mil;
    }

    void displayEngine() {
        cout << "Horsepower: " << horsepower << ", Mileage: " << mileage << " km/l" << endl;
    }
};


class Car : public Vehicle, public Engine {
private:
    string color;

public:
    void setColor(string c) {
        color = c;
    }

    void displayCar() {
        displayVehicle(); 
        displayEngine();  
        cout << "Color: " << color << endl;
    }
};

int main() {
    Car car1;

    car1.setVehicleData("Toyota", "Corolla"); 
    car1.setEngineData(130, 18.5);           
    car1.setColor("Red");                  

    cout << "Car Details:" << endl;
    car1.displayCar();

    return 0;
}
