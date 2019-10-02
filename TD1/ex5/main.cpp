#include "Segment.hpp"

using namespace std;

int main()
{
	Point p1(6,5);
	Point p2(p1); 
	Segment s(p1,p2);
	Segment s2(s);
	s2.afficher();
	
	std::cout << s.estHorizontal();
	std::cout << "\n" << s.longueur();
	return 0;
}
