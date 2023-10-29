// WAP to show single inheritance with main function access.

#include <iostream>
using namespace std;

// Base class
class Base {
public:
    void display() {
        cout << "Display function of base class." << endl;
    }
};

// Derived class with single inheritance
class Derived : public Base {
public:
    void show() {
        cout << "Show function of derived class." << endl;
    }
};

// Main function
int main() {
    Derived d; // Creating an object of the derived class
    d.display(); // Accessing the base class function from the derived class object
    d.show(); // Accessing the derived class function
    return 0;
}
