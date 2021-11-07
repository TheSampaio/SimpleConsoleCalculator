#include <iostream>

#include "Application.h" // Including the defined Application class
#include "Windows.h"	 // Including this to use "Sleep" function

Application::Application() // Initialize all main variables
{
	operation = 0;
	number01 = 0.0f;
	number02 = 0.0f;
	result = 0.0f;
}

void Application::ShowMenu() // Show application's menu
{
	std::cout << "---------------------------------" << std::endl;
	std::cout << " Simple Calculator | C++ Edition " << std::endl;
	std::cout << "---------------------------------" << std::endl << std::endl;
}

void Application::ShowOptions() // Show application's options
{
	std::cout << "1 - Sum" << std::endl;
	std::cout << "2 - Subtraction" << std::endl;
	std::cout << "3 - Multiply" << std::endl;
	std::cout << "4 - Divide" << std::endl << std::endl;
}

void Application::Calculate(float number01, float number02) // Process user's option and do all math operations
{
	std::cout << std::endl << "Insert an option bellow:" << std::endl << std::endl;

	ShowOptions();

	std::cout << "Option: ";
	std::cin >> operation;

	switch (operation)
	{
	case 1: result = (number01 + number02);
		std::cout << std::endl << "The sum between ", number01;
		std::cout << "and", number02;
		std::cout << " is: ";
		std::cout << result << std::endl;
		break;

	case 2: result = (number01 - number02);
		std::cout << std::endl << "The subtraction between ", number01;
		std::cout << "and", number02;
		std::cout << " is: ";
		std::cout << result << std::endl;
		break;

	case 3: result = (number01 * number02);
		std::cout << std::endl << "The multiply between ", number01;
		std::cout << "and", number02;
		std::cout << " is: ";
		std::cout << result << std::endl;
		break;

	case 4: result = (number01 / number02);
		std::cout << std::endl << "The division between ", number01;
		std::cout << "and", number02;
		std::cout << " is: ";
		std::cout << result << std::endl;
		break;

	default: std::cout << std::endl << "Ivalid operation!"; break;
	}
}

void Application::Run() // Run the application
{
	while (true)
	{
		ShowMenu();

		std::cout << "Choose the first number: ";
		number01 = GetFloatNumber();

		std::cout << "Choose the second number: ";
		number02 = GetFloatNumber();

		Calculate(number01, number02);
		Sleep(3000);
		system("cls");
	}
}

float Application::GetFloatNumber() // Get a float user's input
{
	float number;
	std:: cin >> number;
	return number;
}