#include<stdio.h>
int main()
{
    int n, a, b, c, reverse;
    printf("Enter any three digit number\n");
    scanf("%d", &n);
    a=n/100;
    b=(n%100)/10;
    c=(n%10);
    reverse= c*100+b*10+a;

    printf("\nThe first digit a is %d\n", a = n/100);
    printf("The second digit b is %d\n", b=(n%100)/10);
    printf("The third digit c is %d\n\n", c=n%10);
    
    printf("The reverse is %d\n", reverse);
    
    return 0;
}