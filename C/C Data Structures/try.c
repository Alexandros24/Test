#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubbleSort(int arr[], int n);
void antimetathesi(int *x1, int *x2);

int main()
{
    int a[12];
    int len = sizeof(a)/ sizeof(a[0]);
    srand((unsigned) time(NULL));
    for(int i = 0; i < len; i++)
        a[i] = rand() % 50;
    bubbleSort(a, len);
    for (int i = 0; i < len; i++)
    {
        printf("%d ", a[i]);
    }
    puts("\n");
    return 0;
}

void antimetathesi(int *x1, int *x2)
{
    int temp = *x1;
    *x1 = *x2;
    *x2 = temp;
}

void bubbleSort(int arr[], int n)
{
    for(int k = 0; k < n-1; k++)
    {
        for(int i = 0; i < n-k-1; i++ )
        {
            if (arr[i] < arr[i+1])
            antimetathesi(&arr[i], &arr[i+1]);
        }
    }
}           