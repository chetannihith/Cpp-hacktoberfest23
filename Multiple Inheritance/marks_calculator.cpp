#include <iostream>
#include <string>
using namespace std;

// Define a class named Marks
class Marks {
protected:
    int rollNumber;
    string name;
    int marks;

public:
    // Constructor to initialize rollNumber and name
    Marks(int roll, string studentName) : rollNumber(roll), name(studentName) {}

    // Function to set marks
    void setMarks(int studentMarks) {
        marks = studentMarks;
    }
};

// Define a class named Physics inheriting from Marks
class Physics : public Marks {
public:
    // Constructor to initialize rollNumber and name using base class constructor
    Physics(int roll, string studentName) : Marks(roll, studentName) {}

    // Function to get physics marks
    int getPhysicsMarks() {
        return marks;
    }
};

// Define a class named Chemistry inheriting from Marks
class Chemistry : public Marks {
public:
    // Constructor to initialize rollNumber and name using base class constructor
    Chemistry(int roll, string studentName) : Marks(roll, studentName) {}

    // Function to get chemistry marks
    int getChemistryMarks() {
        return marks;
    }
};

// Define a class named Mathematics inheriting from Marks
class Mathematics : public Marks {
public:
    // Constructor to initialize rollNumber and name using base class constructor
    Mathematics(int roll, string studentName) : Marks(roll, studentName) {}

    // Function to get mathematics marks
    int getMathematicsMarks() {
        return marks;
    }
};

int main() {
    int numStudents;
    cout << "Enter the number of students: ";
    cin >> numStudents;

    // Dynamically allocate arrays for each subject
    Physics* physics = new Physics[numStudents];
    Chemistry* chemistry = new Chemistry[numStudents];
    Mathematics* mathematics = new Mathematics[numStudents];

    // Generate roll numbers automatically and set marks for each student
    for (int i = 0; i < numStudents; i++) {
        physics[i] = Physics(i + 1, "Student" + to_string(i + 1));
        chemistry[i] = Chemistry(i + 1, "Student" + to_string(i + 1));
        mathematics[i] = Mathematics(i + 1, "Student" + to_string(i + 1));

        int physicsMarks, chemistryMarks, mathematicsMarks;
        cout << "Enter marks for Student " << i + 1 << " (Physics Chemistry Mathematics): ";
        cin >> physicsMarks >> chemistryMarks >> mathematicsMarks;

        physics[i].setMarks(physicsMarks);
        chemistry[i].setMarks(chemistryMarks);
        mathematics[i].setMarks(mathematicsMarks);
    }

    // Calculate average marks for each subject
    double avgPhysics = 0, avgChemistry = 0, avgMathematics = 0;
    for (int i = 0; i < numStudents; i++) {
        avgPhysics += physics[i].getPhysicsMarks();
        avgChemistry += chemistry[i].getChemistryMarks();
        avgMathematics += mathematics[i].getMathematicsMarks();
    }
    avgPhysics /= numStudents;
    avgChemistry /= numStudents;
    avgMathematics /= numStudents;

    // Display average marks
    cout << "Average Marks in Physics: " << avgPhysics << endl;
    cout << "Average Marks in Chemistry: " << avgChemistry << endl;
    cout << "Average Marks in Mathematics: " << avgMathematics << endl;

    // Deallocate memory
    delete[] physics;
    delete[] chemistry;
    delete[] mathematics;

    return 0;
}
