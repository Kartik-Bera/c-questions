#include<stdio.h>
int main()
{
    int a,b,x;
    
    x=5;
    a=++x*2;
    b=x++*2;
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",x);

    return 0;
}