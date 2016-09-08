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

    for(i = 1; i < SIZE; i++)
    {
	j = i - 1;
	while(raw[i] < sorted[j] && j >=0)
        {
            sorted[j + 1] = sorted[j];
            sorted[j] = raw[i];
	    j--;
        }
         
    }    
    
    for(i = 0; i < SIZE; i++)
    {
	printf("%d ", sorted[i]);
    }    
    printf("\n");
}
