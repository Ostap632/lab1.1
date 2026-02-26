#include <iostream>
#include "Point1.1.h"

using namespace std;

int main() {
    Point p;

    p.Read();
    p.Display();
    cout << "Distance to origin: " << p.Distance() << endl;

    return 0;
}