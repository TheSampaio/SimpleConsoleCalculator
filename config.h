#pragma once
#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

class Calculator
{

	void menu()
	{
		cout << "-------------------" << endl;
		cout << " Simple Calculator " << endl;
		cout << "-------------------" << endl << endl;
	}

	void showOptions()
	{
		cout << "1 - Sum" << endl;
		cout << "2 - Subtraction" << endl;
		cout << "3 - Multiply" << endl;
		cout << "4 - Divide" << endl << endl;
	}

	float getFloatNumber()
	{
		int number;
		cin >> number;
		return number;
	}

	void calculate(float number01, float number02)
	{
		int operation;

		cout << endl << "Insert an option bellow:" << endl << endl;

		this->showOptions();

		cout << "Option: ";
		cin >> operation;
		float result;

		switch (operation)
		{
		case 1: result = number01 + number02;
			cout << endl << "The sum between ", number01;
			cout << "and", number02;
			cout << " is: ";
			cout << result << endl;
			break;

		case 2: result = number01 - number02;
			cout << endl << "The subtraction between ", number01;
			cout << "and", number02;
			cout << " is: ";
			cout << result << endl;
			break;

		case 3: result = number01 * number02;
			cout << endl << "The multiply between ", number01;
			cout << "and", number02;
			cout << " is: ";
			cout << result << endl;
			break;

		case 4: result = number01 / number02;
			cout << endl << "The division between ", number01;
			cout << "and", number02;
			cout << " is: ";
			cout << result << endl;
			break;

		default: cout << "Ivalid operation!"; break;
		}
	}

public:

	void run()
	{
		while (true)
		{
			this->menu();

			cout << "Choose a number: ";
			int number01 = getFloatNumber();

			cout << "Choose other number: ";
			int number02 = getFloatNumber();

			this->calculate(number01, number02);
			system("pause>0");
			system("cls");
		}
	}

};