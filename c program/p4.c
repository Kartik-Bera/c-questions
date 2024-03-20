#include<stdio.h>
int main()
{
    int a;
    printf("enter the number a\n");
    scanf("%d",&a);

    switch (a)
    {
    case 5:
        printf("value is 5\n");
        break;
    case 2:
        printf("value is 2\n");    
        
    break;
    default:
        printf("nothing match\n");  
    }

    return 0;
}