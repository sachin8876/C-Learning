#include<stdio.h>
 main()
{
    int y;
    printf("enter any year");
    scanf("%d", &y);
    if (y%100==0)
    {
       if(Y%400==0)
       {
       prinf("year is leapyear");
       }
       else
       {
       printf("year is not leapyear");
       }
    }
    else
    {
        if(y%4==0)
        {
        printf("year is leapyear");
        }
        else
        {
        printf("year is not leapyear");
        }
    }
    return 0;
    
    
}