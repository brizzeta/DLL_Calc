#pragma once
#pragma comment(lib, "DLL_Calc")
#include "../DLL_Calc/MyLibrary.h"
#include <iostream>
using namespace std;

int main() {
	while (1) {
		double a, b;
		char sign;
		cout << "CALCULATOR" << endl << endl
			<< "Enter a first number: ";
		cin >> a;
		cout << endl << "Enter a second number: ";
		cin >> b;
		cout << endl << "Enter a sign: ";
		cin >> sign;
		cout << endl << "Result: ";

		switch (sign)
		{
		case ('+'):
			cout << Plus(a, b);
			break;
		case ('-'):
			cout << Minus(a, b);
			break;
		case ('*'):
			cout << Mult(a, b);
			break;
		case ('/'):
			cout << Division(a, b);
			break;
		}

		cout << endl << endl 
			<< "Exit? (+/-): ";
		cin >> sign;

		if (sign == '+')
		{
			break;
		}

		system("cls");
	}
}