#ifndef figura_h
#define figura_h

#include <iostream>
using namespace std;

class Figura{
private:
    int b, h;
    float a;

public:
    Figura();
    Figura(int b, int h);
    void setArea(float a);
    float getArea();
};

class Square: public Figura{};
class Rectangle: public Figura{};
class Triangle: public Figura{};

#endif