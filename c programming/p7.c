#include<stdio.h>
int main()
{
    int p,q,x;
    printf("Enter the number P\n");
    scanf("%d", &p);
    printf("Enter the number Q\n");
    scanf("%d", &q);
    x=p;
    p=q;
    q=x;
    
    printf("\nThe swapping number of P is\n %d\n", p);
    printf("The swapping number of Q is\n %d\n", q);

    return 0;
}