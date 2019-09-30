#include <iostream>

int main()
{
	//Une methode plus rapide ?!
	using namespace std;
	char **s = (char**)malloc(sizeof(char*)*3);
	s[0] = (char*)malloc(10);
	sprintf(*s,"truc");
	s[1] = (char*)malloc(10);
	sprintf(*(s+1),"machin");
	s[2] = (char*)malloc(10);
	sprintf(*(s+2),"chose");
	for(int i=0;i<3;i++)
		printf("s[%d]: %s\n", i, *(s+i));
	
	return 0;
}
