#include <iostream> 
#include <iomanip>

using namespace std;
void DisplayMenu();
void ProcessMenuChoice(int&);
void GetData(int&);
int IsPosNeg(int userint = 0);
int IsOddEven(int x = 0);
int FindNumDigits(int userint = 0);
int FindDigitAtPosition(int userint = 0);
//Main function - by Tyler
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
	case 2:
		IsOddEven();
		break;
	case 3:
		FindNumDigits();
		break;
	case 4:
		FindDigitAtPosition();
		break;
	default:
		return 0;
	}
}
//Complete - by Tyler
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
//Complete in call by reference form - by Tyler
void ProcessMenuChoice(int& Selection)
{
	//Collect menu choice//
	cin >> Selection;
}
//IsPosNeg is complete in call by value form - by Tyler//
int IsPosNeg(int userint)
{
	GetData(userint);
	if (userint > 0)
		cout << userint << " is POSITIVE." << endl;
	if (userint == 0)
		cout << userint << " is ZERO." << endl;
	if (userint < 0)
		cout << userint << " is NEGATIVE." << endl;
	return 0;
}
//IsOddEven complete in call by value form - by Christian
int IsOddEven(int x)
{
	GetData(x);
	if (x % 2 == 0)
		cout << x << " is even.";
	else
		cout << x << " is odd.";
	return 0;
}
//FindNumDigits complete in call by value form - by Tyler//
int FindNumDigits(int userint)
{
	GetData(userint);
	int inttemp = userint;
	int digits = 0;
	if (inttemp < 0)
		inttemp *= -1;
	while (inttemp > 0)
	{
		inttemp/=10;
		digits++;
	}
	if (digits == 1)
		cout << userint << " has " << digits << " digit in it.";
	else
		cout << userint << " has " << digits << " digits in it.";
	return 0;
}
//Complete in call by value form - By Tyler
int FindDigitAtPosition(int userint)
{
	GetData(userint);
	int temp = userint;
	cout << "Please enter a position number (1 is the ones place, 2 is the tens place, etc.): ";
	int pos;
	cin >> pos;
	if (pos < 1)
	{
		cout << endl << "Please enter a positive non-zero integer for position number: ";
		cin >> pos;
	}
	int exp = 1;
	//divide by 10 until desired digit is least significant digit
	while (exp < pos)
	{
		temp /= 10;
		exp++;
	}
	//modulus by until number is one digit
	if (temp < 10)
	{
		cout << "The digit at position " << pos << " is " << temp << "." << endl;
	}
	while (temp >= 10)
		temp %= 10;
	cout << "The digit at position " << pos << " is " << temp << "." << endl;
	return 0;
}

//GetData is complete in call by reference form - by Tyler//
void GetData(int& userint)
{
	cout << "Please enter an integer between one million and negative one million." << endl;
	cin >> userint;
	while (userint > 1000000 || userint < -1000000)
	{
		cout << "ERROR; Please enter an integer between one million and negative one million." << endl;
		cin >> userint;
	}
}