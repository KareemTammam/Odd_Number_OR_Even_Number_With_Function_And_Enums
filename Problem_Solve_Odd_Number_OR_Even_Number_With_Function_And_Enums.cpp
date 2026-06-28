#include <iostream>
#include<string>

using namespace std;

enum enNumberType { Odd = 1, Even = 2 };

int ReadNumber()
{
	int Number;

	cout << "Enter The Number : ";
	cin >> Number;

	return Number;
}

enNumberType CheckNumberType(int Number)
{
	
	if (Number % 2 == 0)
		return enNumberType::Even;
	else
		return enNumberType::Odd;
}

void PrintNumberType(enNumberType NumberType)
{
	cout << endl;

	if (NumberType == enNumberType::Even)
		cout << " Even Number " << endl;
	else
		cout << "Odd Number " << endl;
}

int main()
{

	enNumberType NumberType;

	PrintNumberType(CheckNumberType(ReadNumber()));
}