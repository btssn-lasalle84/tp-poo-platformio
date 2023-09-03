<img alt="points bar" align="right" height="36" src="../../blob/badges/.github/badges/points-bar.svg" />

![](https://img.shields.io/badge/Github-Classroom-green.svg) ![C++ Badge](https://img.shields.io/badge/C%2B%2B-00599C?logo=cplusplus&logoColor=fff&style=plastic)

# TP POO : C++

- [TP POO : C++](#tp-poo--c)
  - [Le langage C++](#le-langage-c)
  - [Travail demandé](#travail-demandé)
    - [Une classe Point](#une-classe-point)
  - [Tests unitaires](#tests-unitaires)
  - [Bac à sable et développement en ligne](#bac-à-sable-et-développement-en-ligne)

**Les objectifs de ce TP sont de s’initier à la programmation orientée objet en C++.**

> Pour les enseignants, ceci est un "petit" devoir pour [Github Classroom](https://btssn-lasalle84.github.io/guides-developpement-logiciel/guide-classroom.html). Il montre l'utilisation des tests unitaires en C++, la notation automatique et l'insertion d'un badge pour l'affichage de la note.

## Le langage C++

[C++](https://fr.wikipedia.org/wiki/C%2B%2B) est un langage de programmation compilé permettant la programmation sous de multiples paradigmes (comme la programmation procédurale, __orientée objet__ ou générique). Ses bonnes performances, et sa compatibilité avec le C en font un des langages de programmation les plus utilisés dans les applications où la performance est critique.

Créé initialement par __Bjarne Stroustrup__ dans les années 1980, le langage C++ est aujourd'hui normalisé par l'ISO. Sa première normalisation date de __1998__ (ISO/CEI 14882:1998), ensuite amendée par l'erratum technique de __2003__ (ISO/CEI 14882:2003). Une importante mise à jour a été ratifiée et publiée par l'ISO en septembre __2011__ sous le nom de ISO/IEC 14882:2011, ou __C++11__. Depuis, des mises à jour sont publiées régulièrement : en __2014__ (ISO/CEI 14882:2014 ou __C++14__) puis en __2017__ (ISO/CEI 14882:2017 ou __C++17__). [source : [wikipedia.org](https://fr.wikipedia.org/wiki/C%2B%2B)]

Les changements du langage C++ concernent aussi bien le langage initial que la bibliothèque standard.

_Remarque :_ La bibliothèque standard du C++ (_C++ Standard Library_) est une bibliothèque de classes et de fonctions standardisées selon la norme ISO pour le langage C++. Elle contient aussi la bibliothèque standard du C. Une des principales briques de la bibliothèque standard du C++ est sans aucun doute la __STL__ (_Standard Template Library_), à tel point qu'il y a souvent confusion entre les deux.

Dans l'index de popularité des langages [TIOBE](https://www.tiobe.com/tiobe-index/), le C représente 16,2 % (première place) et le C++ 7,6 % (quatrième place) en novembre 2020.

Lien : [www.cplusplus.com](http://www.cplusplus.com/reference/)

« Hello, world »

Voici l'exemple de _Hello world_ donné dans "_The C++ Programming Language, Third Edition_" de **Bjarne Stroustrup** :

```cpp
#include<iostream>

int main()
{
    std::cout << "Hello, new world!\n";
}
```

## Travail demandé

### Une classe Point

On souhaite manipuler des **points**. Pour cela, nous allons définir le concept **Point** :

> Un point est défini par son abscisse (`x`) et son ordonnée (`y`). L’abscisse et l’ordonnée d’un point sont des réels (`double`).

On en sait suffisamment pour **modéliser une classe `Point`** :

```cpp
#ifndef POINT_H
#define POINT_H

class Point
{
   private:
      double x;
      double y;

   public:
      // TODO Constructeurs

      // TODO Destructeur

      // TODO Accesseurs et mutateurs

      // TODO Services
};

#endif //POINT_H
```

:memo: Lorsqu'on modélise une nouvelle classe, on commence toujours par identifier ses **caractéristiques** afin de déterminer le **nom et le type des ses attributs**. C'est seulement ensuite que l'on s'attache à son comportement.

La **programmation orientée objet (POO)** nous oblige à complèter le squelette de cette classe :

- La classe `Point` devra disposer de deux **constructeurs** : un constructeur par défaut qui initialisera les attributs `x` et `y` à zéro et un constructeur d'initialisation qui recevra en paramètres l’abscisse et l’ordonnée du point à initialiser.

- Tous les attributs de la classe `Point` seront **privés** par respect du principe d’encapsulation. On veut néanmoins pouvoir connaître son abscisse et son ordonnée, et éventuellement les modifier. Il faudra donc créer les **accesseurs** et mutateurs correspondants.

- Un point pourra s’afficher. On aura donc une **méthode publique** `affiche()` qui produira un affichage de ce type : `<x,y>`

- On doit aussi pouvoir calculer la distance entre 2 points (`calculeDistance()`) et le milieu de 2 points (`determinePointMilieu()`).

:memo: Une méthode publique est un **service** rendu à l'utilisateur de l'objet.

On vous fournit un programme `test-point.cpp` où vous devez décommenter progressivement les parties de code source correspondant aux questions posées.

À la fin du TP, vous devez obtenir l’exécution suivante :

```
$ make test-point
Question 1 : constructeur par défaut
Question 2 : constructeur
Question 3 : accesseurs et mutateurs
L'abscisse de p0 est 0
L'abscisse de p1 est 1
L'abscisse de p1 est 4

L'ordonnée de p0 est 0
L'ordonnée de p1 est 2
L'ordonnée de p1 est 0

L'abscisse de p0 est maintenant 5.5
L'ordonnée de p0 est maintenant 6.5

L'abscisse de p3 est 2
L'ordonnée de p3 est 1

Question 4 : rendre des services
p0 = <5.5,6.5>
p1 = <1,2>
p2 = <4,0>

Question 5 : calcul de la distance entre 2 points
La distance entre p1 et p2 est de 3.6

Question 6 : calcul le point milieu entre 2 points
Le point milieu entre p1 et p2 est <2.5,1>

```

## Tests unitaires

Solutions pour C++ :

- [CppUnit](http://sourceforge.net/projects/cppunit/)
- [CxxTest](http://cxxtest.sourceforge.net/guide.html)
- [Catch2](https://github.com/catchorg/Catch2)

:point_right: Dans ce TP, on utilisera [Catch2](https://github.com/catchorg/Catch2) ([Tutoriel Catch2](https://github.com/catchorg/Catch2/blob/devel/docs/tutorial.md)).

Tests unitaires pour les questions Q1, Q2, Q3, Q4, Q5 et Q6 :

```cpp
$ make tests
...
All available test cases:
  Q1 : Constructeur par défaut
  Q2 : Constructeur d'initialisation
  Q3 : Accesseurs et mutateurs
  Q4 : Affiche les coordonnées d'un point
  Q5 : Calcul de la distance entre 2 points
  Q6 : Calcul du point milieu entre 2 points
6 test cases

<0,0>
===============================================================================
All tests passed (12 assertions in 6 test cases)
```

Test unitaire pour une question Qx :

```cpp
$ make test-q1
...
===============================================================================
All tests passed (2 assertions in 1 test case)
```

## Bac à sable et développement en ligne

Il est souvent nécessaire de passer par un "bac à sable".

> En informatique, le bac à sable (_sandbox_) est une zone d'essai permettant d'exécuter des programmes en phase de test ou dans lesquels la confiance est incertaine. C'est notamment très utilisé en sécurité informatique pour sa notion d'isolation.

Il existe de nombreux sites web qui fournissent des EDI (Environnement de Développement Intégré) en ligne pour tester du code ou des services : un espace d'apprentissage séparé. Ils permettent aussi d'échanger des exemples.

Quelques sites :

- [C++ shell](http://cpp.sh/)
- Coding Ground For Developers : https://www.tutorialspoint.com/codingground.htm
  - [C99](https://www.tutorialspoint.com/compile_c99_online.php)
  - [C++](https://www.tutorialspoint.com/compile_cpp_online.php)
  - [C++11](https://www.tutorialspoint.com/compile_cpp11_online.php)
- [Codecast France IoI](https://codecast.france-ioi.org/next/)
- Visual Studio Code Online : https://vscode.dev/
- Gitpod : https://www.gitpod.io/
- Codeanywhere (Cloud IDE) : https://codeanywhere.com/

---
Thierry Vaira : **[thierry(dot)vaira(at)gmail(dot)com](thierry.vaira@gmail.com)**
