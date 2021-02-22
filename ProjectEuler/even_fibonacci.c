#include <stdio.h>

int main()
{
    long sum = 0;
    long a = 1;
    long b = 2;
    long t;

    while(a <= 4e6)
    {
        t = a;
        a = b;
        b += t;
        if(t % 2 == 0)
            sum += t;
    }
    printf("%li", sum);
    return 0;
}