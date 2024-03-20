#include<stdio.h>
int main()
{
    int h, L, B, d, p, r, t;
    printf("Enter length and breadth of rectangle L and B \n");
    scanf("%d%d",&L,&B);
    printf("Area of rectangle = %d\n\n",L*B);

    printf("Enter height and base of triangle \n");
    scanf("%d%d",&h, &p);
    printf("Area of triangle = %d\n\n",(h*p)/2);

    printf("Enter diameter of circle \n");
    scanf("%d",&d);
    if(t=d%7 ==0)
    {r=d/2;
        printf("Area of circle = %d",22*r*r/7);}
    else
    {r=d/2;
        printf("Area of circle = %0.2f",3.14*r*r);
    }return 0;
}