#include <iostream>

using namespace std;

int main()
{
	// Create the age as a float variable
	float age = 0.0;
	cout << "Enter your age on Earth: ";
	cin >> age; // Expects a number, no safeguard

	cout << "Your age on Mercury: " << age / 0.24 << endl;
	cout << "Your age on Venus: " << age / 0.61 << endl;
	cout << "Your age on Mars: " << age / 1.88 << endl;
	cout << "Your age on Jupiter: " << age / 11.86 << endl;
	cout << "Your age on Saturn: " << age / 29.45 << endl;
	cout << "Your age on Uranus: " << age / 84.02 << endl;
	cout << "Your age on Neptune: " << age / 164.79 << endl;
	
	return 0;
}