// Create a 'Rectangle' class with two data members, length and breadth, and a function to calculate the area that is 'length*breadth'.
// The class has three constructors, which are as follows:
// a - no parameter - length and breadth values are both set to zero.
// b - using two numbers as parameters, one for length and one for breadth.
// c - Using a single number as a parameter - that number is assigned to both length and breadth.
// Now, create objects of the 'Rectangle' class having none, one, and two parameters and print their areas.

// Define the Rectangle class
class Rectangle {
    // Data members: length and breadth
    int length;
    int breadth;

public:
    // Constructor with no parameters
    Rectangle() {
        length = 0;
        breadth = 0;
    }

    // Constructor with two parameters for length and breadth
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }

    // Constructor with a single parameter for both length and breadth
    Rectangle(int side) {
        length = side;
        breadth = side;
    }

    // Function to calculate the area
    int calculateArea() {
        return length * breadth;
    }
};

// Create objects and print their areas
int main() {
    // Create objects with different constructors
    Rectangle rect1; // No parameter constructor, both length and breadth are 0
    Rectangle rect2(4, 6); // Constructor with two parameters, length = 4, breadth = 6
    Rectangle rect3(5); // Constructor with a single parameter, length = 5, breadth = 5

    // Print areas
    int area1 = rect1.calculateArea();
    int area2 = rect2.calculateArea();
    int area3 = rect3.calculateArea();

    // Print the areas
    cout << "Area of rect1: " << area1 << endl;
    cout << "Area of rect2: " << area2 << endl;
    cout << "Area of rect3: " << area3 << endl;

    return 0;
}
