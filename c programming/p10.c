#include<stdio.h>
int main()
{
    // RELATIONAL OPERATORS
    int a = 4, b = 12;
   /* printf("%d\n", a == b);
    printf("%d\n", a != b);
    printf("%d\n", a > b);
    printf("%d\n", a >= b);
    printf("%d\n", a < b);
    printf("%d\n", a <= b);*/

    //LOGICAL OPERATORS
   /* int m = 0, n = 3;
    printf("The logical operator returned %d\n", m && n);
    printf("The logical operator returned %d\n", m || n);
    printf("The logical operator returned %d\n", !n);
    printf("The logical operator returned %d\n", !m);*/

    //bitwise operators
    /*int A = 22, B = 34;
    printf("\nBitwised and operator returned %d\n", A & B);
    printf("Bitwised or operator returned %d\n", A | B);
    printf("Bitwised xor operator returned %d\n", A ^ B);*/
    
    //assignment operators
    // =, +=, -=, *=, %=, etc
   // int K = 5;
   // K *= 6;
   // printf("K is %d\n", K);

   /* int even, n;
    printf("enter your n\n");
    scanf("%d", &n);
    even = n%2==0;
    if(n= even)
    {
        printf("entered number is even\n ");
    }
    else 
    {
        printf("Entered number is odd\n ");
    }*/

    int n, year;
    printf("enter year\n");
    scanf("%d", &n);
    year = n%4 ==0 ;
    if (n=year)
    {
        printf("The year is leap year\n ");
    }
    else 
    {
        printf("the year is not leap year\n ");
    }

    return 0;
}