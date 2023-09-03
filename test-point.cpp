#include <iostream>
#include <iomanip>
#include "Point.h"

using namespace std;

int main()
{
    /* Question 1 */
    /*cout << "Question 1 : constructeur par défaut" << endl;
    Point p0;*/

    /* Question 2 */
    /*cout << "Question 2 : constructeur" << endl;
    Point p1(1., 2.);
    Point p2(4., 0.);
    // allocation dynamique
    Point* p3; // je suis pointeur non initialisé sur un objet de type Point
    p3 = new Point(2., 2.); // j'alloue dynamiquement un objet de type Point*/

    /* Question 3 */
    /*cout << "Question 3 : accesseurs et mutateurs" << endl;
    cout.precision(2);

    cout << "L'abscisse de p0 est " << p0.getX() << endl;
    cout << "L'abscisse de p1 est " << p1.getX() << endl;
    cout << "L'abscisse de p1 est " << p2.getX() << endl;
    cout << endl;

    cout << "L'ordonnée de p0 est " << p0.getY() << endl;
    cout << "L'ordonnée de p1 est " << p1.getY() << endl;
    cout << "L'ordonnée de p1 est " << p2.getY() << endl;
    cout << endl;

    p0.setX(5.5);
    cout << "L'abscisse de p0 est maintenant " << p0.getX() << endl;
    p0.setY(6.5);
    cout << "L'ordonnée de p0 est maintenant " << p0.getY() << endl;
    cout << endl;

    // Comme p3 est une adresse, je dois utiliser l'opérateur -> pour accéder
    // aux membres de cet objet
    cout << "L'abscisse de p3 est " << p3->getX() << endl;
    p3->setY(0);   // je modifie la valeur de l'attribut y de p3
    (*p3).setY(1); // cette écriture est possible : je pointe l'objet puis
                   // j'appelle sa méthode
    cout << "L'ordonnée de p3 est " << p3->getY() << endl;
    // Pour afficher l'adresse de l'objet
    // cout << "L'adresse de p3 est " << p3 << endl;
    delete p3; // ne pas oublier de libérer la mémoire allouée pour cet objet
    p3 = NULL;
    cout << endl;*/

    /* Question 4 */
    /*cout << "Question 4 : rendre des services" << endl;
    cout << "p0 = ";
    p0.affiche();
    cout << "p1 = ";
    p1.affiche();
    cout << "p2 = ";
    p2.affiche();
    cout << endl;*/

    /* Question 5 */
    /*cout << "Question 5 : calcul de la distance entre 2 points" << endl;
    double distance = p1.calculeDistance(p2);
    cout << "La distance entre p1 et p2 est de " << distance << endl;
    cout << endl;*/

    /* Question 6 */
    /*cout << "Question 6 : calcul le point milieu entre 2 points" << endl;
    Point pointMilieu = p1.determinePointMilieu(p2);
    cout << "Le point milieu entre p1 et p2 est ";
    pointMilieu.affiche();*/

    return 0;
}
