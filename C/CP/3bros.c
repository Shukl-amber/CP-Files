#include<stdio.h>
int main () {
    int a,b,c;
    scanf("%d %d",&a,&b);
    if (((a==1)||(a==2))&&((b==2)||(b==1)))
    {
        printf("3");
    }
    else if (((a==2)||(a==3))&&((b==3)||(b==2)))
    {
        printf("1");
    }
    else
    {
        printf("2");
    }
    return 0;
}