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
		int size;
	public:
		CList();
		CList(CList& l);
		int getSize();
		int getVal(int i);
		virtual CList& operator<(int n) = 0;
		virtual void operator>(int &n);
		friend ostream& operator<<(ostream& flux, const CList& cl);
		~CList();
};

#endif
