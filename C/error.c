#include<stdio.h>
int main() {
    int num;
    char ch;
    printf("enter an int and a char value:\n");
    if(scanf("%d %c", &num, &ch)==2)
    printf("data read sucessfully\n");
    else
    printf("error in data input\n");
    return 0;
}