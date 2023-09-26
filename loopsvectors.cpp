/* - Write a C++ program that asks the user to enter 5 positive integers in order to process count, maximum, minimum. Display all the numbers entered. (Uses arrays or vectors)
- How can you find the minimum and the maximum?
*/

#include <iostream>
#include <vector>

using namespace std;

int find_max(const vector<int>& a) // Constant ref - useful for ro objects
{
	// Minimum is first element
	int maximum = a[0];

	for (int index = 1; index < a.size(); index++)
	{
		if (maximum < a[index])
		{
			maximum = a[index];
		}
	}
	return maximum;
}

int find_min(const vector<int>& a) // Constant ref - useful for ro objects
{
	// Minimum is first element
	int minimum = a[0];

	for (int index = 1; index < a.size(); index++)
	{
		if (minimum > a[index])
		{
			minimum = a[index];
		}
	}
	return minimum;
}


int main()
{
	// Use a vector, it is more flexible
	vector<int> array;

	int input;
	do
	{
		cout << "enter a number (-1 to stop)" << endl;
		cin >> input;
		array.push_back(input);
	} while (input != -1);
	array.pop_back(); // Last element removed

	// Display all the numbers
	for (int i = 0; i < array.size(); i++)
	{
		cout << array[i] << "  ";
	}
	cout << endl;
	cout << "Count: " << array.size() << endl;
	cout << "Minimum: " << find_min(array) << endl;
	cout << "Maximum: " << find_max(array) << endl;

	return 0;
}
