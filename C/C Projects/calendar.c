#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

//char (*months)[12] = {'Jan', 'Feb', 'Mar', 'Apr', 'May', 'Jun', 'Jul', 'Aug', 'Sep', 'Oct' 'Nov', 'Dec'};

struct calendar
{
    int date;
    char month[30];
    int year;
};

int main()
{
    struct calendar whois;
    printf("What is the date today?\n");
    whois.date = 12;
    whois.month = "June";
    whois.year = 2000;
    char *pain;
    scanf("%s", pain);
    printf("date is: %d %d", whois.date, whois.year);
    return 0;
}

