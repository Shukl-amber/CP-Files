#include<stdio.h>
int main () {
    int i=0,tc;
    int a,b,c,n;
    int sum=0;
    scanf("%d",&tc);
    for ( i = 0; i < tc; i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        n=a+b+c;
        if (n>1)
        {
            sum=sum+1;
        }
        
    }
    printf("%d",sum);
    return 0;
}