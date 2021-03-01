#include <stdio.h>

int main()
{
    int x;
    scanf("%i", &x);
    factorial(x);
    printf("%d", factorial(x));
}

int factorial(int a)
{
    long int i = a;
    int athr = 1;
    for (; i > 1; i--)
    {
        athr *= i;
    }
    return athr;
}