// WAP to show overloading template with template and a normal function.

#include <iostream>
using namespace std;

// Template function that takes one type parameter
template <class T>
T add(T a, T b) {
    cout << "Template add function called." << endl;
    return a + b;
}

// Overloading the template function with another template function
template <class T, class U>
T add(T a, U b) {
    cout << "Overloaded template add function called." << endl;
    return a + static_cast<T>(b);
}

// Overloading the template function with a regular function
int add(int a, int b) {
    cout << "Regular add function called." << endl;
    return a + b;
}

int main() {
    cout << add(5, 6) << endl; // Calls the regular add function
    cout << add(5, 6.7) << endl; // Calls the overloaded template add function
    cout << add(5.5, 6.7) << endl; // Calls the template add function

    return 0;
}

