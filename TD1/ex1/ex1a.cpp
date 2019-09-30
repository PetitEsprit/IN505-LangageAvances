#include <iostream>

int main()
{
	int t[10];
	int *ptr = t;
	for(int i=0;i<10;i++)
		std::cout << *(ptr+i) << "\n";
	return 0;
}
