// WAP to show single inheritance parameterize constructor.

#include <iostream>
using namespace std;

// Base class
class Base {
public:
    Base(int val) {
        cout << "Base class constructor called with value " << val << "." << endl;
    }
};

// Derived class with single inheritance
class Derived : public Base {
public:
    Derived(int val) : Base(val) {
        cout << "Derived class constructor called with value " << val << "." << endl;
    }
};

// Main function
int main() {
    Derived d(5); // Creating an object of the derived class with a parameter
    return 0;
}
