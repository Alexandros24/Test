#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int arr[], int n)
{
   for (int i = 0; i < n-1; i++)
       // Last i elements are already in place
       for (int j = 0; j < n-i-1; j++)
           if (arr[j+1] > arr[j])
              swap(&arr[j], &arr[j+1]);
}

void main()
{	
	int a[10];
	int len = sizeof(a)/sizeof(a[0]);
	srand((unsigned) time(NULL));
	printf("%d\n", len);
	for(int i = 0; i < len; i++)
    {
		a[i] = rand() % 20;
        printf("%d ", a[i]);
    }
    printf("\n%d.....\n", a[0]);
	bubbleSort(a, len);
    puts("\n");
	for(int i = 0; i < len; i++)
    {
		if (i == 0)
            printf("after sorting: ");
        printf("%d ", a[i]);
    }
}