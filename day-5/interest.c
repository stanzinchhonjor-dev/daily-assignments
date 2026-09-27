#include <stdio.h>
int main()
 {
    float p = 1000;
    float r = 5;
    float t = 2;
    
    float SI;
    float CI;
    float amount;

    si = (p * r * t) / 100;

    amount = p * (1 + r / 100) * (1 + r / 100);
    ci = amount - p;

    printf("Simple Interest = %f\n", si);
    printf("Compound Interest = %f\n", ci);

    return 0;
}