#pragma once
#ifndef MyDll_API
#define MyDll_API extern "C" __declspec(dllimport)
#endif

MyDll_API double Plus(double a, double b);
MyDll_API double Minus(double a, double b);
MyDll_API double Mult(double a, double b);
MyDll_API double Division(double a, double b);