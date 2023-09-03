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

// Constructeur d'initialisation
Point::Point(float x, float y) : x(x), y(y)
{
#ifdef DEBUG
    cout << "[" << __PRETTY_FUNCTION << ":" << __LINE__ << "]" << this << endl;
#endif
}

// Destructeur
Point::~Point()
{
#ifdef DEBUG
    cout << "[" << __PRETTY_FUNCTION << ":" << __LINE__ << "]" << this << endl;
#endif
}

// Accesseurs et mutateurs
float Point::getX() const
{
    return this->x;
}

void Point::setX(float x)
{
    this->x = x;
}

float Point::getY() const
{
    return this->y;
}

void Point::setY(float y)
{
    this->y = y;
}

// Services
void Point::affiche() const
{
    cout << "<" << this->x << "," << this->y << ">" << endl;
}

float Point::calculeDistance(const Point& p) const
{
    float dx, dy;

    dx = x - p.x;
    dy = y - p.y;

    return sqrt(dx * dx + dy * dy);
}

Point Point::determinePointMilieu(const Point& p) const
{
    Point m;

    m.x = (p.x + x) / 2.;
    m.y = (p.y + y) / 2.;

    return m;
}
