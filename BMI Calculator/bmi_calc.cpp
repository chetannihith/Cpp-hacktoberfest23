#include <iostream>
#include <iomanip>
using namespace std;

void calculate_bmi();

void calculate_bmi() {
	double height_in_cms;
	double weight_in_kgs;
	double bmi;
	cout << "Height in cms: ";
	cin >> height_in_cms;
	cout << "Weight in kgs: ";
	cin >> weight_in_kgs;
	bmi = weight_in_kgs * 1e4 / (height_in_cms * height_in_cms);
	cout << "BMI: " << fixed << setprecision(2) << bmi << " kg/m2" << endl;
	cout << "Status: ";
	if (bmi <= 18.4) cout << "Underweight";
	else if (bmi <= 24.9) cout << "Normal";
	else if (bmi <= 29.9) cout << "Overweight";
	else cout << "Obese";
	cout << endl;
}

int main() {
	calculate_bmi();
	return 0;
}
