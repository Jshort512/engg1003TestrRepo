#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x;
    float y;
    printf("Enter an number: ");
    scanf("%f", &x); //note change of %d to %f
    // complete the y=line below
    y = x*x+2*x;
    printf("y: %f\n", y);
    return 0;
}
