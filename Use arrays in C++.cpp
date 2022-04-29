#include <iostream>
using namespace std;

int main()
{
	int i;

	int array[18] = { 0, 1, 0, 2, 1, 1, 4, 0, 0, 0, 3, 2, 1, 3, 0, 2, 2, 4 };

	for (int i = 0; i < 18; i++)
	{
		cout << array[i] << " ";
	}

	return 0;
}