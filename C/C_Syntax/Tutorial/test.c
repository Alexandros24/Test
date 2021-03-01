
#include <stdio.h>


int main()
{
    int x = 9;
    int arr1[x];
    int arr2[] = {1, 1, 1, 1, 1, 1, 1, 1, 1,};
    int i =0;
    for (; i < x; i++)
    {
        scanf("%i", &arr1[i]);
    }
    int k =0;
    while (k < x)
    {
        int t = arr1[k];
        arr1[k] = arr2[k];
        arr2[k] = t;
        k++;
    }
    
    int j = 0;
    for (; j < x; j++)
    {
        printf("%d ", arr1[j]);
    }
    printf ("\n");
    j = 0;
    for (; j < x; j++)
    {
        printf("%d ", arr2[j]);
    }
    return 0;
}
