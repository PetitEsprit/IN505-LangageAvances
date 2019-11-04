#include "CList.hpp"

elem *new_node(int n)
{
	elem *tmp = new elem;
	tmp->val = n;
	tmp->next = nullptr;
	return tmp;
}

void free_node(elem *e)
{
	if(e->next != nullptr)
		free_node(e->next);
	free(e);
}

CList::CList() : node(nullptr), size() {}

CList::CList(CList& l)
{
	int s = l.getSize();
	for(int i=0; i<size;i++)
	{
		node = new_node(l.getVal(i));
		node = node->next;
	}
}

CList::~CList()
{
	if(node != nullptr) free_node(node);
}

int CList::getSize(){return size;}

int CList::getVal(int i)
{
	elem* tmp = node;
	for(int j=0; j<i; j++)
		tmp = tmp->next;
	return tmp->val;
}

void CList::operator>(int &n)
{
	if(node != nullptr)
		n = node->val;
}

ostream& operator<<(ostream& flux, const CList& cl)
{
	elem* ptr = cl.node;
	flux << "la Liste est ( ";
	while(ptr != nullptr)
	{
		flux << ptr->val << " ";
		ptr = ptr->next;
	}
	flux << ")" << endl;
	return flux;
}
