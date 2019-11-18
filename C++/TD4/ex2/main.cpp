#include <iostream>
#include "Pair.hpp"

using namespace std;

int main()
{
	int i=5, j=6;
	float l=10.0, m=5.0;
	Pair<int> myInts (i,j); //créer une paire d’entiers
	Pair<float> myFloats (l,m); //créer une paire de flottants
	cout << myInts.getMax()<< endl; //affiche le plus grand des 2 entiers
	cout << myFloats.getMax()<<endl; //affiche le plus grand des 2 flottants
	return 0 ;
}
