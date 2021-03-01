#include <stdio.h>
#include <stdlib.h>
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
    for(int i = 0; i < 20; i++) 
        printf("%d ", arr[i]);
    
} 

int main()
{
    int A[20];
    int i;
    srand((unsigned) time(NULL));
    for(i = 0; i<20; i++)
    {
        A[i] = rand() % 110;
    }
    for(int i = 0; i < 20; i++) 
    {
        printf("%d ", A[i]);
    }
    puts("\n");
    //Sort(A);
    bubbleSort(A, 20);
    return 0;
}


