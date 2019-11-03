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

CList::CList() : node(nullptr) {}

CList::~CList()
{
	if(node != nullptr) free_node(node);
}

int CList::operator >(int &n)
{
	n = node->val;
	return n;
}

ostream& operator<<(ostream& flux, const CList& cl)
{
	elem* ptr = cl.node;
	while(ptr->next != nullptr)
	{
		flux << ptr->val << ";";
		ptr = ptr->next;
	}
	flux << ptr->val << endl;
	return flux;
}
