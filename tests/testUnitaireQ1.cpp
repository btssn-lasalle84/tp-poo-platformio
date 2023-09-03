#include "catch.hpp" // https://github.com/catchorg/Catch2
#include "Point.h"

TEST_CASE( "Q1 : Constructeur par défaut" )
{
  Point p0;

  CHECK( p0.getX() == 0. );
  CHECK( p0.getY() == 0. );
}
