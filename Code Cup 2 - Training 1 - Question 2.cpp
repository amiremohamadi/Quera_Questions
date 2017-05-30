#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

float BMI(float Weight,float Height) {
	float BMI = Weight / pow(Height, 2);
	return BMI;
}

string Status(float Weight, float Height) {
	float B = BMI(Weight, Height);
	string Status;
	if (B < 18.5)
		Status = "Underweight";
	else if (18.5 <= B && B < 25)
		Status = "Normal";
	else if (25 <= B && B < 30)
		Status = "Overweight";
	else
		Status = "Obese";
	return Status;
}

int main() {
	float Weight,Height;
	cin >> Weight >> Height;
	cout << fixed << setprecision(2) << BMI(Weight, Height) << Status(Weight, Height);
}
