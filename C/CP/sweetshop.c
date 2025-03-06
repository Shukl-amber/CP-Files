#include<stdio.h>
int main () {
    int money,laddu,jalebi=0,rem;
    scanf("%d %d",&money,&laddu);
    rem=money-(laddu*10);
    jalebi=rem/20;
    printf("%d",jalebi);
    return 0;
}