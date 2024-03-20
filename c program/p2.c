#include<stdio.h>
int main()
{
    int c;
    printf("enter any character\n");
    scanf("(float)%d", &c);
    if((c>='a' && c<='z')||(c>='A' && c<='Z'))
    {
        printf("character is an alphabet\n");
    }    
    
    else
    {
        printf("character is not an alphabet\n");
    }
    return 0;
}