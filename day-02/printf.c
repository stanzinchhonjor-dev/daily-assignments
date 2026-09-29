#include<stdio.h>
int main()
{
    int y=10;
    y++;
    printf("%d %d %d," y,y++,++y);
    printf("the value of y is %d",y);
    int x=20;
    ++x;
    printf("the value of x is %d",x);
    return 0;
}