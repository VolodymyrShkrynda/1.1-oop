#include <iostream>
#include "FloatPower.h"
#include <Windows.h>
using namespace std;
FloatPower makeFloatPower(double first, double second)
{
	FloatPower a;
	if (!a.Init(first,second))
		cout << "Невірні данні!" << endl;
	return a;
}
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double result1, result2;

	FloatPower z;
	z.Read();
	z.Display();
	result1 = z.power();
	cout << "Результат - " << result1 << endl;


	double x, y;

	FloatPower a;
	cout << endl;
	cout << "First = "; cin >> x;
	cout << "Second = "; cin >> y;
	a = makeFloatPower(x, y);
	a.Display();
	result2 = a.power();
	cout << "Результат - " << result2 << endl;

	cin.get();
	return 0;

}