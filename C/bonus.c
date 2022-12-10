#include<stdio.h>
int main() {
    char ch;
    float sal, bonus, amt_to_be_paid;
    printf("enter the sex of the employee(m or f)\n");
    scanf("%c", &ch);
    printf("enter the salary of the employee:\n");
    scanf("%f", &sal);
    if(ch == 'm')
    bonus = 0.05*sal;
    else
    bonus = 0.10*sal;
    if(sal < 10000)
    bonus += 0.20*sal;
    amt_to_be_paid=sal+bonus;
    printf("salary\n = %f", sal);
    printf("bonus\n = %f", bonus);
    printf("**************************\n");
    printf("amount to be paid: %f", amt_to_be_paid);
    return 0;
}