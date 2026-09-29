#include <stdio.h>
int main()
{
    unsigned char a = 5;  
    unsigned char b = 3;  

    printf("%d",a|b);
    printf("%d",a^b);
    printf("%d",a&b);
    printf("~a= %d\n",(char)~a);
    printf("a << 1 = %d\n", a << 1);
    printf("a >> 1 = %d\n",a >> 1);
    return 0;
}