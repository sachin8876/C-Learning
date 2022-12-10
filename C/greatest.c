#include<stdio.h>
int main() {
int num1, num2, num3, big=0;
printf("enter the first number:\n ");
scanf("%d", &num1);
printf("enter the sencond number:\n ");
scanf("%d", &num2);
printf("enter the third number:\n ");
scanf("%d", &num3);
if(num1>num2)
{
if(num1>num3)
printf("\n is greater than %d and %d", num1, num2, num3);
else
printf("\n is greater than %d and %d", num1, num2, num3);
}
else if(num2>num3)
printf("\n%d is greater than %d and %d", num1, num2, num3);
else
printf("\n%d is greater than %d and %d", num3, num1, num2);
return 0;
}

