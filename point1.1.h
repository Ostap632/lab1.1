#pragma once

class Point {
private:
    double first;
    double second;

public:
    bool SetFirst(double value);
    bool SetSecond(double value);

    double GetFirst() const { return first; }
    double GetSecond() const { return second; }

    bool Init(double x, double y);
    void Read();
    void Display() const;
    double Distance() const;
};