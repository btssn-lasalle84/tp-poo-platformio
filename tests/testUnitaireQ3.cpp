#include "catch.hpp" // https://github.com/catchorg/Catch2
#include "Point.h"

TEST_CASE( "Q3 : Accesseurs et mutateurs" )
{
  Point p0;

  p0.setX(5.5);
  CHECK( p0.getX() == 5.5 );
  p0.setY(6.5);
  CHECK( p0.getY() == 6.5 );
}
