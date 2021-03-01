#include <math.h>
#include <windows.h>
#include <stdio.h>


int main()
{
    float y;
    float x = 0.2312; 
    printf("How many %f are there in yor number\nTyper your number here: ", x);
    scanf("%f", &y);
    
    //division
    double t = y / x;

    printf("Your number is: %.7lf\n", t);
    printf("%.50lf", M_PI);
    return 0;
}