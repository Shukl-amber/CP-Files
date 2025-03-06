#include<stdio.h>
#include<math.h>
int main () {
    int tc;
    scanf("%d",&tc);
    while (tc>0)
    {
        int n,x,count=0;
        scanf("%d %d",&n,&x);
        while (n>0)
        {
            if ((n+x)%2==0)
            {
                count++;
            }
            n--;
        }
        printf("%d\n",count-1);
        tc--;
    }
    return 0;
}