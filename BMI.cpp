#include<iostream>
using namespace std;
int main()
{
	float height, weight;
	float BMI;
	cout << "Enter you height in Meters:" << endl;
	cin >> height;
	cout << "Enter you weight in Kilograms: " << endl;
	cin >> weight;
	BMI = weight / (height * height);
	if (BMI < 18.5) {
		cout << "underweight" << endl;
	}
	else if (18.5 < BMI && BMI < 24.9) {
		cout << "normal" << endl;
	}
	else if (25 < BMI&& BMI < 29.9) {
		cout << "overweight" << endl;
	}
	else if (30 < BMI &&BMI< 34.9) {
		cout << "obese" << endl;
	}
	else if (BMI > 35) {
		cout << "extermely obese" << endl;
	}
	system("pause");
	return 0;
}