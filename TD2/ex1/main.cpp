#include "Vecteur.hpp"
#include <iostream>

int main()
{
	using namespace std;
	int t[4] = {6,4,9,7}; 
	Vecteur v1, v2(4,t), v3(v2);
	cout << v1 + v3;
}
