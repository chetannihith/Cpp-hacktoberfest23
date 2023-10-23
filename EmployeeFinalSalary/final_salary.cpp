#include <iostream>
using namespace std;

class Employee {        // The class
  public:
    int AddSal(int salary){
        if (salary < 500){
            return salary + 10;
        }
        return salary;
    }

    int AddWork(int salary, int workHours){
        int added_salary = AddSal(salary);
        if (workHours > 6){
            return added_salary + 5;
        }else{
            return added_salary;
        }

    }

    void getInfo(int salary, int workHours){
        cout << "Final Salary: " << AddWork(salary, workHours) << endl;
    }

};

int main() {
  Employee myObj;     // Create an object of MyClass
  myObj.getInfo(550, 7);  // Call the method
  return 0;
}