#include <stdio.h>
#include <math.h>

float findAvg(int [], int);
float findStdDev(int [], int);

int main()
{
    int size, i;
    printf("please input the total numbers of the integer list:\n");
    scanf("%d", &size);

    int numbers[size];

    printf("please input the integers,one per enter\n");

    for(i = 0; i < size; i++)
    {
        scanf("%d", &numbers[i]);
    }
 
    float avg = findAvg(numbers, size);
    
    printf("the average of the list of integers is: %f\n", avg);

    float stdDev = findStdDev(numbers, size);

    printf("the standard deviation of the list of integers is: %f\n", stdDev);
}

float findAvg(int nums[], int size)
{
    int i, sum = 0;
    for(i = 0; i < size; i++)
    {
        sum = nums[i] + sum;
    }
    return sum/size;
}


float findStdDev(int nums[], int size)
{
    double avg = findAvg(nums,size);
    int i;
    double sum = 0.0;

    for(i = 0; i < size; i++) 
    {
         sum = pow((nums[i] - avg),2) + sum;
    }
          
    return sqrt(sum / size);

}




