#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int arr[5];
    srand((unsigned) time(NULL));
    for(int i = 0; i <5; i++)
    {
        arr[i] = rand() % 50;
    }
    for(int i = 0; i < 5; i++) {
        printf("%d\n", arr[i]);
    }
    return 0;
}