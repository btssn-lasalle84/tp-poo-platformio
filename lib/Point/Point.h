#ifndef POINT_H
#define POINT_H

// #define DEBUG

class Point
{
  private:
    float x;
    float y;

  public:
    // Constructeurs
    Point();
    Point(float x, float y);

    // Destructeur
    ~Point();

    // Accesseurs et mutateurs
    float getX() const;
    void  setX(float x);
    float getY() const;
    void  setY(float y);

    // Services
    void  affiche() const;
    float calculeDistance(const Point& p) const;
    Point determinePointMilieu(const Point& p) const;
};

#endif // POINT_H
