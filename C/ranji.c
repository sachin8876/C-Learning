#include<stdio.h>
int main()
{
    int l;
    printf("enter any year");
    scanf("%d, &l");
    if(l%100 == 0)
    {
        if(l%400 == 0)
        printf("Year is leap year");
    }
        else if
        printf("year is not leap year");
    else
    {
        if(l % 4 == 0)
        printf("year is leap year");
        else
        printf("year is not leap year");
    }
    return 0;

}