#include "FloatPower.h"
#include <iostream>
#include <cmath>
#include <chrono>
using namespace std;

bool FloatPower::Init(double x, double y)
{
    if (x > 0)
    {
        first = x;
        second = y;
        return true;
    }
    else
    {
        return false;
    }
}
void FloatPower::Display() const
{
    cout << endl;
    cout << "First = " << GetFirst() << endl;
    cout << "Second = " << GetSecond() << endl;
}
void FloatPower::Read()
{
    double first, second;

    do
    {
        cout << "First = "; cin >> first;
        cout << "Second = "; cin >> second;
    } while (!Init(first, second));
}
double  FloatPower::power() const
{
    return pow(first, second);
}