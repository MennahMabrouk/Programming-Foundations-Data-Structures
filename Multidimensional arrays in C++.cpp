#include <iostream>
#include <stdio.h>
#include<string>
using namespace std;

int main()
{
	string dinnerChoices[2][3] = { {"Salad", "Soup", "Cheese Plate"},
				      {"Chicken", "Salmon", "Lasagna"} };
	cout << dinnerChoices[0][0]<<"\n"<< dinnerChoices[0][1] << "\n"<<dinnerChoices[1][2]<<"\n" << "\n";

	for (int i = 0; i < 4; i++)
		for (int j=0; j<3; j++)
		cout << dinnerChoices[i][j] << "\n";

	return 0;


}
