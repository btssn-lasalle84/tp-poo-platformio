#include "catch.hpp" // https://github.com/catchorg/Catch2
#include "Point.h"

TEST_CASE( "Q2 : Constructeur d'initialisation" )
{
  Point p1(1., 2.);
  Point p2(4., 0.);

  CHECK( p1.getX() == 1. );
  CHECK( p1.getY() == 2. );
  CHECK( p2.getX() == 4. );
  CHECK( p2.getY() == 0. );
}
