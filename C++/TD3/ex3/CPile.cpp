#include "CPile.hpp"

CPile::CPile() : CList() {}

CPile& CPile::operator<(int n)
{
	elem *tmp = new_node(n);
	if(node != nullptr)
	{
		tmp->next = node;	
	}
	node = tmp;
	size++;
}

CPile::~CPile(){cout << "Destruction de la CPile" << endl;}
