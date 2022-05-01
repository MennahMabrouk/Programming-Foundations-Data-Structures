/*/
7.7 The following program skeleton contains a 20-element array of int s called fish. 
When completed, the program should ask how many fish were caught by fishermen 1 through 20, and store this data in the array. Complete the program. 
#include <iostream> 
using namespace std; 
int main() 
 { 
 const int NUM_FISH = 20; 
 int fish[NUM_FISH]; 
 // You must finish this program. It should ask how 
 // many fish were caught by fishermen 1-20, and 
 // store this data in the array fish. 
 return 0; 
 } 
 /*/

#include <iostream> 
using namespace std;

int main()
{
	const int NUM_FISH = 20;
	int fish[NUM_FISH];
	int count;

	for (count = 0; count < NUM_FISH; count++)
	{
		cout << " Number Of Fishes "
			<< (count + 1) << ": ";
		cin >> fish[count];
	}

	// Display the contents of the array
	cout << "The number of fishes you entered are:";
	for (count = 0; count < NUM_FISH; count++)
		cout << " " << fish[count];
	cout << endl;
	return 0;
}
