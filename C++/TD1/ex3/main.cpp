#include <stdio.h>
#include <stdlib.h>

void tableauEcriture(int *t, int l)
{
	for(int i=0; i<l;i++)
		t[i] = i;
}

void tableauLecture(const int *t, int l)
{
	for(int i=0; i<l;i++)
		printf("t[%d]: %d\n", i, t[i]);
}

int main()
{
	int t[10];
	tableauLecture(t,10);
	tableauEcriture(t,10);
	tableauLecture(t,10);
	return 0;
}
