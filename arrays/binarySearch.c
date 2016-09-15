#include <stdio.h>

int binarySearch(int[], int, int);

int main(){

    int list[] = {1, 3, 5, 6, 8, 9, 11, 12};

    printf("please input your desired item:\n");

    int target;
    scanf("%d", &target);

    int result = binarySearch(list, 8, target);

    printf("your desired item is at the location of index :%d\n", result);
}


int binarySearch(int list[], int size, int target)
{
    int left = 0, right = size - 1;
    int middle;
    
    while(left <= right)
    {
        middle = (left + right) / 2;
        
        if(list[middle] == target)
            return middle;

        else if(list[middle] > target)
            right = middle - 1;

        else left = middle + 1;
    }
        
    return -1;
}
