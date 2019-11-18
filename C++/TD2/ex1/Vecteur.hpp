#ifndef _VECTEUR_H
#define _VECTEUR_H

#include <iostream>

using namespace std;

class Vecteur
{
	static int nbvec;
	int size;
	int *ptr;
	public:
		Vecteur();
		Vecteur(int len);
		Vecteur(int len, int* t);
		Vecteur(Vecteur &cs);
		~Vecteur();
	int getSize();
	static int getNbVec();
	int* getTab();
	Vecteur& operator=(Vecteur &v);
	Vecteur& operator+(Vecteur &v);
	int& operator[](unsigned int i);
	friend ostream& operator<<(ostream &flux, Vecteur const& v);
};
#endif
