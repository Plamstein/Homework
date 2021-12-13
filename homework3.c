#include <stdio.h>
int main()
{
    int days;
    int jupiterYear;
    int earthYear = 365;
    printf("Enter earth days: ");
    scanf("%d", &days);
    jupiterYear = earthYear * 12;
    days /= jupiterYear;
    printf("The days you entered are equal to %d Jupiter's years.", days);
    return 0;
}