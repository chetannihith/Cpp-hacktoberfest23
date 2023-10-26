// WAP to demonstrate different functions of vector and reverse() which is an algorithm.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // Declare and initialize a vector
    vector<int> myVector = {1, 2, 3, 4, 5};

    // Display the original vector
    cout << "Original Vector: ";
    for (int i = 0; i < myVector.size(); ++i) {
        cout << myVector[i] << " ";
    }
    cout << endl;

    // Demonstrating different functions of vector
    myVector.push_back(6); // Adding an element to the end of the vector
    cout << "Vector after push_back: ";
    for (int i = 0; i < myVector.size(); ++i) {
        cout << myVector[i] << " ";
    }
    cout << endl;

    cout << "Size of the Vector: " << myVector.size() << endl; // Displaying the size of the vector

    // Using the reverse algorithm to reverse the vector
    reverse(myVector.begin(), myVector.end());
    cout << "Reversed Vector: ";
    for (int i = 0; i < myVector.size(); ++i) {
        cout << myVector[i] << " ";
    }
    cout << endl;

    return 0;
}

