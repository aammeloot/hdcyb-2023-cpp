#include <iostream>

using namespace std;

// Function in CPP - Define return type
unsigned long long int powerOf2(int exponent)
{
	unsigned long long result = 1;
	
	for (int i = 0; i < exponent; i++)
	{
		result *= 2;
	}

	return result;
}

int main()
{
	// A sage asks a king for payment
	// 1 grain of rice for the first square of a chessboard
	// Then double for every square on the chessboard
	// Effectively 8x8 squares = 64 squares

	// Need large unsigned 64-bit number as total is effectively
	// 64 binary 1s
	unsigned long long int accumulated = 0;

	// Repeat 64 times
	for (int counter = 0; counter < 64; counter++)
	{
		// Every instance of the loop
		// We need to calculate 2^i 
		
		accumulated += powerOf2(counter);

		cout << "Square number: " << counter + 1 << endl;
		cout << "2 exp " << counter << endl;
		cout << "Current value: " << powerOf2(counter) << endl;
		cout << "Accumulation: " << accumulated << endl << endl;
	}

	

	return 0;
}