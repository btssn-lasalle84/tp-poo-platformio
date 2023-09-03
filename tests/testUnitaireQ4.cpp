#include "catch.hpp" // https://github.com/catchorg/Catch2
#include "Point.h"

TEST_CASE("Q4 : Affiche les coordonnées d'un point")
{
    Point p0;

    p0.affiche(); // la méthode existe
    SUCCEED();
}
