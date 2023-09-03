#include <unity.h>

#include "Point.h" // La classe Point

void setUp(void)
{
    // set stuff up here
}

void tearDown(void)
{
    // clean stuff up here
}

// "Q6 : Calcul du point milieu entre 2 points"
void test_unitaire_q6()
{
    Point p1(1., 2.);
    Point p2(4., 0.);

    Point pointMilieu = p1.determinePointMilieu(p2);
    TEST_ASSERT_EQUAL_FLOAT(pointMilieu.getX(), 2.5);
    TEST_ASSERT_EQUAL_FLOAT(pointMilieu.getY(), 1.);
}

int main()
{
    UNITY_BEGIN(); // IMPORTANT LINE!
    RUN_TEST(test_unitaire_q6);
    return UNITY_END(); // stop unit testing
}