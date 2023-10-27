// WAP to compare 2 values using a function template and display the largest value. Check your program for char, int, and float type data.

#include <iostream>
using namespace std;

// Function template to find the maximum of two values
template <class T>
T findMax(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    // Taking input for comparing two char values
    char char1, char2;
    cout << "Enter two characters: ";
    cin >> char1 >> char2;
    cout << "Largest char: " << findMax(char1, char2) << endl;

    // Taking input for comparing two int values
    int int1, int2;
    cout << "Enter two integers: ";
    cin >> int1 >> int2;
    cout << "Largest int: " << findMax(int1, int2) << endl;

    // Taking input for comparing two float values
    float float1, float2;
    cout << "Enter two float values: ";
    cin >> float1 >> float2;
    cout << "Largest float: " << findMax(float1, float2) << endl;

    return 0;
}
