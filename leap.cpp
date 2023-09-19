#include <iostream>

using namespace std;

int main()
{
	int year;
	bool leap = false;

	cout << "What year is it?" << endl;
	cin >> year;

	if (year % 4 == 0)
	{
		leap = true;
		if (year % 100 == 0)
		{
			leap = false;
			if (year % 400 == 0) {
				leap = true;
			}
		}
	}


	if (leap)
	{
		cout << "is a leap year" << endl;
	}
	else
	{
		cout << "is not a leap year" << endl;
	}


	return 0;
}