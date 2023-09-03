#include <Arduino.h>
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

// "Q3 : Accesseurs et mutateurs"
void test_unitaire_q3()
{
    Point p0;

    p0.setX(5.5);
    TEST_ASSERT_EQUAL_FLOAT(p0.getX(), 5.5);
    p0.setY(6.5);
    TEST_ASSERT_EQUAL_FLOAT(p0.getY(), 6.5);
}

// "Q4 : Affiche les coordonnées d'un point"
void test_unitaire_q4()
{
    Point p0;

    p0.affiche(); // la méthode existe
    TEST_IGNORE();
}

// "Q5 : Calcul de la distance entre 2 points"
void test_unitaire_q5()
{
    Point p1(1., 2.);
    Point p2(4., 0.);

    float distance = p1.calculeDistance(p2);
    TEST_ASSERT_EQUAL_FLOAT(distance, 3.605551275);
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

void setup()
{
    UNITY_BEGIN(); // IMPORTANT LINE!
    RUN_TEST(test_unitaire_q1);
    RUN_TEST(test_unitaire_q2);
    RUN_TEST(test_unitaire_q3);
    RUN_TEST(test_unitaire_q4);
    RUN_TEST(test_unitaire_q5);
    RUN_TEST(test_unitaire_q6);
    UNITY_END(); // stop unit testing
}

void loop()
{
}
