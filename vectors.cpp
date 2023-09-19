#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	// A but like lists, but a single type
	// (So more like a convenience)

	// Create an array of strings;
	vector<string> students;

	string name;
	do
	{
		cout << "Enter a name" << endl;
		cin >> name;
		students.push_back(name);
	} while (name != "stop");

	students.pop_back();

	for (int index = 0; index < students.size(); index++)
	{
		cout << students[index] << endl;
	}

	return 0;
}