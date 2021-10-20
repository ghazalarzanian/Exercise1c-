#include <iostream>
#include<math.h>
constexpr auto PI = 3.14159;
using namespace std;
int main()
{
	int num1=0,num2=0;
	float a=0, c=1;
	cout << "enter number one" << endl;
	cin >> num1;

	cout << "enter number two" << endl;
	cin >> num2;
	string result;
	cout << "enter the operation you want add/subtract/multiplication/division/radical/cos/cot/tan/factorial " << endl;
	cin >> result;
	if (result == "add")
	{
		cout << num1 + num2 << endl;

	}
	if (result == "subtract")
	{
		cout << num1 - num2 << endl;
	}
	if (result == "multiplication")
	{
		cout << num1 * num2;
	}
	if (result == "division")
	{
		cout << num1 / num2 << endl;

	}
	if (result == "radical")
	{
		cout << "number 1=" << sqrt(num1) << endl;
		cout << "number 2=" << sqrt(num2) << endl;
	}
	if (result == "cos")
	{
		cout << "enter degree:" << endl;
		cin >> a;
		c = (a * PI) / 180;
		cout << cos(c) << endl;
	}
	if(result=="cot")
	{
		cout << "enter degree:" << endl;
		cin >> a;
		c = (a * PI) / 180;
		cout << 1 / tan(c);

	}
	if (result == "tan")
	{
		cout << "enter degree:" << endl;
		cin >> a;
		c = (a * PI) / 180;
		cout << tan(c);

	}
	if (result == "factorial")
	{
		cout << "how many number of factorial?" << endl;
		cin >> a;
		for ( int i = 1; i <= a; i++)
		{
			c *= i;
		}
		cout << c;
	}

	system("pause");
	return 0;
}