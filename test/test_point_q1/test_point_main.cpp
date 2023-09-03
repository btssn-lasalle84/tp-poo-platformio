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

// "Q1 : Constructeur par défaut"
void test_unitaire_q1()
{
    Point p0;

    TEST_ASSERT_EQUAL_FLOAT(p0.getX(), 0.);
    TEST_ASSERT_EQUAL_FLOAT(p0.getY(), 0.);
}

int main()
{
    UNITY_BEGIN(); // IMPORTANT LINE!
    RUN_TEST(test_unitaire_q1);
    return UNITY_END(); // stop unit testing
}