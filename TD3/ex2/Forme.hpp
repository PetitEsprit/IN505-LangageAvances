#ifndef _FORME_H
#define _FORME_H

#include "../ex1/Point.hpp"

class Forme
{
	Point orig;
	public:
		Forme();
		Forme(const Point& p);
		virtual void afficher() = 0;
		void deplacer(float dx, float dy);
		Point getOrig();
};

#endif 
