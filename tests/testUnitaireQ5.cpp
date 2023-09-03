#include "catch.hpp" // https://github.com/catchorg/Catch2
#include "Point.h"

TEST_CASE("Q5 : Calcul de la distance entre 2 points")
{
    Point p1(1., 2.);
    Point p2(4., 0.);

    double distance = p1.calculeDistance(p2);
    CHECK(distance == Approx(3.605551275));
}
