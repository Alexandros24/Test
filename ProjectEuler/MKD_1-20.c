#include <stdio.h>
#include <stdbool.h>

typedef unsigned long long bignum;

int main()
{
    bignum num = 2;
    bool flag = true;
    while(flag == true) {
        if(num % 2 == 0 && num % 3 == 0 && num % 4 == 0 && num % 5 == 0 && num % 6 == 0 && num % 7 == 0 && num % 8 == 0 && num % 9 == 0 && num % 10 == 0 && num % 11 == 0 && num % 12 == 0 && num % 13 == 0 && num % 14 == 0 && num % 15 == 0 && num % 16 == 0 && num % 17 == 0 && num % 18 == 0 && num % 19 == 0 && num % 20 == 0)
        {    printf("%llu ", num);
            flag = false;
        }
        num++;
        if(num == 4)
            printf("douleuei\n");
    }
    return 0;
}

//h poli pio apla dio loops