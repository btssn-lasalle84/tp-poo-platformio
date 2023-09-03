#include "catch.hpp" // https://github.com/catchorg/Catch2
#include "Point.h"

TEST_CASE("Q6 : Calcul du point milieu entre 2 points")
{
    Point p1(1., 2.);
    Point p2(4., 0.);

    Point pointMilieu = p1.determinePointMilieu(p2);
    CHECK(pointMilieu.getX() == Approx(2.5));
    CHECK(pointMilieu.getY() == Approx(1.));
}
