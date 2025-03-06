#include<stdio.h>
int main () {
    int z;
    float a,b,value;
    printf("ENTER VALUE 1 ");
    scanf("%f",&a);
    printf("ENTER VALUE 2 ");
    scanf("%f",&b);
        printf("ENTER 1 FOR ADD. , 2 FOR SUB. , 3 FOR MULT. , 4 FOR DIV. ");
        scanf("%d",&z);
          switch (z){
          case 1:
            value=a+b;
            printf("Value is %.2f",value);
           break;
          case 2:
            value=a-b;
            printf("Value is %.2f",value);
           break;
          case 3:
            value=a*b;
            printf("Value is %.2f",value);
           break;
          case 4:
            value=a/b;
            printf("Value is %.2f",value);
           break;
        default: 
            printf("NIGGA RESTART AND ENTER A VALID NUMBER (1-4)");
        }
return 0;
}