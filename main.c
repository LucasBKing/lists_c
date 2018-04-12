#include<stdio.h>
#include<stdlib.h>
#include "ls.h"

int main()
{	
	struct list * lS = create(15);

	if(lS != NULL)
	{
		lS->arm[0] = 1;
		printf("%d\n", lS->arm[0]);
	}
	
	return 0;
}
