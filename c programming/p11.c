#include<stdio.h>
int main()
{
    int a,b,c,n;
    printf("Enter the number a\n");
    scanf("%d",&a);
    printf("Enter the number b\n");
    scanf("%d",&b);
    printf("Enter the number c\n");
    scanf("%d",&c);
    n=(a+b+c)/3;
    printf("Average of three numbers is %d",n);

    return 0;
}