#include<stdio.h>
int x=30; //global variable
void xyz()
{
    printf("%d\n",x);
}
void abc()
{
    printf("%d\n",x);
}
int main()
{
    int y=120; //local variable
    xyz();
    // abc();
    printf("%d\n",y);
    return 0;

}