#define MyDll_API extern "C" __declspec(dllexport)
#include "MyLibrary.h"

MyDll_API double Plus(double a, double b)
{
	return a + b;
}
MyDll_API double Minus(double a, double b)
{
	return a - b;
}
MyDll_API double Mult(double a, double b)
{
	return a * b;
}
MyDll_API double Division(double a, double b)
{
	return a / b;
}