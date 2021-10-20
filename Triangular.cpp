#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
	cout << "Enter 3 number :" << endl;
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a)
	{
		cout << "You can make a triangular with these 3 numbers " << endl;
	}
	else cout << "You can not make triangular with these 3 numbers" << endl;

	system("pause");
	return 0;
}