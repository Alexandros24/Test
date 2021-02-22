#include <stdio.h>
#include <math.h>

int isPrime(long num)
{
    if (num==2)
        return 1;

    for (long i = 2; i < sqrt(num) + 1; i++)
    {
        if (num % i == 0)
        return 0;
    } 

    return 1;
}

int main()
{
    int counter = 0, ans = 0;

    for (long i = 2; i < 200000; i++)
    {
        if ( isPrime(i) == 1)
        {
            counter++;
            ans = i;      
        }
        if (counter == 10001)
        {
            break;
        }
    }

    printf("%d", ans);
    return 0;
}