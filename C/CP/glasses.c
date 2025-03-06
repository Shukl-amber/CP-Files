#include<stdio.h>
int main () {
    int pl,ml;
    scanf("%d %d",&pl,&ml);
    if (ml>(2*pl))
    {
        printf("PLASTIC");
    }
    else
    {
        printf("METAL");
    }
    
    return 0;
}