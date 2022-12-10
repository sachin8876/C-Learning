#include<stdio.h>
int main() {
    int age;
    printf("enter the age:\n");
    scanf("%d", &age);
    if(age >= 18){
    printf("you can vote\n");
    printf("you can drive\n");
    }
    else
    printf("you cannot");
    return 0;
}