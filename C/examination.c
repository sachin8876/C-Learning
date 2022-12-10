#include<stdio.h>
int main() {
    int marks;
    printf("entered the marks obtained:\n");
    scanf("%d", &marks);
    if(marks >= 75)
    printf("Distinction\n");
    else if(marks >= 65 && marks <75)
    printf("First\n");
    else if(marks >= 50 && marks <65)
    printf("Second\n");
    else if("marks >= 40 && marks <50")
    printf("Third\n");
    else
    printf("Fail\n");
    return 0;
}