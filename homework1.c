#include <stdio.h>
int main()
{
    int weight;
    int weightOnMoon;

    printf("Enter your weight :\n");
    scanf("%d",&weight);
    weightOnMoon = weight * 0.17;
    printf("Your weight on the Moon is: %d",weightOnMoon);
    
    return 0;
}