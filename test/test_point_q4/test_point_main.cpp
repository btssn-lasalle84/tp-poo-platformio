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

// "Q4 : Affiche les coordonnées d'un point"
void test_unitaire_q4()
{
    Point p0;

    p0.affiche(); // la méthode existe
    TEST_IGNORE();
}

int main()
{
    UNITY_BEGIN(); // IMPORTANT LINE!
    RUN_TEST(test_unitaire_q4);
    return UNITY_END(); // stop unit testing
}