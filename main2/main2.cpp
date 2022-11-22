#include <Windows.h>
#include <tchar.h>
#include <iostream>
using namespace std;

typedef double (*FooPtr)(double a, double b);

int main() {
	while (1) {
		double a, b;
		char sign;

		HINSTANCE hLib = LoadLibrary(TEXT("DLL_Calc.dll"));
		if (hLib == NULL) {
			cout << "Cannot open 'DLL_Calc.dll'" << endl;
			return 0;
		}

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
		{
			FooPtr Plus = (FooPtr)GetProcAddress(hLib, "Plus");
			if (Plus == NULL) {
				cout << "Cannot load the function" << endl;
			}
			else {
				cout << Plus(a, b) << endl;
			}
			break;
		}
		case ('-'):
		{
			FooPtr Minus = (FooPtr)GetProcAddress(hLib, "Minus");
			if (Minus == NULL) {
				cout << "Cannot load the function" << endl;
			}
			else {
				cout << Minus(a, b) << endl;
			}
			break;
		}
		case ('*'):
		{
			FooPtr Mult = (FooPtr)GetProcAddress(hLib, "Mult");
			if (Mult == NULL) {
				cout << "Cannot load the function" << endl;
			}
			else {
				cout << Mult(a, b) << endl;
			}
			break;
		}
		case ('/'):
		{
			FooPtr Division = (FooPtr)GetProcAddress(hLib, "Division");
			if (Division == NULL) {
				cout << "Cannot load the function" << endl;
			}
			else {
				cout << Division(a, b) << endl;
			}
			break;
		}
		}

		cout << endl << endl
			<< "Exit? (+/-): ";
		cin >> sign;

		if (sign == '+')
		{
			break;
		}

		system("cls");
		FreeLibrary(hLib);
	}	
}