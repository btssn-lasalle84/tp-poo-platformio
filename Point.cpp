#include "Point.h"
#include <iostream>
#include <cmath> // pour sqrt

using namespace std;

// Constructeur par défaut
Point::Point() : x(0.), y(0.)
{
#ifdef DEBUG
    cout << "[" << __PRETTY_FUNCTION << ":" << __LINE__ << "]" << this << endl;
#endif
}

// TODO