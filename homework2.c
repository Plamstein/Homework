#include <stdio.h>
int main()
{
    int order;
    int cup;

    printf("How much ounce do u want? ");
    scanf("%d", &order);

    cup = order / 8;

    printf("Your order is: %d", cup);

    return 0;
}