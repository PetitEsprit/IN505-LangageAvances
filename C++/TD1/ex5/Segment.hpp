#ifndef _SEGMENT_H
#define _SEGMENT_H

#include <iostream>
#include "../ex4/Point.hpp"

using namespace std;

class Segment
{
	public:
		Point p1, p2;
		Segment();
		Segment(const Point& p1, const Point& p2);
		Segment(const Segment& s);
		~Segment();
		void afficher();
		float longueur();
		bool estVertical();
		bool estHorizontal();
		bool estSurDiagonale();
};

#endif
