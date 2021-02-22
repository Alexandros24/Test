//problima 6
#include <stdio.h>

typedef unsigned long long bignum;

int main()
{
    bignum sum1 = 0;
    bignum sum2 = 0;
    for(int i = 1; i <= 100; i++) {
        sum1 += i*i;
        sum2 += i;
    }
    sum2 *= sum2;
    bignum dif = sum2 - sum1;
    printf("%llu", dif);
}