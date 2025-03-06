#include<stdio.h>
#include<string.h>
int main (void) {
    int tc,i,sz;
    char str[100];
    scanf("%d",&tc);
    for (i = 0; i < tc; i++)
    {
        scanf("%s",&str);
        sz=(strlen(str));
        if (sz<=10)
        {
            printf("%s\n",str);
        }
        else
        {
            printf("%c%d%c\n",str[0],sz-2,str[sz-1]);
        }
    }
    return 0;}