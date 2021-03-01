#include <stdio.h>
#include <stdbool.h>
#include <math.h>


int main()
{

    int a; //arithmos pou psaxno
    scanf("%d", &a);
    int left = 0;
    int k = 100;
    int right = k;
    bool flag = false;
    int i = 0;
    while (i<k && flag == false)
    {
        int M = (left + right) / 2;
        if (a > M)
        {
            left = M + 1;
        }
        else if (a<M)
        {
            right = M - 1;
        }
        else 
        {
            flag = true;
        }
        i++;
    }

    printf("%d\n", i);
    int x = log2(k) + 1;
    printf("Max number: %d", x);

    return 0;
}