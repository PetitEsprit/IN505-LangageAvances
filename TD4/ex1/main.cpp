#include <iostream>
#include "../../TD1/ex6/CString.hpp"

using namespace std;

template<class T>
T& GetMax(T n, T m)
{
	return (n < m ? m : n); 
}

//Marche pas car no match for operator<

int main()
{
	CString s1("toto"), s2('s'), s3;
	s3 = GetMax(s1, s2); //retourne le plus grand entre s1 et s2
	cout << s3.getString() << endl;
	return 0;
}
