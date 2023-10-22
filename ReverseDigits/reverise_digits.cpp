#include <iostream>

// Function to reverse the digits of a number using pointers
void reverseDigits(int *num) {
    // Check if the number is negative and handle the sign
    bool isNegative = (*num < 0);
    if (isNegative) {
        *num = -(*num);
    }

    int reversedNum = 0;
    while (*num > 0) {
        int digit = *num % 10;
        reversedNum = reversedNum * 10 + digit;
        *num /= 10;
    }

    // Restore the sign if the number was negative
    if (isNegative) {
        reversedNum = -reversedNum;
    }

    *num = reversedNum;
}

int main() {
    int number;

    std::cout << "Enter a number: ";
    std::cin >> number;

    reverseDigits(&number);

    std::cout << "Reversed number: " << number << std::endl;

    return 0;
}
