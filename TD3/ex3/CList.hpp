#ifndef C_LIST_HPP
#define C_LIST_HPP

#include <iostream>

using namespace std;

struct elem
{
	int val;
	elem* next;
};

elem *new_node(int n);
void free_node(elem *e);

class CList
{
	protected:
		elem *node;
	public:
		CList();
		virtual CList& operator <(int n) = 0;
		int operator >(int &n);
		friend ostream& operator<<(ostream& flux, const CList& cl);
		~CList();
};

#endif
