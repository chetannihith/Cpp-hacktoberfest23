// WAP to show use of multiple template.

#include <iostream>
using namespace std;

// Class template with multiple parameters
template <class T, class U>
class Pair
{
private:
    T first; // First value of the pair
    U second; // Second value of the pair

public:
    // Constructor to initialize the pair
    Pair(T a, U b) : first(a), second(b) {}

    T getFirst() { return first; }
    U getSecond() { return second; }
};

int main()
{
    // Creating instances of Pair with different data types
    Pair<int, double> pair1(5, 6.7); // Instantiating Pair with int and double types
    Pair<char, int> pair2('a', 10); // Instantiating Pair with char and int types

    // Displaying the values stored in the pairs
    cout << "Pair 1: " << pair1.getFirst() << " and " << pair1.getSecond() << endl; // Displaying the first and second values of pair1
    cout << "Pair 2: " << pair2.getFirst() << " and " << pair2.getSecond() << endl; // Displaying the first and second values of pair2

    return 0;
}
