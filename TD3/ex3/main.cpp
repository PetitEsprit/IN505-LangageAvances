#include "CPile.hpp"

int main()
{
	CPile cp;
	cp < 8 < 4 < 5 < 9;
	CPile cpp(cp);
	cout << cp;
	cout << cpp;
	//cout << "3: " << cp.getVal(0) << endl;
	return 0;
}
