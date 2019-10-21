#ifndef _FORME_H
#define _FORME_H

#include "Point.hpp"

class Forme
{
	Point orig;
	public:
		Forme();
		Forme(const Point& p);
		virtual void afficher() = 0;
		void deplacer(float dx, float dy);
		Point getOrig();
		virtual ~Forme();
};

#endif 
