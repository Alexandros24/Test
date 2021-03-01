#include <stdio.h>
#include <stdbool.h>


int *findMid(int arr[], int n);

int main()
{
    int x = 5, *ptrx = &x;
    int y = 6, *ptry = &y;
    int z = *ptrx + *ptry;
    printf("%d", z);
}
