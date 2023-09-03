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

// "Q2 : Constructeur d'initialisation"
void test_unitaire_q2()
{
    Point p1(1., 2.);
    Point p2(4., 0.);

    TEST_ASSERT_EQUAL_FLOAT(p1.getX(), 1.);
    TEST_ASSERT_EQUAL_FLOAT(p1.getY(), 2.);
    TEST_ASSERT_EQUAL_FLOAT(p2.getX(), 4.);
    TEST_ASSERT_EQUAL_FLOAT(p2.getY(), 0.);
}

int main()
{
    UNITY_BEGIN(); // IMPORTANT LINE!
    RUN_TEST(test_unitaire_q2);
    return UNITY_END(); // stop unit testing
}