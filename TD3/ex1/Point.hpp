#ifndef _POINT_H
#define _POINT_H

class Point
{
	private:
		float x,y;
	public:	
		Point();
		Point(float x, float y);
		Point(const Point &p);
		~Point();
		float getX() const, getY() const;
		void afficher();
		void cloner(const Point &p);
};

#endif
