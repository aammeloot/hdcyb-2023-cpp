#include <iostream>

using namespace std;

int main()
{
	// The while loop - should be familiar

	string password = "password123"; // We're in cybersec
	string passInput;
	cout << "enter password: " << endl;
	cin >> passInput;

	// A while loop repeats for as a long as a condition
	// is true
	// In this case, the entire loop is skipped if the
	// password is correct

	while (passInput != password)
	{
		cout << "Wrong password, try again!" << endl;
		cin >> passInput;
	}

	// A variation on while is do..while
	// In this case you check the condition at the
	// end of the loop, meaning the loop will run its code
	// at least once

	cout << "And now for something completely different..." << endl;

	string inputWord;
	do
	{
		cout << "Type STOP to stop" << endl;
		cin >> inputWord;
	} while (inputWord != "STOP");

	// For loops
	// In this case you know the amount of repeats 
	// and want to keep track of them

	// for(declare counter; upper limit; increment)
	for (int counter = 0; counter < 10; counter++)
	{
		cout << "Hello this is a loop" << endl;
	}

	// Usual variations apply
	// instead of 10 you can have variable
	// You use -- as a decrement
	// You can increment/decrement by other values e.g counter+=2

	return 0;
}