#include "Point.hpp"

int main()
{
	Point p(3,5);
	PointColor pc(3,4,10), pcc(pc);
	pcc.afficher();
	return 0;
}
