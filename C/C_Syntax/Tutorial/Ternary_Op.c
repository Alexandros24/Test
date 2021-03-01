
#include <stdio.h>

int main()
{
    double money = 10;
    double cost = 15;

    money > cost ? printf("You can afford it\n") : printf("You can't afford it\nYou Need %lf more money\n", cost - money);


    /* ANTI GIA IF STATEMENT TERNARY|
    if (money > cost)
    {
        printf("You can afford it\n");
    }
    else
    {
        printf("You can't afford it\nYou Need %lf more money\n", cost - money);
    }
    */
    return 0;
}
