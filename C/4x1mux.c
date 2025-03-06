#include<stdio.h>
#include<stdlib.h>
int main () {
    system("cls");
    int D0,D1,D2,D3,S0,S1,OP;
    main:
    printf("WELCOME TO THE 4X1 MUX\n");
    printf("Enter Data 0 :");
    scanf("%d",&D0);
    printf("Enter Data 1 :");
    scanf("%d",&D1);
    printf("Enter Data 2 :");
    scanf("%d",&D2);
    printf("Enter Data 3 :");
    scanf("%d",&D3);
    printf("Enter Switch 0 :");
    scanf("%d",&S0);
    printf("Enter Switch 1 :");
    scanf("%d",&S1);
    if (S0==0&&S1==0)
    {OP=D0;}
    else if (S0==0&&S1==1)
    {OP=D1;}
    else if (S0==1&&S1==0)
    {OP=D2;}
    else if (S0==1&&S1==1)
    {OP=D3;}
    else
    {printf("INVALID Switch INPUT Retry:\n");
    goto main;}
    printf("Entered MUX is\n");
    printf("D0--> %d\n",D0);
    printf("D1--> %d\n",D1);
    printf("D2--> %d\n",D2);
    printf("D3--> %d\n",D3);
    printf("         _______ \n");
    printf(" D0 --> | 4 X 1 |\n");
    printf(" D1 --> |  MUX  |\n");
    printf(" D2 --> |  B Y  | ---> OP --> %d\n",OP);
    printf(" D3 --> |_A̲M̲B̲E̲R̲_|\n");
    printf("          S1  S0\n");
    printf("          %d  %d\n",S1,S0);
    return 0;}