#include <iostream>
using namespace std;

float calculateRegularEmployeeSalary(float basic, float hra, float da) {
    return basic + hra + (0.10 * da * basic);
}

float calculateDailyWageEmployeeSalary(float wagesPerHour, float numberOfHours) {
    return wagesPerHour * numberOfHours;
}

float calculateConsolidatedEmployeeSalary(float fixedAmount) {
    return fixedAmount;
}

int main() {
    string employeeType;
    
    cout << "Enter employee type (regular/daily/consolidated): ";
    cin >> employeeType;

    if (employeeType == "regular") {
        float basic, hra, da;
        cout << "Enter basic salary: ";
        cin >> basic;
        cout << "Enter HRA: ";
        cin >> hra;
        cout << "Enter DA: ";
        cin >> da;
        float grossSalary = calculateRegularEmployeeSalary(basic, hra, da);
        cout << "Gross Salary for regular employee: " << grossSalary << endl;
    } else if (employeeType == "daily") {
        float wagesPerHour, numberOfHours;
        cout << "Enter wages per hour: ";
        cin >> wagesPerHour;
        cout << "Enter number of hours worked: ";
        cin >> numberOfHours;
        float grossSalary = calculateDailyWageEmployeeSalary(wagesPerHour, numberOfHours);
        cout << "Gross Salary for daily wage employee: " << grossSalary << endl;
    } else if (employeeType == "consolidated") {
        float fixedAmount;
        cout << "Enter fixed amount: ";
        cin >> fixedAmount;
        float grossSalary = calculateConsolidatedEmployeeSalary(fixedAmount);
        cout << "Gross Salary for consolidated employee: " << grossSalary << endl;
    } else {
        cout << "Invalid employee type. Please enter 'regular', 'daily', or 'consolidated'." << endl;
    }

    return 0;
}
