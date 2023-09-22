#include "SimpleCalculator.h"


SimpleCalculator::SimpleCalculator()
{
	num1 = 0;
	num2 = 0;
	result = 0;
	operation = '\0';
}


SimpleCalculator::~SimpleCalculator()
{
	if (operation != '\0')
		operation = '\0';
}


void SimpleCalculator::InputNum()
{
	char check = '\0';
	std::cout << "\t\t\t\t\t\tSimple Calculator" << std::endl;
	while (1)
	{
		std::cout << "Enter first number: ";
		std::cin >> num1;

		while (1)
		{
			std::cout << "\nEnter an operation (+, -, *, /): ";
			std::cin >> operation;

			if (operation == '+' || operation == '-' || operation == '*' || operation == '/')
				break;
			else
				std::cout << "Please Enter only operations. Try Again!\n";
		}

		std::cout << "\nEnter second number: ";
		std::cin >> num2;
		
		if (operation == '+')
			Addition(num1, num2);
		else if (operation == '-')
			Subtraction(num1, num2);
		else if (operation == '*')
			Multiplication(num1, num2);
		else if (operation == '/')
			Division(num1, num2);

		std::cout << "\nDo you want to continue or stop using calculator\n";
		std::cout << "If continue using then Press (C or c). \nIf stop using then Press (S or s)\n";
		std::cout << "Enter your choice: ";
		std::cin >> check;

		if (check == 'C' || check == 'c')
			continue;
		if (check == 'S' || check == 's')
			break;
	}
	std::cout << "\t\t\t\tThank You for using this calculator\n";
}


void SimpleCalculator::Addition(double n1, double n2)
{
	result = n1 + n2;
	DisplayCal('+');
}


void SimpleCalculator::Subtraction(double n1, double n2)
{
	result = n1 - n2;
	DisplayCal('-');
}


void SimpleCalculator::Multiplication(double n1, double n2)
{
	result = n1 * n2;
	DisplayCal('*');
}


void SimpleCalculator::Division(double n1, double n2)
{
	result = n1 / n2;
	DisplayCal('/');
}


void SimpleCalculator::DisplayCal(char oper)
{
	
	std::cout << num1 << ' ' << oper << ' ' << num2 << " = " << result << std::endl;
	
}