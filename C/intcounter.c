#include<stdio.h>
int main () {
    int num,comp=10;
    printf("Enter Number To Count ");
    scanf("%d",&num);
    for (int i = 1; i < comp; i++)
    {
        if (num<comp)
        {
            printf("%d",i);
            return 0;
        }
        comp=comp*10;
    }
    return 0;
}