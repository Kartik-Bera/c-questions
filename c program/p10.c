#include<stdio.h>
int main()
{
    int a;
    a=25;
    a=a- ++a%10*a--;
    
    printf("%d\n",a);
    
    return 0;
}