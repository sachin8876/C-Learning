#include<stdio.h>
int main() {
    int x, y;
    printf("enter two number:\n");
    scanf("%d %d", &x, &y);
    if(x == y)
    printf("the two numbers are equal\n");
    else if(x > y)
    printf("the number is greater than %d\n", x, y);
    else
    printf("the number is smaller than %d\n", x, y);
    return 0;
}