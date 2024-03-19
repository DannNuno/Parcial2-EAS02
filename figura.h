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

 class Square: public Figura{
    public:
    Square():Figura(){};
    Square(int b, int h, float a):Figura(b,h){};
};
class Rectangle: public Figura{
    public:
    Rectangle():Figura(){};
    Rectangle(int b, int h, float a):Figura(b,h){};
};
class Triangle: public Figura{
    public:
    Triangle():Figura(){};
    Triangle(int b, int h, float a):Figura(b,h){};
};

#endif