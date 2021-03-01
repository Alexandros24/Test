#include <stdio.h>

int func(int op)
{
    int a;
    op = op % 2;
    a = op + 12;
    return a;
}

int func2(int op)
{
    return op + 2;
}

int main()
{
    int choice, a;
    int (*ptrfunc[2])(int) = {func, func2};
    puts("Enter choice: ");
    scanf("%d", &choice);
    printf("number: ");
    scanf("%d", &a);
    printf("%d", ptrfunc[choice](a));
    return 0;
}