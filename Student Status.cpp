#include <iostream>
using namespace std;
int main()
{
	string name, family;
	int score1, score2, score3, avg;
	cout << "Enter name" << endl;
	cin >> name;
	cout << "Enter last name:" << endl;
	cin >> family;
	cout << "Enter score 1:" << endl;
	cin >> score1;
	cout << "Enter score 2:" << endl;
	cin >> score2;
	cout << "Enter score 3:" << endl;
	cin >> score3;
	avg = (score1 + score2 + score3) / 3;
	if (avg >= 17)
		cout << name << " " << family << "is Great"<<endl;
	if (12 <= avg && avg < 17)
		cout << name << " " << family << "is Normal"<<endl;
	if (avg < 12)
		cout << name<<" "<<family <<"is Failed"<<endl;
	system("pause");
	return 0;
}