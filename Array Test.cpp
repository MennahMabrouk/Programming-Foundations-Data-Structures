#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	int tests[5] = {1,2,3,4,5};

	tests[0] = 79;
	cout << "frist element: "<<tests[0] << "\n" << "fifth element: "<<tests[4] << "\n";
    
	tests[4] = tests[0] + tests[1];
	cout <<"change fifth element: "<<tests[4]<<"\n";

	cout << "\n"<< "print array" <<"\n";
	for (int i = 0; i < 5; i++)
	cout << tests[i] << " ";


}
