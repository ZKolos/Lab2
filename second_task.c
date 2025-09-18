#include <stdio.h>
#include <math.h>

int main()
{
    // declare variables<-- These are comments, you can remove them if you want to
float x1;
float y1;
float x2;
float y2;
double d;
    // get user input
printf("Give me the coords!\n");
printf("\nA-x: ");
scanf("%f", &x1);
printf("A-y: ");
scanf("%f", &y1);
printf("B-x: ");
scanf("%f", &x2);
printf("B-y: ");
scanf("%f", &y2);
    // calculate the length
d =(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
d= sqrt(d);
    // print the result
printf("\nTheir distance is: %lf", d);
    return 0;
}