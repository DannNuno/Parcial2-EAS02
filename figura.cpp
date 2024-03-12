#include <iostream>
#include "figura.h"
using namespace std;

class Square: public Figura{
    Square():Figura(){
        this->setArea(0);
    };
    Square(int b, int h):Figura(b,h){};

};

class Rectangle: public Figura{
    Rectangle():Figura(){
        this->setArea(0);
    };
    Rectangle(int b, int h):Figura(b,h){};

};

class Triangle: public Figura{
    Triangle():Figura(){
        this->setArea(0);
    };
    Triangle(int b, int h):Figura(b,h){};

};

Figura::Figura(){
    this->b = 0;
    this->h = 0;
}

Figura::Figura(int b, int h){
    this->b = b;
    this->h = h;
}

void Figura::setArea(float a){
    this->a = a;
}

float Figura::getArea(){
return this->a;

}

/*
    Implementa los constructores y funciones de la clase Figura.
    El área NO se debe de asignar en el constructor de Figura, ÚNICAMENTE en el constructor individual de cada figura.
*/

/*
    Implementa la clase Square que hereda de Figura.
    Crear constructor de Square que herede del constructor de Figura.
    Asignar el área del Square.
*/

/*
    Implementa la clase Rectángulo que hereda de Figura.
    Crear constructor de Rectángulo que herede del constructor de Figura.
    Asignar el área del Rectángulo.
*/

/*
    Implementa la clase Triángulo que hereda de Figura.
    Crear constructor de Triángulo que herede del constructor de Figura.
    Asignar el área del Triángulo.
*/