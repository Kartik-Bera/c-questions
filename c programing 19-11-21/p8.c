#include<stdio.h>
int main()
{
    int i=10,n;
    printf("Enter number\n");
    scanf("%d",&n);
    for (i = 10; i > n; i--)
    {
        printf("%d\n",i);
    }
    return 0;
}