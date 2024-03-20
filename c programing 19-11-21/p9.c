#include<stdio.h>
int main()
{
    char c,n;
    printf("Enter char \n");
    scanf("%c",&n);
    for (c='a'; c <= n; c++)
    {
        printf("%c\n",c);
    }
    return 0;
}