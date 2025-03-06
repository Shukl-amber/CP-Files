#include<stdio.h>
int main () {
    int tc;
    scanf("%d",&tc);
    while (tc>0)
    {
        int z,rem;
        scanf("%d",&z);
        rem=z%3;
        if ((rem==1)||(rem==2))
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        tc--;
    }
    
    return 0;
}