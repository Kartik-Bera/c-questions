#include<stdio.h>
int main()
{
    int a,b,y;
    y=11;
    a=10*++y-1;
    b=++y+y++;
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",y);
    return 0;
}