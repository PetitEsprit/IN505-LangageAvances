#include <iostream>
#include "Segment.hpp"

Segment::Segment() : p1(), p2() {}
Segment::Segment(const Point& p1, const Point& p2, const Point& orig) : Forme(orig), p1(p1), p2(p2) {}
Segment::Segment(const Segment& s, const Point& orig) : Forme(orig), p1(s.p1), p2(s.p2){}
Segment::~Segment(){std::cout << "\nappel au destructeur du Segment\n";}

void Segment::afficher()
{
	float dx = Forme::getOrig().getX();
	float dy = Forme::getOrig().getY();
	std::cout << "p1: (" << p1.getX() + dx << ", " << p1.getY() + dy << ")\n";
	std::cout << "p2: (" << p2.getX() + dx << ", " << p2.getY() + dy << ")\n";
}
