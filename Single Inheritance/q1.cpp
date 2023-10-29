// WAP to show single inheritance with default constructor.

#include <iostream>
using namespace std;

// Base class
class Base {
public:
    Base() {
        cout << "Base class constructor called." << endl;
    }
};

// Derived class with single inheritance
class Derived : public Base {
public:
    Derived() {
        cout << "Derived class constructor called." << endl;
    }
};

// Main function
int main() {
    Derived d; // Creating an object of the derived class
    return 0;
}
