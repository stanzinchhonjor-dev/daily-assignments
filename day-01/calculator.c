#include <stdio.h>

int main ()
{
    int x,y;
    int sum,sub,mul,div,mod;

    printf("Enter two integers");
    scanf("%d %d",&x,&y);

  sum=x + y;
  sub=x - y;
  mul=x * y;
  div=x / y;
  mod=x % y;

  printf("sum = %d\n",sum);
  printf("subtraction = %d\n",sub);
  printf("multiplication = %d\n",mul);
  printf("division = %d\n",div);
  printf("remainder = %d\n",mod);
  
  return 0;
}
