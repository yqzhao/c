#include <stdio.h>
void f(int []);

int main()
{
    int numbers[] = {1,2,3,4,5};

    int i;

    for(i = 0; i < 5; i++)
    {
        printf("%d ", numbers[i]);
    }

    printf("\n");
    //the called function point to the origin arrays and
    //it can modify the values in the array
    f(numbers);

    for(i = 0; i < 5; i++)
    {
        printf("%d ", numbers[i]);
    }

    

}

void f(int input[])
{
    input[1] = 99;
}






