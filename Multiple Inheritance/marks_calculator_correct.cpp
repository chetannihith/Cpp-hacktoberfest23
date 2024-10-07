// We want to calculate the total marks of each student of a class in Physics, Chemistry, and Mathematics and the average marks of the class.
// The number of students in the class is entered by the user.
// Create a class named Marks with data members for roll number, name, and marks. Create three other classes inheriting the Marks class, namely Physics, Chemistry, and Mathematics, which are used to define marks in the individual subjects of each student.
// The roll number of each student will be generated automatically.
#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Base class Marks
class Marks {
protected:
    int rollNumber; // Roll number of the student
    string name;    // Name of the student

public:
    // Constructor to initialize rollNumber and name
    Marks(int roll, const string& studentName) : rollNumber(roll), name(studentName) {}

    // Pure virtual function to get marks (to be implemented in derived classes)
    virtual int getMarks() const = 0;

    // Function to get roll number
    int getRollNumber() const { return rollNumber; }

    // Function to get student name
    string getName() const { return name; }
};

// Derived class Physics
class Physics : public Marks {
private:
    int physicsMarks; // Marks for Physics

public:
    // Constructor to initialize rollNumber, name, and physicsMarks
    Physics(int roll, const string& studentName) : Marks(roll, studentName), physicsMarks(0) {}

    // Function to set physics marks
    void setMarks(int marks) { physicsMarks = marks; }

    // Override getMarks function
    int getMarks() const override { return physicsMarks; }
};

// Derived class Chemistry
class Chemistry : public Marks {
private:
    int chemistryMarks; // Marks for Chemistry

public:
    // Constructor to initialize rollNumber, name, and chemistryMarks
    Chemistry(int roll, const string& studentName) : Marks(roll, studentName), chemistryMarks(0) {}

    // Function to set chemistry marks
    void setMarks(int marks) { chemistryMarks = marks; }

    // Override getMarks function
    int getMarks() const override { return chemistryMarks; }
};

// Derived class Mathematics
class Mathematics : public Marks {
private:
    int mathematicsMarks; // Marks for Mathematics

public:
    // Constructor to initialize rollNumber, name, and mathematicsMarks
    Mathematics(int roll, const string& studentName) : Marks(roll, studentName), mathematicsMarks(0) {}

    // Function to set mathematics marks
    void setMarks(int marks) { mathematicsMarks = marks; }

    // Override getMarks function
    int getMarks() const override { return mathematicsMarks; }
};

int main() {
    int numStudents;
    cout << "Enter the number of students: ";
    cin >> numStudents;

    // Vectors to store the marks for each subject
    vector<Physics> physicsStudents;
    vector<Chemistry> chemistryStudents;
    vector<Mathematics> mathematicsStudents;

    // Generate roll numbers automatically and set marks for each student
    for (int i = 0; i < numStudents; i++) {
        string studentName = "Student" + to_string(i + 1);
        
        // Create instances of each subject for the student with automatic roll number
        Physics physics(i + 1, studentName);   // Roll number = i + 1
        Chemistry chemistry(i + 1, studentName); // Roll number = i + 1
        Mathematics mathematics(i + 1, studentName); // Roll number = i + 1

        int physicsMarks, chemistryMarks, mathematicsMarks;

        cout << "Enter marks for " << studentName << " (Physics Chemistry Mathematics): ";
        cin >> physicsMarks >> chemistryMarks >> mathematicsMarks;

        // Set marks for each subject
        physics.setMarks(physicsMarks);
        chemistry.setMarks(chemistryMarks);
        mathematics.setMarks(mathematicsMarks);

        // Store the students in vectors
        physicsStudents.push_back(physics);
        chemistryStudents.push_back(chemistry);
        mathematicsStudents.push_back(mathematics);
    }

    // Calculate average marks for each subject
    double avgPhysics = 0, avgChemistry = 0, avgMathematics = 0;
    for (int i = 0; i < numStudents; i++) {
        avgPhysics += physicsStudents[i].getMarks();
        avgChemistry += chemistryStudents[i].getMarks();
        avgMathematics += mathematicsStudents[i].getMarks();
    }
    
    avgPhysics /= numStudents;
    avgChemistry /= numStudents;
    avgMathematics /= numStudents;

    // Display average marks
    cout << "\nAverage Marks in Physics: " << avgPhysics << endl;
    cout << "Average Marks in Chemistry: " << avgChemistry << endl;
    cout << "Average Marks in Mathematics: " << avgMathematics << endl;

    // Display each student's roll number and their marks
    cout << "\nStudent Marks Details:\n";
    cout << "Roll Number\tName\t\tPhysics\tChemistry\tMathematics\n";
    for (int i = 0; i < numStudents; i++) {
        cout << physicsStudents[i].getRollNumber() << "\t\t"
             << physicsStudents[i].getName() << "\t"
             << physicsStudents[i].getMarks() << "\t"
             << chemistryStudents[i].getMarks() << "\t"
             << mathematicsStudents[i].getMarks() << endl;
    }

    return 0;
}