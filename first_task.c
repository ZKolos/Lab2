#include <stdio.h>

int main()
{
    float x;
    printf("Dear user!\n");
    printf("Enter a number, I will print its square!");
    scanf("%f", &x);
    x = x * x;
    printf("\nx square is: %f\n", x);
    return 0;
}