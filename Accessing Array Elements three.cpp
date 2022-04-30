// This program reads data from a file into an array. 
#include <iostream> 
#include <fstream> 
using namespace std;

int main()
{
	const int ARRAY_SIZE = 10; // Array size 
	int numbers[ARRAY_SIZE]; // Array with 10 elements 
	int count = 0; // Loop counter variable 
	ifstream inputFile; // Input file stream object 

	// Open the file. 
	inputFile.open("TenNumbers.txt");
	for (count = 1; count <= ARRAY_SIZE; count++)
	{
		cout << "Enter the hours worked by employee "
			<< count << ": ";
		cin >> numbers [count - 1];
	}

	//In this code the cin statement uses the expression count − 1 as a subscript.

		// Read the numbers from the file into the array. 
		while (count < ARRAY_SIZE && inputFile >> numbers[count])
			count++;

	// Close the file. 
	inputFile.close();

	// Display the numbers read: 
	cout << "The numbers are: ";
	for (count = 0; count < ARRAY_SIZE; count++)
		cout << numbers[count] << " ";
	cout << endl;
	return 0;
}
