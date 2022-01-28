#include <iostream> 
#include <iomanip>

using namespace std;
void DisplayMenu();
void ProcessMenuChoice(int&);
int GetData(int userint = 0);
int IsPosNeg(int userint = 0);

int main()
{
	//Show options//
	DisplayMenu();
	//Collect selected option//
	int Selection = 0;
	ProcessMenuChoice(Selection);

	//Switch for the options//

	switch (Selection)
	{
	case 1:
		IsPosNeg();
		break;
	/*case 2:*/
	}
	return Selection;
}
//Complete
void DisplayMenu()
{
	cout << "Welcome! \n Please select an option from the menu below. \n\n"; 
	cout << "(1) IsPosNeg: Tests a number on whether it is positive or negative.";
	cout << "\n\n(2) IsOddEven: Tests a number on whether it is odd or even";
	cout << "\n\n(3) FindNumDigits: Finds the number of digits in a number";
	cout << "\n\n(4) FindDigitAtPosition: Finds the specified digit in a number";
	cout << "\n\n(5) DisplayAdditionTable: Displays the addition table for a specified number from 1-10";
	cout << "\n\n(6) DisplayMultiplicationTable: Displays the multiplication table for a specified number from 1-10\n\n";
}
//Complete
void ProcessMenuChoice(int& Selection)
{
	//Collect menu choice//
	cin >> Selection;
}
//IsPosNeg is complete in call by value form//
int IsPosNeg(int userint)
{
	userint = GetData(userint);
	if (userint > 0)
		cout << userint << " is POSITIVE." << endl;
	if (userint == 0)
		cout << userint << " is ZERO." << endl;
	if (userint < 0)
		cout << userint << " is NEGATIVE." << endl;
	return 0;
}


//GetData is complete in call by value form//
int GetData(int userint)
{
	cout << "Please enter an integer between one million and negative one million." << endl;
	cin >> userint;
	while (userint > 1000000 || userint < -1000000)
	{
		cout << "ERROR; Please enter an integer between one million and negative one million." << endl;
		cin >> userint;
	}
	return userint;
}