#ifndef _CERCLE_H
#define _CERCLE_H

#include "Forme.hpp"
#include "../ex1/Point.hpp"

class Cercle : public Forme
{
	Point mid;
	float r;
	public:
		Cercle();
		Cercle(const Point& p1, const float rad, const Point& orig);
		Cercle(const Cercle& s, const Point& orig);
		~Cercle();
		void afficher();
};

#endif 
