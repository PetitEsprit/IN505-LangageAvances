#include "Vecteur.hpp"
#include <stdlib.h>
#include <iostream>


int Vecteur::nbvec = 0;

Vecteur::Vecteur() : size(0), ptr(nullptr) {Vecteur::nbvec++;}
Vecteur::Vecteur(int len) : size(len)
{
	Vecteur::nbvec++;
	ptr = (int*)malloc(sizeof(int) * size);
	for(int i=0; i<size;i++)
		ptr[i] = 0;
}
Vecteur::Vecteur(int len, int *t) : size(len)  
{
	Vecteur::nbvec++;
	ptr = (int*)malloc(sizeof(int) * size);
	for(int i=0; i<size;i++)
		ptr[i] = t[i];
}

Vecteur::Vecteur(Vecteur &cs)
{
	Vecteur::nbvec++;
	size = cs.getSize();
	ptr = cs.getTab();
}

Vecteur::~Vecteur()
{
	Vecteur::nbvec--;
	free(ptr);
	std::cout << "Destruction de Vecteur\n";
}

Vecteur& Vecteur::operator=(Vecteur &v)
{
	if(this != &v)
	{
		free(ptr);
		size = v.getSize();
		free(ptr);
		ptr = v.getTab();
	}
	return *this;
}

Vecteur& Vecteur::operator+(Vecteur &v)
{
	int vsize = v.getSize();
	int lmax = (size > vsize ? size : vsize);
	int tmp[lmax] = {0};
	for(int i=0; i<lmax;i++)
	{
		if(i < vsize) tmp[i] += v[i];
		if(i < size) tmp[i] += ptr[i];
	}
	return *(new Vecteur(lmax, tmp));
}

int& Vecteur::operator[](unsigned int i)
{
	int ii = (i < size) ? i : size;
	return ptr[ii];
}


ostream& operator<<(ostream &flux, Vecteur const& v)
{
	int i;
	flux << '(';
	if(v.size == 0)
	{
		flux << "vide)";
		return flux;
	}
	for(i = 0; i < v.size-1; i++)
		flux << v.ptr[i] << ", ";
	flux << v.ptr[i] << ')' << endl;
	return flux;
}

int Vecteur::getSize() { return size;}
int Vecteur::getNbVec() {return Vecteur::nbvec;}
int* Vecteur::getTab()
{
	int* tmp = (int*)malloc(sizeof(int)*size);
	for(int i=0;i<size;i++)
		tmp[i] = ptr[i];
	return tmp;
}
