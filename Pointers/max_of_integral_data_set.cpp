// Write a C++ program to find the max of an integral data set.
//  The program will ask the user to input the number of data values in the set and each value. 
//  The program prints on the screen a pointer that points to the max value.

#include <iostream>

int main() {
    int n;

    // Ask the user to input the number of data values
    std::cout << "Enter the number of data values: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Invalid input. The number of data values must be greater than 0." << std::endl;
        return 1;
    }

    // Dynamically allocate an array to store the data values
    int* data = new int[n];

    // Ask the user to input each value
    for (int i = 0; i < n; i++) {
        std::cout << "Enter value " << i + 1 << ": ";
        std::cin >> data[i];
    }

    // Find the maximum value and its position in the array
    int max = data[0];
    int* maxPointer = &data[0];
    for (int i = 1; i < n; i++) {
        if (data[i] > max) {
            max = data[i];
            maxPointer = &data[i];
        }
    }

    // Print the maximum value and the pointer pointing to it
    std::cout << "Maximum value: " << max << std::endl;
    std::cout << "Pointer to the maximum value: " << maxPointer << std::endl;

    // Deallocate the dynamically allocated array
    delete[] data;

    return 0;
}

