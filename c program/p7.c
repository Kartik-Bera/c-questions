#include<stdio.h>
int main()
{
    int x,y,c;

    y=8;
    x=13;
    c=++y+x+y--;
    printf("%d\n",c);
    printf("%d\n",y);

    return 0;
}