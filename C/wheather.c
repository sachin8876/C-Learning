#include<stdio.h>
int main() {
    int num;
    printf("enter any number:\n");
    scanf("%d", &num);
    if(num == 0)
    printf("the number is equal to zero\n");
    else if(num > 0)
    printf("the number is positive\n", num);
    else
    printf("the number is negative\n", num);
    return 0;
}