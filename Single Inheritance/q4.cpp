// WAP to show single inheritance parameterized only in child class.

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
    Derived(int val) {
        cout << "Derived class constructor called with value " << val << "." << endl;
    }
};

// Main function
int main() {
    Derived d(10); // Creating an object of the derived class with a parameter
    return 0;
}
