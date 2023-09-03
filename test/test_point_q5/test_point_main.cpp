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

// "Q5 : Calcul de la distance entre 2 points"
void test_unitaire_q5()
{
    Point p1(1., 2.);
    Point p2(4., 0.);

    double distance = p1.calculeDistance(p2);
    TEST_ASSERT_EQUAL_FLOAT(distance, 3.605551275);
}

int main()
{
    UNITY_BEGIN(); // IMPORTANT LINE!
    RUN_TEST(test_unitaire_q5);
    return UNITY_END(); // stop unit testing
}