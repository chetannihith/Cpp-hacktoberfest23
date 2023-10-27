// WAP to show more than one template mechanism.

#include <iostream>
using namespace std;

// First function template with one type parameter
template <class T>
void print(T value) {
    cout << "Value: " << value << endl;
}

// Second function template with two type parameters
template <class T, class U>
void multiplyAndPrint(T a, U b) {
    cout << "Product: " << a * b << endl;
}

int main() {

    print(5);
    multiplyAndPrint(4, 5.5);

    return 0;
}
