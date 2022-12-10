int main() {
    int mark1, mark2, mark3, mark4, total=0;
    float avg = 0.0;
    printf("enter the marks in mathematics:\n");
    scanf("%d", &mark1);
    printf("enter the marks in science:\n");
    scanf("%d", &mark2);
    printf("enter the marks in computer:\n");
    scanf("%d", &mark3);
    printf("enter the marks in social:\n");
    scanf("%d", &mark4);
    total = mark1 + mark2 + mark3 + mark4;
    avg = (float) total/4;
    printf("\n total = %d", total);
    printf("\n aggregate = %.2f", avg);
    if(avg >= 75)
    printf("distinction:\n");
    else if(avg >= 60 && avg <75);
    printf("first:\n");
    else if(avg >= 50 && avg <60);
    printf("second:\n");
    else if(avg >= 40 && avg <50);
    prinf("third:\n");
    else
    printf("fail:\n");
    return 0;
}