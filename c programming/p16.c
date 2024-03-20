#include<stdio.h>
int main()
{
    int a,b,x,y,c;
    
    x=5;
    a=++x*2;
    b=x++*2;
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",x);

    /*y=8;
    x13;
    c=++y + y++;
    printf("%d\n",c);
    printf("%d\n",y);*/

    // x=3;
    // x=x + x++ + --x+6;
    // printf("%d\n",x);

    return 0;
}