// WAP to find the maximum and minimum value of an array using class template.

#include <iostream>
using namespace std;

// Class template to analyze an array
template<class T, int size>
class ArrayOperation {
private:
    T arr[size]; // Array to store elements

public:
    // Method to input elements into the array
    void inputArray() {
        cout << "Enter " << size << " elements: ";
        for (int i = 0; i < size; ++i) {
            cin >> arr[i];
        }
    }

    // Method to find the maximum value in the array
    T findMax() {
        T maxVal = arr[0];
        for (int i = 1; i < size; ++i) {
            if (arr[i] > maxVal) {
                maxVal = arr[i];
            }
        }
        return maxVal;
    }

    // Method to find the minimum value in the array
    T findMin() {
        T minVal = arr[0];
        for (int i = 1; i < size; ++i) {
            if (arr[i] < minVal) {
                minVal = arr[i];
            }
        }
        return minVal;
    }
};

int main() {
    const int arraySize = 5;
    ArrayOperation<int, arraySize> arr; // Creating an instance of the ArrayOperation class with integer type
    arr.inputArray(); // Inputting elements into the array

    cout << "Maximum value: " << arr.findMax() << endl;
    cout << "Minimum value: " << arr.findMin() << endl;

    return 0;
}

