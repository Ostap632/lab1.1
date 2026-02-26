#include "Point1.1.h"
#include <iostream>
#include <cmath>

using namespace std;

bool Point::SetFirst(double value) {
    if (abs(value) <= 100) {
        first = value;
        return true;
    }
    else {
        return false;
    }
}

bool Point::SetSecond(double value) {
    if (abs(value) <= 100) {
        second = value;
        return true;
    }
    else {
        return false;
    }
}

bool Point::Init(double x, double y) {
    if (SetFirst(x) && SetSecond(y)) {
        return true;
    }
    return false;
}

void Point::Read() {
    double x, y;
    bool result;
    do {
        cout << "Enter coordinates (from -100 to 100):" << endl;
        cout << " x = "; cin >> x;
        cout << " y = "; cin >> y;
        result = Init(x, y);
        if (!result) {
            cout << "Error! Coordinates exceed 100 by module. Try again." << endl;
        }
    } while (!result);
}

void Point::Display() const {
    cout << "Point: (" << first << ", " << second << ")" << endl;
}

double Point::Distance() const {
    return sqrt(pow(first, 2) + pow(second, 2));
}