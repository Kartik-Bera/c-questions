#include<stdio.h>
int main()
{
    int x;
    x=3;
    x=x + x++ + --x +6;
    printf("%d",x);
    return 0;
}