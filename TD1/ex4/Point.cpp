#include "Point.hpp"
#include <iostream>

Point::Point() : x(0), y(0){}
Point::Point(float x, float y) : x(x),y(y) {}
Point::Point(const Point &p) : x(p.x),y(p.y) {}
Point::~Point(){ std::cout << "Appel au destructeur du Point\n";}
float Point::getX()const {return this->x;}
float Point::getY()const {return this->y;}

void Point::afficher()
{
	std::cout << "x: " << x << " / y:" << y << "\n";
}

void Point::cloner(const Point &p)
{
	this->x = p.getX(); this->y = p.getY();
}
