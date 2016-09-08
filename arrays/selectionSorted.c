#include <stdio.h>

int main()
{
    #define SIZE 10
    int raw[SIZE] = {2,7,4,18,9,5,3,4,6,9};

    int sorted[SIZE];

    int i, j, min;

    for(i = 0; i < SIZE; i++)
    {
        sorted[i] = raw[i];
    }

    for(i = 0; i < SIZE - 1; i++)
    {
        min = i;
        for(j = i; j < SIZE; j++)
	{
	    if(sorted[j] < sorted[min])
		min = j;
	}
	if(min != j)
	{
          int tmp = sorted[min];
	  sorted[min] = sorted[i];
	  sorted[i] = tmp;
	}

    }
    
    for(i = 0; i < SIZE; i++)
    {
	printf("%d ", sorted[i]);
    }    
    printf("\n");
}
