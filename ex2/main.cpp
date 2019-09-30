#include <stdio.h>
#include <stdlib.h>

void echange(char** s1, char** s2)
{
	char *tmp;
	tmp = *s1;
	*s1 = *s2;
	*s2 = tmp;
}


int main()
{
	char *s1, *s2;
	s1 = (char*)malloc(10);
	sprintf(s1,"coucou"); 
	s2 = (char*)malloc(10);
	sprintf(s2,"toi");
	
	printf("s1: %s\ns2: %s\n", s1,s2);
	echange(&s1, &s2);
	printf("s1: %s\ns2: %s\n", s1,s2);
	
	free(s1);
	free(s2)
	return 0;
}
