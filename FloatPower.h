#pragma once
class FloatPower
{
    double first, second;
public:
    double GetFirst() const { return first; }
    double GetSecond() const { return second; }
    void SetFirst(double value) { first = value; }
    void SetSecond(double value) { second = value; }

    bool Init(double, double);
    void Read();
    void Display() const;

    double power() const;
};

