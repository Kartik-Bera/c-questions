#include<stdio.h>
int main()
{
    int a,b;
    a=2;
    b= a++ + a-- + ++a + --a;
    printf("%d\n",a);
    printf("%d\n",b);
    
    return 0;
}