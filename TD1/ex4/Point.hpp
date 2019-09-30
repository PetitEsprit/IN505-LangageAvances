#ifndef _POINT_H
#define _POINT_H

class Point
{
	public:
		float x,y;
		Point();
		Point(float x, float y);
		Point(Point &p);
		~Point();
		void afficher();
		void cloner(const Point &p);
};

#endif
