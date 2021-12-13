#include <stdio.h>
int addDigit(int a, int b);

int main(void){
    int a = 1; 
    int b = 4; 
    printf("%d" , addDigit(a,b));

    return 0;
}

int addDigit(int a, int b){
    int c;
    c = a + b;
    return c;
}