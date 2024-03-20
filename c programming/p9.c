#include<stdio.h>
int main()
{
    int a,b,sum,dif,multi,div,mod;
    printf("Enter the number a\n");
    scanf("%d",&a);
    printf("Enter the number b\n");
    scanf("%d",&b);

    sum=a+b;
    dif=a-b;
    multi=a*b;
    div=a/b;
    mod=a%b;

    printf("The sum : %d+%d=%d\n", a, b, sum);
    printf("The difference : %d-%d=%d\n", a, b, dif);
    printf("The multiplication : %d*%d=%d\n", a, b, multi);
    printf("The division : %d/%d=%d\n", a, b, div);
    printf("The modulus of %d and %d = %d\n", a, b, mod);

    return 0;
}