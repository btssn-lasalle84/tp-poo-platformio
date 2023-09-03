#include <Arduino.h>
#include "Point.h" // La classe Point

Point p0;
Point p1(1.0, 2.0);
Point p2(4.0, 0.0);

void setup()
{
    p2.setX(4.0);
    p2.setX(0.);
    float distance    = p1.calculeDistance(p2);
    Point pointMilieu = p1.determinePointMilieu(p2);
}

void loop()
{
}
