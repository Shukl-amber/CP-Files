#include <stdio.h>
int main()
{
    int num, comp = 1000000000;
    printf("Enter Number To Count ");
    scanf("%d", &num);
    for (int i = 10; i > 0; i--)
    {
        if (num >= comp)
        {
            printf("%d", i);
            return 0;
        }
        comp = comp / 10;
    }
    return 0;
}