#include <stdio.h>

#define SIZE 5
int grades[SIZE];

int main()
{
    int temp[SIZE];
    static int raw[SIZE];
	
    int i;

    //default value static and global are 0, 
    //the local auto array temp is not
    for(i = 0; i < SIZE; i++)
    {
         printf("%d %d %d %d", i, grades[i], raw[i], temp[i]);
	 printf("\n");
    }
    
    //initial ways
    int list1[SIZE] = {1,2,3,4,5};
    int list2[] = {1,2,3,4,5};  //ommit the SIZE`
    
    //charArray 
    char list3[5] = {'a','p','p','l','e'};
    char list4[] = "apple"; // no braces or commas

    //print the char array
    printf("\nnow print the char array\n");
    printf("%s\n",list3);
    
    char strtest[14] = "this is a test";
    for(i = 0; i <= 14; i++)
    {
        printf("%c", strtest[i]);
    }
    
    char strtest2[5] = "test2";
    printf("\n");
    printf("now print the test2\n");
    printf("%s", strtest2);











}
