#include<stdio.h>
int main()
{
    int i=0,n,j;
    printf("Enter number\n");
    scanf("%d",&n);
    for (i=0,j=1;i <= n; i++,j++)
    {
        printf("%d  %d\n",i,j);
    }
    return 0;
}