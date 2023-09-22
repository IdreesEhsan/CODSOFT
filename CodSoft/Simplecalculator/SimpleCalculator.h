#pragma once
#include<iostream>

class SimpleCalculator
{
	double num1;
	double num2;
	double result;
	char operation;
public:
	SimpleCalculator();
	void InputNum();
	void Addition(double n1, double n2);
	void Subtraction(double n1, double n2);
	void Multiplication(double n1, double n2);
	void Division(double n1, double n2);
	void DisplayCal(char oper);
	~SimpleCalculator();
};

