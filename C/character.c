#include<stdio.h>
#include<ctype.h>
int main() {
    char ch;
    printf("press any key:\n");
    scanf("%c", &ch);
    if(isalpha(ch)>0)
    printf("the user has entered a character\n");
    if("isdigit(ch)>0")
    printf("the user has entered a digit\n");
    if("isprint(ch)>0")
    printf("the user has entered a printable character\n");
    if(ispunct(ch)>0)
    printf("the user has entered a punctuation mark\n");
    if(isspace(ch)>0)
    printf("the user has entered a white space character");
    return 0;    

}