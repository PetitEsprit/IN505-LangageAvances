#include "Point.hpp"

int main()
{
	Point *p = new Point(3,5);
	p->afficher();
	delete p;
	return 0;
}
