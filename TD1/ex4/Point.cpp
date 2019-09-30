#include "Point.hpp"

Point::Point() : x(0), y(0){}
Point::Point(float x, float y) : x(x),y(y) {}
Point::Point(Point &p) : x(p.x),y(p.y) {}
Point::~Point(){ std::cout << "Appel au destructeur du Point\n";}

void Point::afficher()
{
	std::cout << "x: " << x << " / y:" << y << "\n";
}

void Point::cloner(const Point &p)
{
	x = p.x ; y = p.y;
}
