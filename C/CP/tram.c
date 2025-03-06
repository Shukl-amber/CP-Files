#include<stdio.h>
int main () {
    int tc;
    int max=0,curr=0;
    scanf("%d",&tc);
    while (tc>0)
    {
        int exit,enter;
        scanf("%d %d",&exit,&enter);
        curr=curr+enter-exit;
        if (curr>max)
        {max=curr;}
        tc--;
    }
    printf("%d",max);
    return 0;
}