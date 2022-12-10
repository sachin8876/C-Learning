#include<stdio.h>
int main(){
    char ch;
    printf("enter any character\n");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z')
    printf("the entered charater was in upper case. In lower case it is:%c", (ch+32));
    else
    printf("the entered character was in lower case. In upper case it is:%c", (ch-32));
    return 0;
}