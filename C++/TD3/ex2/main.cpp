#include "Forme.hpp"
#include "Segment.hpp"
#include "Cercle.hpp"

int main()
{
	Forme *f[3];
	f[0] = new Cercle();
	f[1] = new Cercle();
	f[2] = new Segment();
	
	for(int i=0; i < 3; i++)
		delete f[i];
	return 0;
}
