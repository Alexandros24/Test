#include <stdio.h>

void Maximum();

int main()
{
    int min, max;
    int a[] = {23, 4, 12, 21 ,198, 34, 513, 212, 324};
    int len = sizeof(a) / sizeof(a[0]);
    
    Maximum(a, len, &min, &max);
    printf("Min: %d\nMax: %d\nLen: %d\n", min, max, len);
    printf("%i\n", a[8]);
    
    return 0;
}

void Maximum(int arr[], int len, int *min, int *max) //an den paro pointer tote den tha allaksei to min kai to max sto main function
{
    *min = *max = arr[0]; 
    for (int i = 1; i < len; i++)
    {
        if (*max < arr[i])
        {
            *max = arr[i];
        }
        if (*min > arr[i])
        {
            *min = arr[i];
        }
    }
}