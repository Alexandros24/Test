#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <conio.h> 

int praxi(int a, int b, char symbol);

int main()
{
    system("cls");
    int a;
    int b;
    char symbol;
    printf ("What would you want to do:\n");
    scanf("%d %c %d", &a, &symbol, &b);
    if (symbol =='/' && b == 0)
    {
        printf("%d\n", praxi(a, b, symbol));
    }
    else
    {
        printf("The answer is: %d\n", praxi(a, b, symbol));
    }
    return 0;
}

int praxi(int a, int b, char symbol)
{
    bool flag = true;
    int athr;
    if (symbol == '+')
    {
        athr = a + b;
    }
    else if (symbol == '-')
    {
        athr = a - b;
    }
    else if (symbol == '*')
    {
        athr = a * b;
    }
    else if (symbol == '/')
    {
        if (b == 0)
        {
            athr = 0;
            printf("Lathos\n");
        }
        else
        {
            athr = a / b;
        }
        
    }
    else if(symbol == '^')
    {
        athr = pow(a, b);
    }
    else
    {
        printf ("Lathos\n");
    }


    return athr;
}

