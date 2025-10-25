#include <stdio.h>
int main()
{
    float A, B, SUM, Z;
    printf("ENTER 1st NUMBER ");
    scanf("%f", &A);
    printf("ENTER 2nd NUMBER ");
    scanf("%f", &B);
    printf("INPUT: 1 FOR SUM , 2 FOR SUBTRACTION , 3 FOR MULTIPLICATION , 4 FOR DIVISION ");
    scanf("%f", &Z);
    if (Z == 1)
    {
        SUM = A + B;
        printf("SUM IS %f", SUM);
    }
    else if (Z == 2)
    {
        SUM = A - B;
        printf("SUBRACTION IS IS %f", SUM);
    }
    else if (Z == 3)
    {
        SUM = A * B;
        printf("MULTIPLICATION IS IS %f", SUM);
    }
    else if (Z == 4)
    {
        SUM = A / B;
        printf("DIVISION IS IS %f", SUM);
    }
    else
    {
        printf("NIGGA RESTART AND ENTER A VALID NUMBER");
    }
    return 0;
}