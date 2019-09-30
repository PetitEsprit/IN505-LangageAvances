#include <iostream>
#include <cmath>

class Segment
{
	public:
		float x1, y1, x2, y2;
		Segment() : x1(0), y1(0), x2(0), y2(0){}
		Segment(float x1, float y1, float x2, float y2) : x1(x1),y1(y1),x2(x2),y2(y2){}
		~Segment(){std::cout << "\nappel au destructeur\n";}
		void afficher()
		{
			std::cout << "p1: (" << x1 << ", " << y1 << ")\n";
			std::cout << "p2: (" << x2 << ", " << y2 << ")\n";
		}
		float longueur()
		{
			float xx,yy;
			xx = x2-x1; yy = y2-y1; 
			return sqrt(xx*xx + yy*yy);
		}
		bool estVertical(){return y1 == y2;}
		bool estHorizontal(){return x1 == x2;}
		bool estSurDiagonale(){return x1 != x2 && y1 != y2;}
};

int main()
{
	Segment s(1,2,1,4);
	s.afficher();
	std::cout << s.estHorizontal();
	std::cout << "\n" << s.longueur();
	return 0;
}
