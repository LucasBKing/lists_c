#include<stdio.h>
#include<stdlib.h>
#include "ls.h"

struct list * create(int max)
{

	if(max > 0)
	{
		struct list * l = malloc(sizeof(struct list));
		if(l != NULL)
		{
			l->tam = 0;
			l->max = max;
			l->arm = malloc(max * sizeof(int *));
			return l;
		}
		printf("Error!\n");
		exit(-1);
		
	}
	else
	{
		printf("Error!\n");
		return NULL;
	}
}