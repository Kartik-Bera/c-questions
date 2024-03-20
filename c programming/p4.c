#include<stdio.h>
int main()
{
    int n, a, b, c, x, sum;
    printf("Enter the three digit number\n");
    scanf("%d", &n);
    a=n/100;
    x=n%100;
    b=x/10;
    c=x%10;
    printf("\nThe first digit a is %d\n", a = n/100);
    printf("The second digit b is %d\n", b=x/10);
    printf("The third digit c is %d\n\n", c=x%10);
    printf("sum is %d\n", a+b+c);
    return 0;

}