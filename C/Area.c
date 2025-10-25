#include <stdio.h>
int main()
{
    int Z;
    float side, l, b, r, A;
    printf("Welcome to the area calculator Enter 1 for Circle 2 for Square 3 for Rectangle 4 for Triangle ");
    scanf("%d", &Z);
    switch (Z)
    {
    case 1:
        printf("Enter Radius ");
        scanf("%f", &r);
        A = (3.14) * (r * r);
        printf("The area of given Circle is %f Sq. Units", A);
        break;
    case 2:
        printf("Enter Side ");
        scanf("%f", &side);
        A = (side * side);
        printf("The area of given Square is %f Sq. Units", A);
        break;
    case 3:
        printf("Enter Length ");
        scanf("%f", &l);
        printf("Enter Breadth ");
        scanf("%f", &b);
        A = (l * b);
        printf("The area of given Rectangle is %f Sq. Units", A);
        break;
    case 4:
        printf("Enter Perpendicular ");
        scanf("%f", &l);
        printf("Enter Base ");
        scanf("%f", &b);
        A = (l * b) / 2;
        printf("The area of given Triangle is %f Sq. Units", A);
        break;
    default:
        printf("Enter a valid value");
    }
    return 0;
}