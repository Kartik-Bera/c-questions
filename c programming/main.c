#include <stdio.h>
int main()
{
    // compiler will ingore this
    /*
    this is a multi
    line 
    comment
    */
    //    int, float, char
    int e = 7; //2-4 bytes
    unsigned short integer = 8;
    long integer1 = 7;
    short integer2 = 5;

    float f = 8.4;                   //2 byte - 6 decimal precision
    double myfloat1 = 4.56;          // 15 decimal precision
    long double myfloat2 = 3.678590; //19 decimal precision

    char g = 'k'; //1 byte

    printf("hello user\ninteger value is %d\nfloat value is %f\ncharacter is %c\n", e, f, g);

    printf("\nthe size take by int is %d\n", sizeof(int));
    printf("the size take by unsigned int is %d\n", sizeof(unsigned int));
    printf("the size take by float is %d\n", sizeof(float));
    printf("the size take by double is %d\n", sizeof(double));
    printf("the size take by long double is %d\n", sizeof(long double));
    printf("the size take by char is %d\n", sizeof(char));
    printf("the size take by unsigned char is %d\n", sizeof(unsigned char));
    printf("the size take by short int is %d\n", sizeof(short int));

    printf("\n''''''RULES FOR CREATING VARIABLES''''''");
    int kartikName;   // this is variable declaration
    kartikName = 45;  // this is variable initialization
    char seven = '7'; // this ia variable declaration and initialization
    const int i = 8;
    // i = 10;
    kartikName = 99;

    printf("\n\n''''''types of operators in c''''''");

    /*
    Arithmatic operators
    Relational operators
    logical operators
    Bitwise operators
    Assignment operators 
    Misc operators
    */
    // Arithmatic operators
    int a = 5, b = 10, c = 7;
    printf("\nsum of a and b is %d\n", a + b);
    printf("difference of a and c is %d\n", c - a);
    printf("multiplication of c and b is %d\n", c * b);
    printf("division of a and b is %d\n", a / b);
    printf("modulus of a and c is %d\n", c % a);
    printf("increment of c is %d\n", ++c);
    printf("decrement of a is %d\n", --a);

    //relational operators
    int mohan = 4, rohan = 12;
    printf("%d\n", mohan == rohan);
    printf("%d\n", mohan != rohan);
    printf("%d\n", mohan > rohan);
    printf("%d\n", mohan >= rohan);
    printf("%d\n", mohan < rohan);
    printf("%d\n", mohan <= rohan);

    //logical operators
    int h = 5, j = 3;
    printf("The logical operator returned %d\n", h && j);
    printf("The logical operator returned %d\n", h || j);
    printf("The logical operator returned %d\n", !j);
    printf("The logical operator returned %d\n", !h);

    //bitwise operators
    // A=13 , B=60
    //A = 00001101
    //B = 00111100
    //R = 00001100
    int A = 13, B = 60;
    printf("\nBitwised and operator returned %d\n", A & B);
    printf("Bitwised or operator returned %d\n", A | B);
    printf("Bitwised xor operator returned %d\n", A ^ B);
    printf("Bitwised ones operator returned %d\n", ~B);
    printf("Bitwised left shift operator returned %d\n", A << B);
    printf("Bitwised right shift operator returned %d\n", A >> B);

    //assignment operators
    // =, +=, -=, *=, %=, etc
    int K = 5;
    K *= 6;
    printf("K is %d\n", K);

    // Misc operators - &, *, ?:

    printf("\n\n''''''Taking input from user in c''''''\n");
    int Kartikbera;
    printf("\nplease enter the value of Kartikbera\n");
    //scanf("%d", &Kartikbera);
    //printf("\n you entered the %d as Kartikbera", Kartikbera);

    //printf("\nplease again enter the value of Kartikbera for getting floating value\n");
    //scanf("%d", &Kartikbera);
    //printf("\n you entered the %f as Kartikbera", (float) Kartikbera);

    // int num1, num2;
    // scanf("%d, &num1");
    // scanf("%d, &num2");
    // printf("\n num1/num2 is %f", (float) num1/num2);

    printf("\n\n''''''Decision making in c''''''\n\n");
    int age;
    printf("enter your age\n");
    scanf("%d", &age);
    if(age<18)
    {
        printf("you are not eligible for this job");
    }
    else if(age>=18 && age<=50)
    {
        printf("you are eligible for this job");

    }
    else 
    {
        printf("you cannot do this job");
    }
    return 0;
}