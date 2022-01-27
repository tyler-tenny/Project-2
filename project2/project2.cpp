#include <iostream> 
#include <iomanip>

using namespace std;

void DisplayMenu()
{
	cout << "Welcome! \n Please select an option from the menu below. \n\n"; 
	cout << "(1) IsPosNeg: Tests a number on whether it is positive or negative.";
	cout << "\n(2) IsOddEven: Tests a number on whether it is odd or even";
	cout << "\n(3) FindNumDigits: Finds the number of digits in a number";
	cout << "\n(4) FindDigitAtPosition: Finds the specified digit in a number";
	cout << "\n(5) DisplayAdditionTable: Displays the addition table for a specified number from 1-10";
	cout << "\n(6) DisplayMultiplicationTable: Displays the multiplication table for a specified number from 1-10\n";
}

int ProcessMenuChoice(int Selection)
{
	//Collect menu choice
	cin >> Selection;
	return Selection;
}

int IsPosNeg()
{

}

int main()
{
	DisplayMenu();
	int Selection = 0;
	return ProcessMenuChoice(Selection);
}