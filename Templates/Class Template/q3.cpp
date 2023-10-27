// WAP to show template and non-template argument.

#include <iostream>
using namespace std;

// Function template with one template argument and two non-template arguments
template <class T>
T add(T a, T b, T c) {
    return a + b + c;
}

int main() {
    int x = 5, y = 10, z = 15; // Non-template arguments
    double d1 = 1.5, d2 = 2.5, d3 = 3.5; // Non-template arguments

    cout << "Sum of integers: " << add(x, y, z) << endl;
    cout << "Sum of doubles: " << add(d1, d2, d3) << endl;

    return 0;
}
