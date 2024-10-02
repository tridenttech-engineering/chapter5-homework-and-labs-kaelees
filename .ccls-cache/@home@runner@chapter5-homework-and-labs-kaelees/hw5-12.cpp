//hw5-12.cpp - displays the total owed
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

	const double DISCOUNT_RATE = 0.5;
	double item1 = 0.0;
	double item2 = 0.0;
	double amtOwed = 0.0;

	cout << "Price of item 1: ";
	cin >> item1;
	cout << "Price of item 2: ";
	cin >> item2;

	if (item1 < item2)
		item1 -= item1 * DISCOUNT_RATE;
	else
		item2 -= item2 * DISCOUNT_RATE;
	//end if

	amtOwed = item1 + item2;

	cout << "Amout owed after discount applyed: " << amtOwed << endl;
	
	return 0;
}	//end of main function