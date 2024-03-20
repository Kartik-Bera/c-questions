#include<stdio.h>
int main()
{
   /* int a,n;
    printf("enter side of square a\n");
    scanf("%d",&a);
    n=a*a;
    printf("area of square is %d\n\n",n);*/

    int h, L, B, m, d, p, r, t;
    /*printf("enter length and breadth of rectangle L and B \n");
    scanf("%d%d",&L,&B);
    printf("area of rectangle = %d\n\n",L*B);

    printf("enter height and base of triangle \n");
    scanf("%d%d",&h, &p);
    printf("area of triangle = %d\n\n",(h*p)/2);*/

    printf("enter diameter of circle \n");
    scanf("%d",&d);
    
    
    if(t=d%7 ==0)
    {
        r=d/2;
        printf("area of circle = %d",22*r*r/7);}
    else
    {
        r=d/2;
        printf("area of circle = %0.2f",3.14*r*r);
    }
        
    return 0;
}