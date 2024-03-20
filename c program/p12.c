#include<stdio.h>
int main()
{
    int x,i;
    i=2;
    x = ++i + ++i + ++i;
    printf("%d\n",x);
    printf("%d\n",i);
    
    return 0;
}