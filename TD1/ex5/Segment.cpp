#include <iostream>
#include <cmath>
#include "Segment.hpp"

Segment::Segment() : p1(), p2() {}
Segment::Segment(const Point& p1, const Point& p2) : p1(p1), p2(p2) {}
Segment::Segment(const Segment& s) : p1(s.p1), p2(s.p2){}
Segment::~Segment(){std::cout << "\nappel au destructeur du Segment\n";}

void Segment::afficher()
{
	std::cout << "p1: (" << p1.getX() << ", " << p1.getY() << ")\n";
	std::cout << "p2: (" << p2.getX() << ", " << p2.getY() << ")\n";
}

float Segment::longueur()
{
	float xx,yy;
	xx = p2.getX() - p1.getX(); yy = p2.getY() - p1.getY(); 
	return sqrt(xx*xx + yy*yy);
}

bool Segment::estVertical(){return p1.getY() == p2.getY();}
bool Segment::estHorizontal(){return p1.getX() == p2.getX();}
bool Segment::estSurDiagonale(){return p1.getY() != p2.getY() && p1.getX() == p2.getX();}
