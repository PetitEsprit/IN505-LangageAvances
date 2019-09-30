#include <iostream>

class Point
{
	public:
		float x,y;
		Point() : x(0), y(0){}
		Point(float x, float y) : x(x),y(y) {}
		Point(Point &p) : x(p.x),y(p.y) {}
		~Point(){ std::cout << "appel au destructeur\n";}
		void afficher()
		{
			std::cout << "x: " << x << " / y:" << y << "\n";
		}
		void cloner(Point &p)
		{
			x = p.x ; y = p.y;
		}
};

int main()
{
	Point *p = new Point(3,5);
	p->afficher();
	delete p;
	return 0;
}
