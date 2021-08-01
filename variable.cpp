// Camelcase that is start a variable name with small letter and next word of variable should be startwith Capital letter

#include <iostream>
using namespace std;

int main()
{
	int yearOfBirth = 1984;
	char gender = 'f';
	bool mind = true;
	float averagegrade = 2.5;

	cout << "size of integer is " << sizeof(int) << "byte" << endl;
	cout << "int minimum value" << INT_MIN << endl;
	cout << " maximum value" << INT_MAX << endl;

	cout << "my date of birth  is: " << yearOfBirth << endl;
	cout << "my gender is" << gender << endl;
	cout << "I am positive minded person" << mind << endl;
	cout << "my average grade of HIS :" << averagegrade << endl;

	system("pause > 0");
}
