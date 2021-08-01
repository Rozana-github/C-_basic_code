#include <iostream>
using namespace std;

int main()
{
	float annualSalary;
	cout << "give your annualsalary salary:";
	cin >> annualSalary;
	float monthlySalary;

	monthlySalary = annualSalary / 12;
	cout << " monthly salary:" << monthlySalary << endl;
	cout << "10 years salary :" << annualSalary * 10 << endl;
	system("pause>0");
}
