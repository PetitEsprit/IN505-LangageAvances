#ifndef _CERCLE_H
#define _CERCLE_H

#include <iostream>
#include "Cercle.hpp"

Cercle::Cercle() : rayon(), rad(0) {}
Cercle::Cercle(const Point& p, const float rad, const Point& orig) : mid(p), r(rad), Forme(orig) {}
Cercle::Cercle(const Cercle& c, const Point& orig) : mid(c.mid), r(rad), Forme(orig) {}
Cercle::~Cercle(){}
void Cercle::afficher()
{
	float dx = Forme::getOrig().getX();
	float dy = Forme::getOrig().getY();
	std::cout << "mid: (" << mid.getX() + dx << ", " << mid.getY() + dy << ")\n";
}

#endif 
