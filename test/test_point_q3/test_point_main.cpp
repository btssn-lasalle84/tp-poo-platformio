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

// "Q3 : Accesseurs et mutateurs"
void test_unitaire_q3()
{
    Point p0;

    p0.setX(5.5);
    TEST_ASSERT_EQUAL_FLOAT(p0.getX(), 5.5);
    p0.setY(6.5);
    TEST_ASSERT_EQUAL_FLOAT(p0.getY(), 6.5);
}

int main()
{
    UNITY_BEGIN(); // IMPORTANT LINE!
    RUN_TEST(test_unitaire_q3);
    return UNITY_END(); // stop unit testing
}