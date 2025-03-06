#include<stdio.h>
int main () {
    int day;
    scanf("%d",&day);
    if (day%7==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    
    return 0;
}