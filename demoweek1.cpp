#include <iostream>

using namespace std;

int main()
{
	// Create the variables
	// Declare them
	string name;
	int age;
	char initial = 'a';

	cout << "Hello, World etc...\n";
	cout << "this is another" << endl;

	// Ask the name	
	cout << "What is your name?  ";
	cin >> name;

	cout << "How old are you?  ";
	cin >> age;

	cout << "Hello, " << name << " your age is " << age << endl;

	if (age >= 18)
	{
		cout << "Have a pint" << endl;
	}
	else
	{
		cout << "Have a diet coke" << endl;
	}

	return 0;
}