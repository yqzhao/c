#include <stdio.h> 

#define TRUE 1
#define FALSE 0
#define NUMELS 10 

int linearSearch(int [], int, int);

int main()
{
    int nums[NUMELS] = {2,3,4,5,7,8,9,1,3,55};

    printf("please enter the integer you want to search:\n");

    int key;

    scanf("%d", &key);

    int index = linearSearch(nums, NUMELS, key);

    printf("the item was found at index loacation:%d\n", index);

    return 0;

}


/*
* 1.the list need not be sorted 
* 2.the algorithm is simple
* 3.very quick if the key at the beginning of the list
* 4.worse case : the key is the last element 
* 5.average comparasion: N/2. N is the size of the list
*/
int linearSearch(int list[], int size, int key)
{
    int i = 0, index = -1, found = FALSE;

    while(i < size && !found)
    {
        if(key == list[i])
        {
	    found = TRUE;
	    index = i;
        }
    
        i++;
    }

    return index;

}
