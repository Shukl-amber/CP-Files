#include <stdio.h>
int main()
{
     float a, b, c, value;
     int z;
     printf("ENTER 1ST NO. NIGGA ");
     scanf("%f", &a);
     printf("ENTER 2ND NO. NIGGA ");
     scanf("%f", &b);
     printf("ENTER 3RD NO. NIGGA ");
     scanf("%f", &c);
     printf("ENTER OPP. 1 FOR ADDITON, 2 FOR SUBTRACTION, 3 FOR MULTIPLICATION, 4 FOR DIVISION ");
     scanf("%d", &z);
     switch (z)
     {
     case 1:
          value = a + b + c;
          printf("VALUE IS %f", value);
          break;
     case 2:
          value = a - b - c;
          printf("VALUE IS %f", value);
          break;
     case 3:
          value = a * b * c;
          printf("VALUE IS %f", value);
          break;
     case 4:
          value = a / b / c;
          printf("VALUE IS %f", value);
          break;
     default:
          break;
     }
     return 0;
}