#ifndef APPLICATION_CLASS_H // If not defined class
#define APPLICATION_CLASS_H	// Define Application class bellow

class Application
{
public:
	Application(); // Defining constructor

	// Defining main variables
	int operation;
	float number01;
	float number02;
	float result;

	// Defining all modules
	void ShowMenu();
	void ShowOptions();
	void Calculate(float number01, float number02);
	void Run();
	float GetFloatNumber();
};

#endif // !APPLICATION_CLASS_H

