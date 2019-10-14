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

class PointColor : public Point
{
	private:
		int color;
	public:
		PointColor(float x = 0, float y = 0, int c = 0);
		PointColor();
		PointColor(const PointColor& pc);
		void afficher();
		int getColor() const;
		~PointColor();
};

#endif
