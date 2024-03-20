#include<stdio.h>
int main()
{
    int a,b,x;
    
    x=5;
    b=3;
    a=++b*b++ - --x;
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",x);

    return 0;
}