#include<stdio.h>
int main()
{
    int i=0,n;
    printf("Enter number\n");
    scanf("%d",&n);
    do
    {
        i=i+1;
        printf("%d\n",i);
    }
    while (i<n);

    return 0;
}