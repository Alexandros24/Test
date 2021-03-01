#include <stdio.h>

void minMax(int arr[], int len, int *peos, int *kauli);

int main()
{
    int min, max;
    int a[] = {10, 20, 1234, 543, 456, 3};
    int length = sizeof(a) / sizeof(a[0]);

    minMax(a, length, &max, &min);
    printf("Min: %d\nMax: %d\nLength: %d\n", min, max, length);

    return 0;
}

void minMax(int arr[], int len, int *peos, int *kauli)
{
    *kauli = *peos = arr[0];
    for (int i = 1; i <len; i++)
    {
        if (*peos < arr[i])
        {
            *peos= arr[i];
        }
        if (*kauli> arr[i])
        {
            *kauli = arr[i];
        }
    }
}