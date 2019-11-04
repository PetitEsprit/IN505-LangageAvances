#ifndef C_PILE_HPP
#define C_PILE_HPP

#include "CList.hpp"

using namespace std;

class CPile : public CList
{
	public:
		CPile();
		CPile& operator<(int n);
		~CPile();
};

#endif
