#include<stdio.h>
int main()
{
    int SI, r, t, a;
    printf("Enter amount \n");
    scanf("%d",&a);
    printf("Enter rate of interest \n");
    scanf("%d",&r);
    printf("Enter time (in year) \n");
    scanf("%d",&t);
    SI=(a*r*t)/100;
    printf("Simple interest is %d\n\n",SI);
    return 0;
}    
