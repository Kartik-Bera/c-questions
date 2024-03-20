#include<stdio.h>
int main()
{
    int a,b,c;
    a=1;b=1;c=1;
    printf("\n%d,%d,%d",++a + a++ +1 , 1+ ++b + b++ , ++c + c++);

    
    return 0;
}