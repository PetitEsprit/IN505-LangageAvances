#ifndef _SEGMENT_H
#define _SEGMENT_H

#include "Forme.hpp"
#include "../ex1/Point.hpp"

class Segment : public Forme
{
	Point p1, p2;
	public:
		Segment();
		Segment(const Point& p1, const Point& p2, const Point& orig);
		Segment(const Segment& s, const Point& orig);
		~Segment();
		void afficher();
};

#endif 
