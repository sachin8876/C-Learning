#include<stdio.h>
#include<math.h>

int main(){
int a, b, c;
float D, deno, root1, root2;
printf("enter the value of a b c: \n");
scanf("%d %d %d",  &a, &b, &c);
D = (b*b) - (4*a*c);
deno = 2*a;
if(D > 0)
{
    printf("real root:\n");
    root1 = ((-b + sqrt(D)) / deno);
    root2 = ((-b - sqrt(D)) / deno);
    printf("root1 = %f \t root2 = %f", root1, root2);
    else if(D == 0)
    {
        printf("equal root:\n");
        root1 = -b/deno;
        printf("root1 = %f \t root2 = %f", root1, root2);
    }
    else
    printf("imaginary roots");
    return 0; 
}
}