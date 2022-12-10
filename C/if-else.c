#include<stdio.h>
int main()
{
    int num;
    printf("enter any number:\n");
    scanf("%d", &num);
    if(num%2 == 0)
    {
     printf("the number is an even number %d\n", num);
    }
    else {
    printf("the number is an odd number %d\n", num);
    }
    return 0;
    
}