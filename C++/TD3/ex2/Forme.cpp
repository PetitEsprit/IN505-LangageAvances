#include <iostream>
#include "Forme.hpp"

Forme::Forme() : orig(0,0) {}
Forme::Forme(const Point &p) : orig(p) {}
void Forme::deplacer(float dx, float dy)
{
	Point p(orig.getX() + dx, orig.getY() + dy);
	orig.cloner(p);
}
Point Forme::getOrig(){return orig;}
Forme::~Forme(){}
